def chamaImposto(taxaImp, preco):
    taxaImp /= 100
    preco = preco + (preco*taxaImp)
    print(f"O preço do produto após o acréscimo da taxa é de R${preco}")

taxa = float(input("Informe o valor da taxa: "))
preco = float(input("Informe o preço do produto: "))

chamaImposto(taxa, preco)