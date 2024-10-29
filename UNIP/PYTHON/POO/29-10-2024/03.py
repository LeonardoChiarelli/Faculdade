def ver_vogal(nome):
    nome.upper()
    if nome[0] in 'AEIOU':
        print(f"Seu nome {nome} começa com vogal")
    else:
        print(f"Seu nome {nome} começa NÃO vogal")

nome = input("Digite seu nome: ")
ver_vogal(nome)