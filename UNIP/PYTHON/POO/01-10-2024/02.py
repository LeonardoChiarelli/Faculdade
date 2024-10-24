numeros = []
i = 0
for cont in range(0, 10, 1): 
    """ (começo, fim, passo) """
    numeros.append(int(input("Digite um número inteiro: ")))
    numeros.reverse()
print(numeros)