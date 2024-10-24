def dataExtenso(dia,mes,ano):
    data = 1/1/1
    while data != 00/00/0000:
        match mes:
            case 1:
                print(f'{dia} de Janeiro de {ano}')
            case 2:
                print(f'{dia} de fevereiro de {ano}')
            case 3:
                print(f'{dia} de março de {ano}')
            case 4:
                print(f'{dia} de abril de {ano}')
            case 5:
                print(f'{dia} de maio de {ano}')
            case 6:
                print(f'{dia} de junho de {ano}')
            case 7:
                print(f'{dia} de julho de {ano}')
            case 8:
                print(f'{dia} de agosto de {ano}')
            case 9:
                print(f'{dia} de setembro de {ano}')
            case 10:
                print(f'{dia} de outubro de {ano}')
            case 11:
                print(f'{dia} de novembro de {ano}')
            case 12:
                print(f'{dia} de dezembro de {ano}')

dia = int(input("digite o dia: "))
mes = int(input("digite o mes: "))
ano = int(input("digite o ano: "))

dataExtenso(dia,mes,ano)