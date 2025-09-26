'''
8) Desenvolva um programa que leia uma distância em metros e mostre os valores
relativos em outras medidas.
Ex:
Digite uma distância em metros: 185.72 
A distância de 185.72m corresponde a:
0.18572Km
1.8572Hm
18.572Dam
1857.2dm 
18572.0cm
185720.0mm
'''

distancia_metros = float(input("Digite uma distância em metros: "))

km = distancia_metros / 1000
hm = distancia_metros / 100
dam = distancia_metros / 10
dm = distancia_metros * 10
cm = distancia_metros * 100
mm = distancia_metros * 1000

print(f"A distância de {distancia_metros}m corresponde a:")
print(f"{km}Km")
print(f"{hm}Hm")
print(f"{dam}Dam")
print(f"{dm}dm")
print(f"{cm}cm")
print(f"{mm}mm")