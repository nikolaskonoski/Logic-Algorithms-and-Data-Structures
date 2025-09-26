'''
9) Faça um algoritmo que leia quanto dinheiro uma pessoa tem na carteira (em R$)
e mostre quantos dólares ela pode comprar. Considere US$1,00 = R$3,45.
'''
valor_em_reais = float(input("Digite um valor em R$: "))

cotacao_dolar = float(input("Digite a cotação do dólar: "))

valor_em_dolar = valor_em_reais / cotacao_dolar

print(f"O valor em dólar é: ${valor_em_dolar:.2f}")