numero = int(input("Informe um número de 3 dígitos: "))
str_numero = str(numero)
soma = int(str_numero[0]) + int(str_numero[1]) + int(str_numero[2])
if 100 <= numero <=999:
    print("A soma dos algarismos de", numero, "é: ", soma, "(",str_numero[0], "+",str_numero[1], "+",str_numero[2],")")
else:
    print("O número deve ter 3 algarismos e ser maior que 0")

