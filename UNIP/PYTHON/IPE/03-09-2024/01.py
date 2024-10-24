nome = ""
while nome == "":
    nome = input("Digite seu nome: ")

idade = 1
while idade < 14 or idade > 80:
    idade = int(input("Informe uma idade entre 14 e 80: "))

salario = 0
while salario <= 0:
    salario = float(input("Informe seu salário: "))

sexo = ""
while sexo != "F" and sexo != "f" and sexo != "M" and sexo != "m":
    sexo = input("Informe um sexo válido: ")

print("Nome ..... ", nome ," \nIdade .... " , idade ," anos \nSalário ..... R$", salario ,"\nSexo ..... " , sexo , "")