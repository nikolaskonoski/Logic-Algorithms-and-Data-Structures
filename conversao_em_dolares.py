valor_em_reais = float(input("Digite um valor em R$: "))

cotacao_dolar = float(input("Digite a cotação do dólar: "))

valor_em_dolar = valor_em_reais / cotacao_dolar

print(f"O valor em dólar é: ${valor_em_dolar:.2f}")