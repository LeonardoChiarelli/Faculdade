altura = int(input("Informe sua altura em cm: "))
sexo = input("Informe seu sexo (M-F): ")
sexo = sexo.upper()
if sexo == 'M':
    print("Seu peso ideal seria", (72.7*altura)-58, "kg")
elif sexo == 'F':
    print("Seu peso ideal seria", (62.1*altura)-44.7, "kg")
else:
    print("Seu sexo não existe")