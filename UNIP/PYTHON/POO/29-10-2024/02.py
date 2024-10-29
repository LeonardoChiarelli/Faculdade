def contar_caractere(string, caracter):
    return string.count(caracter)

string = input("Informe uma string: ")
caracter = input("Informe um caracter: ")

print(f"O caracter '{caracter}' aparece {contar_caractere(string, caracter)} vezes na palavra '{string}'")