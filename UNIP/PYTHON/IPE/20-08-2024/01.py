num_text = input("Digite um número: ")
num = int(num_text)
if num == 0:
    print("O número é ZERO")
elif num % 2 == 0:
    print("O número é PAR")
else:
    print("O número é ÍMPAR")