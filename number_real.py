# 7) Crie um algoritmo que leia um número real e mostre na tela o seu dobro e a
# sua terça parte.
# Ex:
# Digite um número: 3.5
# O dobro de 3.5 é 7.0
# A terça parte de 3.5 é 1.16666

number_real = float(input("Digite um número: "))

# Calcula o dobro do número
dobro = number_real * 2

# Calcula a terça parte do número
terca_parte = number_real / 3

# Exibe os resultados formatados
print(f"O dobro de {number_real} é {dobro}")
print(f"A terça parte de {number_real} é {terca_parte:.2f}")