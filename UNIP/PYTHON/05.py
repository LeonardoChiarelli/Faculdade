n1 = float(input('informe o valor do primeiro produto: '))
n2 = float(input('informe o valor do segundo produto: '))
n3 = float(input('informe o valor do terceiro produto: '))

if n1 < n2 and n1 < n3:
    print('O produto com o melhor preço é o primeiro, custando: ',n1)
elif n2 < n1 and n2 < n3:
    print('O produto com o melhor preço é o segundo, custando: ',n2)
elif n3 < n2 and n3 < n1:
    print('O produto com o melhor preço é o terceiro, custando: ',n3)
else:
    print('Os três produtos tem o mesmo preço')
