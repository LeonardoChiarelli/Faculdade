num = int(input("Digite um número: "))
divisor = 0
i = 1
while i <= num:
    if num % i ==0:
        divisor += 1
    i += 1
if divisor <= 2:
    print("O número ",num, " é primo")
else:
    print("O número ", num, " não é primo")