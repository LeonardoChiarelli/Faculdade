nome = input("Informe seu nome: ")
salarioAtual = float(input("Informe seu salário atual: "))
if salarioAtual <= 1500:
    print("Nome: ", nome, "\nSalario antes do ajuste: R$", salarioAtual)
    salarioAtual += salarioAtual*0.2
    print("Novo salário: R$", salarioAtual)
elif salarioAtual < 2800:
    print("Nome: ", nome, "\nSalario antes do ajuste: R$", salarioAtual)
    salarioAtual += salarioAtual*0.15
    print("Novo salário: R$", salarioAtual)
elif salarioAtual < 5000:
    print("Nome: ", nome, "\nSalario antes do ajuste: R$", salarioAtual)
    salarioAtual += salarioAtual*0.10
    print("Novo salário: R$", salarioAtual)
else: 
    print("Nome: ", nome, "\nSalario antes do ajuste: R$", salarioAtual)
    salarioAtual += salarioAtual*0.05
    print("Novo salário: R$", salarioAtual)