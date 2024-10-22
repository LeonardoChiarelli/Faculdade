def soma_num(valor1,valor2,valor3):
    return valor1 + valor2 + valor3

valor1_str = input("Informe o valor 1: ")
valor1 = int(valor1_str)
valor2_str = input("Informe o valor 2: ")
valor2 = int(valor2_str)
valor3_str = input("Informe o valor 3: ")
valor3 = int(valor3_str)

num = soma_num(valor1, valor2, valor3)
print(num)