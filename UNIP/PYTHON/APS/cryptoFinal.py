# O código escolhe números aleatórios para formar 'n', mas não garante que sejam primos, como seria necessário no RSA.
# A chave pública é composta pelo par (k, n), onde 'k' é escolhido aleatóriamente entre 1 e 100 e garantido como coprimo com n. O valor de 'd' também é escolhido aleatóriamente, sem seguir a relação usual com 'k'
# Criptografia e Descriptografia usam a estrutura de uma cifra de substituição linear (RSA usa o modelo exponencial)
# Código divide a mensagem em blocos para evitar o overflow, garantindo assim que os blocos de dados fiquem dentro dos limites do valor de 'n'

import random
import math

def gerar_chaves():
    a = random.randint(100000000000, 200000000000)
    b = random.randint(100000000000, 200000000000)
    n = a * b

    while True:
        k = random.randint(1, 100)
        if k % 2 != 0 and math.gcd(k, n) == 1:
            break

    d = random.randint(1, 100)
    
    return (k, n), d

def criptografia(mensagem, chave_publica, chave_privada):
    k, n = chave_publica
    d = chave_privada

    # Converte a mensagem para um número usando UTF-8
    m = int.from_bytes(mensagem.encode('utf-8'), 'big')

    # Garante que m esteja dentro dos limites
    if m >= n:
        m = m % n  # Modificar m para garantir que seja menor que n

    # Aplica a operação de encriptação
    c = (m + d) * k % n
    return c

def descriptografia(mensagemCrip, chave_privada, chave_publica):
    k, n = chave_publica
    d = chave_privada

    # Calcule o inverso de k
    try:
        c_inv = pow(k, -1, n)  # Inverso de k módulo n
    except ValueError:
        return "Erro: k não é coprimo com n."

    # Reverte a operação de encriptação
    m = (mensagemCrip * c_inv - d) % n

    # Garantir que a mensagem m seja positiva
    if m < 0:
        m += n

    # Corrigir o comprimento para a conversão de bytes
    mensagem_length = (m.bit_length() + 7) // 8 or 1

    # Se a mensagem m é 0, usamos apenas 1 byte
    if m == 0:  
        mensagem_length = 1

    try:
        mensagem = m.to_bytes(mensagem_length, 'big').decode('utf-8')  # Tenta decodificar
    except UnicodeDecodeError:
        return "Erro na descriptografia: sequência de bytes inválida."

    return mensagem

# Função para limitar o tamanho da mensagem e dividir em partes se necessário
def preparar_mensagem(mensagem, n):
    max_bytes = (n.bit_length() + 7) // 8 - 1  # Deixar espaço para evitar overflow
    if len(mensagem.encode('utf-8')) > max_bytes:
        partes = []
        bytes_mensagem = mensagem.encode('utf-8')
        for i in range(0, len(bytes_mensagem), max_bytes):
            partes.append(bytes_mensagem[i:i + max_bytes].decode('utf-8'))  # Decodifica aqui
        return partes
    return [mensagem]

# Exemplo de uso
chave_publica, chave_privada = gerar_chaves()
print(f"Chave pública: {chave_publica}")
print(f"Chave privada: {chave_privada}")

# Limitar o tamanho da mensagem
mensagem = input("Insira uma mensagem para criptografar (máximo 1000 caracteres): ")
if len(mensagem) > 1000:
    print("Erro: a mensagem não pode exceder 1000 caracteres.")
else:
    # Prepara a mensagem, dividindo em partes se necessário
    partes_mensagem = preparar_mensagem(mensagem, chave_publica[1])
    
    mensagemCrip = []
    for parte in partes_mensagem:
        # Criptografa cada parte da mensagem
        mensagemCrip.append(criptografia(parte, chave_publica, chave_privada))
    
    print(f"Texto criptografado: {mensagemCrip}")

    # Descriptografa a mensagem
    mensagemDescrip = []
    for parte in mensagemCrip:
        mensagemDescrip.append(descriptografia(parte, chave_privada, chave_publica))

    # Juntar as partes descriptografadas
    mensagemFinal = ''.join(mensagemDescrip)
    print(f"Mensagem descriptografada: {mensagemFinal}")

    # Verificação se a mensagem original e a mensagem descriptografada são iguais
    if mensagem == mensagemFinal:
        print("A descriptografia funcionou corretamente!")
    else:
        print("A descriptografia falhou.")
