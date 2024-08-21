n1 = float(input("Informe o valor da N1: "))
n2 = float(input("Informe o valor da N2: "))
n3 = float(input("Informe o valor da N3: "))
me = (n1+n2+n3)/3
media = (n1+n2*2+n3*3+me)/7
if media >= 90:
    print("Conceito A, aluno aprovado")
elif media >= 75 and media < 90:
    print("Conceito B, aluno aprovado")
elif media >= 60 and media < 75:
    print("Conceito C, aluno aprovado")
elif media >= 40 and media < 60:
    print("Conceito D, aluno reprovado")
else:
    print("Conceito E, aluno reprovado")