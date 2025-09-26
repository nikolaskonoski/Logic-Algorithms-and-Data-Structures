'''
10) Faça um programa que leia a largura e a altura de uma parede em metros,
calcule a sua área e a quantidade de tinta necessária para pintá-la, sabendo
que cada litro de tinta, pinta uma área de 2m².
'''

altura = float(input("Digite a altura da parede: "))
largura = float(input("Digite a largura da parede: "))

# Calcula a área da parede (retangular)
area = altura * largura

# Define o rendimento da tinta (quantos m² por litro)
RENDIMENTO_TINTA_POR_LITRO = 2

# Calcula a quantidade de tinta necessária
tinta_necessaria = area / RENDIMENTO_TINTA_POR_LITRO

print(f"Sua parede tem a dimensão de {largura}X{altura} e sua área é de {area:.2f}m².")
print(f"Para pintar essa parede, você precisará de {tinta_necessaria:.2f}litros de tinta.")