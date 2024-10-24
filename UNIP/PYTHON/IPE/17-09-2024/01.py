peso = float(input("Informe seu peso: "))
cod = int(input("Informe o código do planeta: "))

if cod == 1:
    peso *= 0.37
    print("Seu peso em em Mercúrio seria de ", peso, "Kg")
elif cod == 2:
    peso *= 0.88
    print("Seu peso em Vênus seri de ", peso, "Kg") 
elif cod == 3:
    peso *= 0.38
    print("Seu peso em Marte seria de ", peso, "Kg")
elif cod == 4:
    peso *=  2.64
    print("Seu peso em Júpiter seria de ", peso, "Kg")
elif cod == 5:
    peso *= 1.15
    print("Seu peso em Saturno seria de ", peso, "Kg")
elif cod == 6:
    peso *= 1.17
    print("Seu peso em Urano seria de ", peso, "Kg")
else:
    print("Código do Planeta inválido, os códigos são de 1-6")
