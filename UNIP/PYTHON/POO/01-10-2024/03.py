numeros = []
par = []
impar = []

for cont in range(0,10,1):
    numeros.append(int(input("Digite um número: ")))

for i in range(0,10,1):
    if numeros[i] % 2 == 0:
        par.append(numeros[i])
    else:
        impar.append(numeros[i])
print("A lista de todos os números é: ", numeros)
print("Os números pares: ", par)
print("Os números ímpares são: ", impar)