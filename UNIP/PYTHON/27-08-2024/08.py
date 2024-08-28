import math

num = int(input("Informe um número: "))
if num < 0:
    print("O quadrado do número informado é", math.pow(num,2))
else:
    print("A raiz quadrada do número é", math.sqrt(num))