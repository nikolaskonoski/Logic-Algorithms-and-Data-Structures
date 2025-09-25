'''
15) Crie um programa que leia o número de dias trabalhados em um mês e mostre o
salário de um funcionário, sabendo que ele trabalha 8 horas por dia e ganha
R$25 por hora trabalhada.
'''
# Constantes sendo feitas com base no enunciado
HORAS_POR_DIA = 8
VALOR_POR_HORA = 25.00

# Calcula o valor ganho por dia de trabalho
VALOR_POR_DIA = HORAS_POR_DIA * VALOR_POR_HORA

while True:
    try:
        # Dias trabalhados devem ser um número inteiro
        dias_trabalhados = int(input("Digite o total de dias trabalhados no mês: "))
        if dias_trabalhados >= 0:
            break # Sai do loop se a entrada for um número inteiro não negativo
        else:
            print("Por favor, digite um número de dias positivos.")
    except ValueError:
        print("Entrada inválida. Por favor, digite um número inteiro.")

# Cálculo do salário total mensal
salario_total = dias_trabalhados * VALOR_POR_DIA

# Impressão do resultado formatado
print(f"O salário total a receber por {dias_trabalhados} dias trabalhados é de: R${salario_total:.2f}")
