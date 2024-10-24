user = int(input("Digite o número de valores que deseja digitar: "))

i = 1
maior = float('-inf')
while i <= user:
    num = int(input("Digite um número: "))
    if num > maior:
        maior = num
    if i == 1:
        maior = num
    i+=1
print(maior)
