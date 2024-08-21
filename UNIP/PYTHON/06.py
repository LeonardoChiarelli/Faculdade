nome = input("Informe seu nome: ")
turno = input("Qual o turno que você estuda? (M-V-N): ")
turno = turno.upper()
if turno == 'M':
    print("Bom dia!", nome)
elif turno == 'V':
    print("Boa tarde!", nome)
elif turno == 'N':
    print("Boa noite!", nome)
else:
    print("Turno Inválido")