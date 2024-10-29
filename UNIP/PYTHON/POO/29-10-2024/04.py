def esta_contida(str1, str2):
    if str2 in str1:
        print(f"A string número dois '{str2}' está contida na string número 1 '{str1}'")
    else:
        print(f"A string número dois '{str2}' NÃO está contida na string número 1 '{str1}'")

str1 = input("Digite uma palavra: ")
str2 = input("Digite outra palavra: ")

esta_contida(str1, str2)
    