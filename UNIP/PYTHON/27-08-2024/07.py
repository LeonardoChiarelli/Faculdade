import math

n1 = int(input(' Informe o valor que deseja saber a raiz: '))

if n1 < 0:
    print('O número é inválido')
else:
    print('A raiz do número é ', math.sqrt(n1))