import math

n1 = int (input('Informe o número que deseja saber a raiz e o quadrado:'))

if n1 < 0 : 
    print('Número inválido')
else:
    print('Raiz do número: ', math.sqrt(n1))
    print('O número elevado ao quadrado é: ', math.pow(n1,2))