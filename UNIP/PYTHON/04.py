ValorCompra = int(input("Qual foi o valor da compra?: "))
QntdPrestações = int(input("Qual a quantidade de prestações?: "))
ValorPrestação = ValorCompra/QntdPrestações
if ValorPrestação < 50:
    print("Não é possível fazer o financiamento")
else:
    print("Cada prestação ficou no valor de R$",ValorPrestação)