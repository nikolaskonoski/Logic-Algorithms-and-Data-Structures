#Captando o input do usuário, tratando ele como int para fazer as operações matemáticas
number_1 = int(input("Digite um número: "))
number_2 = int(input("Digite outro número: "))
number_3 = int(input("Digite mais um número: "))

#Usando as funções max e min de python para saber quais os maiores e menore números
maior_numero = max(number_1, number_2, number_3)
menor_numero = min(number_1, number_2, number_3)

#Calculo do delta, fazendo a subtração do maior menos o menor número
delta = maior_numero - menor_numero

#Imprimindo os resultados
print(f"O delta dos números digitados é: {delta}")