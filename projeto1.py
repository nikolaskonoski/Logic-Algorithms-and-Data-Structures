'''
Crie um programa que recebe um número e imprime o seu fatorial. 

#Metódo 5Q's para montar um algoritmo: 

Analise criticamente o problema:
(Tente explixar este problema para você mesmo em voz alta e peça mais informações/investigue mais até você comprender completamente o problema.)

1. Quais são os dados de entrada necessários para resolver o problema?
numero
2: O que devo fazer com esses dados?
eu devo calcular o fatorial do número fornecido
3: Quais são as restrições deste problema?
Deve ser um vakor inteiro não negativo
4: Qual é o resultado esperado?
O fatorial do número fornecido seja exibido na tela
5: Quais são os passos para chegar ao resultado esperado?
input numero 
if numero > 0
if numero = inteiro 
fatorial = 1
loop de 1 até numero
fatorial = fatorial * numero
print(fatorial)
''' 

input = int(input("Digite um número inteiro não negativo para calcular o fatorial: "))
numero_usuario = int(input("Digite um número inteiro não negativo para calcular o fatorial: "))

if input > 0:
if numero_usuario >= 0: # Inclui o caso do fatorial de 0, que é 1
    fatorial = 1 
    for numero in range(1, input + 1):
    for numero in range(1, numero_usuario + 1):
        fatorial = fatorial * numero
    print(f"O fatorial de {input} é {fatorial}")
    print(f"O fatorial de {numero_usuario} é {fatorial}")
else:
    print("O fatorial não é definido para números negativos.")