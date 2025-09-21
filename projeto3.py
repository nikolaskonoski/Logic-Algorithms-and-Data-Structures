'''
Levando em consideração a velocidade máxima permitida em uma via de 80 km/h, faça um
programa que leia a velocidade de um carro e mostre uma mensagem dizendo se ele está
acima ou não da velocidade permitida.
Se estiver acima, mostre também uma mensagem dizendo em quantos km/h ele estava
acima do limite.

Analise criticamente o problema e descubra: 
(Tente explicar este problema para você mesmo em voz alta e peça mais informações/investigue mais até você compreender completamente o problema.)

1: Quais são os dados necessários? 
Velocidade do carro
2: O que devo fazer com estes dados? 
Comparar a velocidade do carro com a velocidade máxima permitida

3: Quais são as restrições deste problema? 
Os valores devem ser numéricos e positivos

4: Qual é o resultado esperado? 
A velocidade do carro e se está acima ou não do limite, e se estiver, em quanto está acima
5: Qual é a sequência de passos necessárias para chegar ao resultado esperado? 
- Ler a velocidade do carro
- Comparar a velocidade do carro com a velocidade máxima permitida (80km/h)
- Se estiver acima, mostrar a diferença
- Mostrar a mensagem final
'''

VELOCIDADE_MAXIMA = 80

try:
    velocidade_str = input("Digite a velocidade do carro em km/h: ")
    velocidade = int(velocidade_str)

    if velocidade < 0:
        print("Erro: A velocidade não pode ser um valor negativo.")
    elif velocidade <= VELOCIDADE_MAXIMA:
        print("O carro está dentro do limite de velocidade.")
    else:
        excesso = velocidade - VELOCIDADE_MAXIMA
        print(f"Atenção! Você ultrapassou o limite de velocidade em {excesso} km/h.")

        if velocidade <= VELOCIDADE_MAXIMA + 10:
            print("Infração: Multa leve.")
        elif velocidade <= VELOCIDADE_MAXIMA + 20:
            print("Infração: Multa grave.")
        else: # Acima de VELOCIDADE_MAXIMA + 20
            print("Infração: Multa gravíssima!")
except ValueError:
    print("Erro: Por favor, digite um número inteiro válido para a velocidade.")