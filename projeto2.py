'''

Escreva um programa que, ao iniciar gera um valor aleatório de 1 a 10 e permite que o usuário chute um número até que o valor aleatório gerado no inicio do programa seja chutado corretamente. 

O programa deve informar se o chute do usuário é maior ou menor que o valor gerado no inicio do programa.
# Método 5Q's para montar um algoritmo: 

Analise criticamente o problema e descubra: 
(Tente explicar este problema para você mesmo em voz alta e peça mais informações/investigue mais até você compreender completamente o problema.)

1: Quais são os dados necessários? 
-Um número aleatório de 1 a 10 => Função random.randint(1,10)
-Um chute do usuário => input()

2: O que devo fazer com estes dados? 
-Comparar o número aleatório com o chute do usuário => Estrutura condicional (if, elif, else)

3: Quais são as restrições deste problema? 
- O número aleatório deve estar entre 1 e 10
- O chute do usuário deve ser um número inteiro
- O chute do usuário deve estar entre 1 e 10


4: Qual é o resultado esperado? 
- O programa deve continuar pedindo chutes até que o usuário acerte o número aleatório
- O programa deve informar se o chute do usuário é maior ou menor que o número aleatório

5: Qual é a sequência de passos necessárias para chegar ao resultado esperado? 
1 função random.randint(1,10) para gerar o número aleatório
2 loop while para continuar pedindo chutes até o usuário acertar
3 input() para receber o chute do usuário
4 if, elif, else para comparar o número aleatório com o chute do usuário
5 print() para informar se o chute é maior ou menor que o número aleatório
'''

import random

numero_aleatorio = random.randint(1, 10)
acertou = False
while acertou == False:
    chute = int(input("Chute um número de 1 a 10: "))
    if chute > numero_aleatorio:
        print("Chute maior que numero gerado!") 
    elif chute < numero_aleatorio:
        print("Chute menor que o valor gerado!")
    elif chute == numero_aleatorio:
        print("Parabéns! Você acertou!")    
        acertou = True
print("Você acertou!")    
print("Eu gerei um número de 1 a 10. Tente adivinhar!")

while not acertou:
    try:
        chute = int(input("Qual é o seu chute? "))
        if chute > numero_aleatorio:
            print("Muito alto! Tente um número menor.")
        elif chute < numero_aleatorio:
            print("Muito baixo! Tente um número maior.")
        else: # chute == numero_aleatorio
            acertou = True
    except ValueError:
        print("Entrada inválida. Por favor, digite um número inteiro.")

print(f"Parabéns! Você acertou! O número era {numero_aleatorio}.")
