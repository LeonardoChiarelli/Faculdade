num1 = int(input("Informe um número: "))
num2 = int(input("Informe mais um número: "))
num3 = int(input("Informe outro número: "))

if num1 > num2 > num3:
    print(num1,num2,num3)
elif num2 > num1 > num3:
    print(num2,num1,num3)
elif num2 > num3 > num1:
    print(num2,num3,num1)
elif num3 > num1 > num2:
    print(num3,num1,num2)
elif num3 > num2 > num1:
    print(num3,num2,num1)
else:
    print("Os números são iguais")
