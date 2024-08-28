km = float(input("Informe os km rodados: "))
l = float(input("Informe a quantidade de gasolina consumida em litros: "))
consumo = km/l
if consumo < 8:
    print("Venda o carro!")
elif consumo < 12:
    print("Econômico")
else:
    print("Super Econômico!")