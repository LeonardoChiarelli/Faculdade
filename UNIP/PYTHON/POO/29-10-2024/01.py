palavra = input("Digite uma string: ")
print("A String tem ", len(palavra), " letras")
print(palavra.upper())
if (palavra.find("A")):
    print("A String não começa com A")
else:
    print("a String começa com A")