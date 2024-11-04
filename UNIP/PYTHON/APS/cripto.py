import random
import Crypto.Util.number
from Crypto.Util.number import inverse  # Usa o módulo inverse diretamente para modinv

def gerarNumeroPrimo(bits=512):
    return Crypto.Util.number.getPrime(bits)

# Geração das chaves públicas e privadas
def gerarChaves():
    P = gerarNumeroPrimo()
    Q = gerarNumeroPrimo()
    N = P * Q
    phi = (P - 1) * (Q - 1)

    # Gera um valor de E coprimo com phi(N)
    E = random.randint(2, phi - 1)
    while gcd(E, phi) != 1:
        E = random.randint(2, phi - 1)
    
    # Calcula a chave privada D
    D = inverse(E, phi)

    return (N, E), (N, D)

# Função de criptografia
def criptografar(mensagem, chave_publica):
    N, E = chave_publica
    # Converte a mensagem em uma lista de números criptografados
    criptografado = [pow(ord(char), E, N) for char in mensagem]
    return criptografado

# Função de descriptografia
def descriptografar(criptografado, chave_privada):
    N, D = chave_privada
    # Converte cada número criptografado de volta ao caractere original
    mensagem = ''.join([chr(pow(c, D, N)) for c in criptografado])
    return mensagem

# Funções auxiliares
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

# Teste do algoritmo
chave_publica, chave_privada = gerarChaves()
mensagem = input("Insira uma mensagem para criptografar: ")
criptografado = criptografar(mensagem, chave_publica)
print("Mensagem criptografada:", criptografado)
print("Chave privada: (copiar e colar para descriptografar) - ", chave_privada)
senha = ""
while(senha != (str) (chave_privada)):
    senha = input("Informe a chave privada para descriptorgrafar a mensagem: ")
print("Mensagem descriptografada:", descriptografar(criptografado, chave_privada))