# Aumento em porcentagem, atribuindo a uma constante para facilitar mudanças futuras
PERCENTUAL_AUMENTO = 15

while True:
    salario_str = input("Digite o salário do funcionário: R$")
    try:
        # 1. Remove os pontos de milhar. Ex: "2.000,50" -> "2000,50"
        # 2. Substitui a vírgula decimal por ponto. Ex: "2000,50" -> "2000.50"
        salario_limpo = salario_str.replace('.', '').replace(',', '.')
        # 3. Tenta converter a string limpa para float
        salario = float(salario_limpo)
        break # Sai do loop se a conversão for bem-sucedida
    except ValueError:
        # Pede para o usuário tentar novamente se a entrada for inválida
        print("Valor inválido. Por favor, digite um número (ex: 1500.50 ou 1.500,50).")

# Cálculo mais direto do aumento
aumento = salario * (PERCENTUAL_AUMENTO / 100)

#Calculo do novo salário
novo_salario = salario + aumento

#Imprimindo os resultados
print(f"O valor de aumento é de R${aumento:.2f}")
print(f"O novo salário do funcionário é de R${novo_salario:.2f}")