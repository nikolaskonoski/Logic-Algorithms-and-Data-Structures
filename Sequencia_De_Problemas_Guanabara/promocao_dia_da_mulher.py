# Constantes para as regras de negócio
# Usar constantes no topo facilita a manutenção do código.
DESCONTO_MULHER = 13  # em porcentagem
DESCONTO_HOMEM = 5    # em porcentagem

#Possíveis entradas para cada gênero
# Centralizar isso aqui também facilita adicionar novas opções (ex: 'mulher', 'homem')
OPCOES_FEMININO = ('f', 'feminino', 'mulher', 'w', 'woman')
OPCOES_MASCULINO = ('m', 'masculino', 'homem', 'man')

try:
    # 1. Coleta de dados do usuário
    valor_de_compra = float(input("Digite o seu valor de compra: R$"))
    genero_do_cliente = input("Qual o seu gênero (M/F)? ").strip().lower()

    # 2. Lógica de processamento e decisão
    desconto_aplicado = 0.0  # Inicia o desconto como zero

    if genero_do_cliente in OPCOES_FEMININO:
        desconto_aplicado = (valor_de_compra / 100) * DESCONTO_MULHER
        print(f"Parabéns! Você recebeu um desconto especial de {DESCONTO_MULHER}%.")

    elif genero_do_cliente in OPCOES_MASCULINO:
        desconto_aplicado = (valor_de_compra / 100) * DESCONTO_HOMEM
        print(f"Você recebeu um desconto de {DESCONTO_HOMEM}%.")
        
    else:
        print("Gênero não reconhecido. Nenhum desconto foi aplicado.")

    # 3. Cálculo e exibição do resultado final
    valor_final = valor_de_compra - desconto_aplicado
    
    if desconto_aplicado > 0:
        print(f"Valor do desconto: R${desconto_aplicado:.2f}")

    print(f"O valor total da sua compra é: R${valor_final:.2f}")

except ValueError:
    # Tratamento de erro caso o usuário não digite um número
    print("Erro: Por favor, digite um valor numérico válido para a compra.")