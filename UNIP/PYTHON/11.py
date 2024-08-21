peso = float(input("Informe seu peso: "))
altura = int(input("Informe sua altura em cm: "))
imc = peso/(altura*2)
if imc < 18.5:
    print("Você está desnutrido")
elif peso < 25:
    print("Você está nas condições adequadas")
elif imc < 30:
    print("Você esta acima do peso")
else:
    print("Você está obeso")