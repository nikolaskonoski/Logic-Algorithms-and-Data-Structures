# 16) Escreva um programa para calcular a redução do tempo de vida de um
# fumante. Pergunte a quantidade de cigarros fumados por dias e quantos anos
# ele já fumou. Considere que um fumante perde 10 min de vida a cada cigarro.
# Calcule quantos dias de vida um fumante perderá e exiba o total em dias.

#Constantes para os dados necessários para equações
MINUTOS_PERDIDOS_POR_CIGARRO = 10
DIAS_NO_ANO = 365
MINUTOS_NO_DIA = 1440

#Inputs
# A quantidade de cigarros é um número inteiro.
cigarros_por_dia = int(input("Quantos cigarros você fuma por dia? "))

# Anos fumando 
anos_fumando = float(input("Há quantos anos você fuma? "))

#Calculos pra chegar na resposta
# 1. Calcula o total de cigarros fumados na vida.
total_cigarros = cigarros_por_dia * anos_fumando * DIAS_NO_ANO

# 2. Calcula o total de minutos de vida perdidos.
total_minutos_perdidos = total_cigarros * MINUTOS_PERDIDOS_POR_CIGARRO

# 3. Converte os minutos perdidos para dias.
dias_perdidos = total_minutos_perdidos / MINUTOS_NO_DIA

#Print
print(f"Você perdeu aproximadamente {int(dias_perdidos)} dias de vida.")