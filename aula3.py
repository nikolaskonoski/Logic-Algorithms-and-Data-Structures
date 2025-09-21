# Laços de repetição 
for palavra in range(1, 4):
    print("Carregando...")
'''
for item in coleção:
    expressão
'''

for item in range(1, 20) #Ele irá até 19 e não até 20
print(item)

#Esse for fará um pulo de dois em dois na contagem
for item in range(1, 20, 2):
    print(item)

# impressão de nomes de uma lista
nomes = ["Ana", "Maria", "João"]
for nome in nomes: #convenção usar nome no singular para plurais na iteração da lista
    print(nome)