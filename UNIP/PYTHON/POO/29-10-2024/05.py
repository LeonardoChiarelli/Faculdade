def ler_cadeias(a ,b):
    if b in a:
        contagem = a.count(b)
        print('A segunda cadeia está contida na primeira', contagem, 'vezes')
    else:
        print('A segunda cadeia não está contida na primeira')

a = input('Digite a primeira cadeia: ')
b = input('Digite a segunda cadeia: ')

ler_cadeias(a,b)