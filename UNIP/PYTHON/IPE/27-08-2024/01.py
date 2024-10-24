ano = int(input("Informe um ano: "))
if ano%100 != 0 and ano%4 == 0 or ano%400 == 0:
    print("O ano de", ano, "é um ano bissexto")
else:
    print("O ano de", ano, "não é um ano bissexto")