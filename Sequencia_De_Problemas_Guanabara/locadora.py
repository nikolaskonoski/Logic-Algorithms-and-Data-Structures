# 14) A locadora de carros precisa da sua ajuda para cobrar seus serviços. Escreva
# um programa que pergunte a quantidade de Km percorridos por um carro alugado e a
# quantidade de dias pelos quais ele foi alugado. Calcule o preço total a pagar,
# sabendo que o carro custa R$90 por dia e R$0,20 por Km rodado.

# Definindo os custos como constantes para facilitar a leitura e manutenção
CUSTO_POR_DIA = 90.00
CUSTO_POR_KM = 0.20

# Usar float para km permite valores não inteiros (ex: 85.5 km)
kilometros_percorridos = float(input("Digite a quantidade de Km percorridos: "))
dias_alugado = int(input("Digite a quantidade de dias de aluguel: "))

# Cálculo do valor por quilometragem e por dias
valor_por_km = kilometros_percorridos * CUSTO_POR_KM
valor_por_dias = dias_alugado * CUSTO_POR_DIA

# Cálculo do valor total a pagar
valor_total = valor_por_dias + valor_por_km

# Exibindo o resultado de forma clara
print(f"O valor total a pagar é de R$ {valor_total:.2f}")