preço = float(input("Informe o preço do produto: "))
metPag = input("Qual o método de pagamento?: ")
metPag = metPag.upper()
if metPag == 'DINHEIRO' or metPag == 'CHEQUE':
    preço -= preço/0.1
    print("O valor a ser pago é R$",preço)
elif metPag == 'CRÉDITO':
    preço -= preço/0.15
    print("O valor a ser pago é R$",preço)
elif metPag == '2 VEZES NO DINHEIRO':
    print("O valor a ser pago é R$",preço)
elif metPag == '2 VEZES NO CRÉDITO':
    preço += preço/0.1
    print("O valor a ser pago é R$",preço)
else:
    print("Método de pagamento inválido")
