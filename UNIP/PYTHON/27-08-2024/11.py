n1 = int(input('Informe o preço do produto: '))

estado = input('Informe o estado onde o produto será vendido (MG, SP, RJ, MS): ')
estado = estado.upper()

if estado == 'MG':
    n1 += n1*0.07
    print('O valor do produto acrescido do imposto é de: R$ ', n1)
elif estado == 'SP':
    n1 += n1*0.12
    print('O valor do produto acrescido do imposto é de: R$ ', n1)
elif estado == 'RJ':
    n1 += n1*0.15
    print('O valor do produto acrescido do imposto é de: R$ ', n1)
elif estado == 'MS':
    n1 += n1*0.08
    print('O valor do produto acrescido do imposto é de: R$ ', n1)
else:
    print('Estado inválido')
