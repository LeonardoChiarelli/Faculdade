nome = input('Informe seu nome: ')
sexo = input("Infore seu sexo: ")
sexo = sexo.upper();
estadoCivil = input("Qual seu estado civil: ")
estadoCivil = estadoCivil.upper();
if sexo == 'F' and estadoCivil == 'CASADA':
    tempo = input("Informe em anos quanto tempo você está casasda: ")
    print("Parabéns pelos", tempo, " anos de casada")
else:
    print("Nada à declarar")