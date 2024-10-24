n1 = int(input("Informe o primeiro lado do triangulo: "))
n2 = int(input("Informe o segundo lado do triangulo: "))
n3 = int(input("Informe o terceiro lado do triangulo: "))

lados = [n1,n2,n3]


if n1 >= n2+n3 or n2 >= n1+n3 or n3 >= n2+n1:
    print('Os dados nao formam um triangulo')
elif n1 == n2 == n3 :
    print('Os dados formam um triangulo equilatero')
elif n1 == n2 or n2 == n3 or n1 == n3:
    print('Os dados formam um triangulo isoceles')
elif n1 != n2 != n3:
    print('Os dados formam um triangulo escaleno')
else:
    print('')