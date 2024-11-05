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
        print(f"[DEBUG] Valor de m: {m} é maior ou igual a n: {n}. Ajustando m.")
        m = m % n  # Modificar m para garantir que seja menor que n

    # Aplica a operação de encriptação
    c = (m + d) * k % n
    print(f"[DEBUG] Mensagem original (m): {m}")
    print(f"[DEBUG] Texto criptografado (c): {c}")
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

    # Debug: Imprimindo valores intermediários
    print(f"[DEBUG] Valor criptografado (c): {mensagemCrip}")
    print(f"[DEBUG] Chave privada (d): {d}")
    print(f"[DEBUG] Chave pública (k, n): ({k}, {n})")
    print(f"[DEBUG] Valor de m após operação: {m}")

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

    print(f"[DEBUG] Mensagem descriptografada: {mensagem}")
    return mensagem

# Exemplo de uso
chave_publica, chave_privada = gerar_chaves()
print(f"Chave pública: {chave_publica}")
print(f"Chave privada: {chave_privada}")

# Limitar o tamanho da mensagem
mensagem = input("Insira uma mensagem para criptografar (máximo 1000 caracteres): ")
if len(mensagem) > 1000:
    print("Erro: a mensagem não pode exceder 1000 caracteres.")
else:
    # Criptografa a mensagem
    mensagemCrip = criptografia(mensagem, chave_publica, chave_privada)
    print(f"Texto criptografado: {mensagemCrip}")

    # Descriptografa a mensagem
    mensagemDescrip = descriptografia(mensagemCrip, chave_privada, chave_publica)
    print(f"Mensagem descriptografada: {mensagemDescrip}")

    # Verificação se a mensagem original e a mensagem descriptografada são iguais
    if mensagem == mensagemDescrip:
        print("A descriptografia funcionou corretamente!")
    else:
        print("A descriptografia falhou.")