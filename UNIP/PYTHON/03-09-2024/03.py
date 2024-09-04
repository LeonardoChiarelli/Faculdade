usu = int(input("Digite quantos valores quer mostrar: "))
maior = 0
i = 0

while (i <= usu):
    num = int(input("Digite o numero: "))

    if num != 0:
        if num > maior:
            print(num)
        else:
            print(maior)
    elif num == 0:
        break
    