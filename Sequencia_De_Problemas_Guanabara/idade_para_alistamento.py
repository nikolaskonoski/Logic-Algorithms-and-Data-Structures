import datetime

# Constantes
IDADE_NECESSARIA = 18
# Obtém o ano atual dinamicamente para que o programa não fique desatualizado
ANO_ATUAL = datetime.date.today().year

try:
    # Captando o ano de nascimento
    ano_de_nascimento = int(input("Digite o seu ano de nascimento: "))

    # Validação para garantir que o ano de nascimento seja um valor razoável
    if ano_de_nascimento > ANO_ATUAL or ano_de_nascimento <= 0:
        print(f"Ano inválido. Por favor, insira um ano entre 1 e {ANO_ATUAL}.")
    else:
        # Subtraindo o ano atual pelo ano de nascimento para saber a idade
        idade = ANO_ATUAL - ano_de_nascimento
        print(f"Quem nasceu em {ano_de_nascimento} tem {idade} anos em {ANO_ATUAL}.")

        # Condicional para analisar a situação do alistamento
        if idade < IDADE_NECESSARIA:
            anos_que_faltam = IDADE_NECESSARIA - idade
            ano_alistamento = ANO_ATUAL + anos_que_faltam
            print(f"Ainda faltam {anos_que_faltam} anos para o alistamento.")
            print(f"Seu alistamento será em {ano_alistamento}.")
        elif idade > IDADE_NECESSARIA:
            anos_passados = idade - IDADE_NECESSARIA
            ano_alistamento = ANO_ATUAL - anos_passados
            print(f"Você já deveria ter se alistado há {anos_passados} anos.")
            print(f"Seu alistamento foi em {ano_alistamento}.")
        else: # idade == IDADE_NECESSARIA
            print("Você tem que se alistar IMEDIATAMENTE!")

except ValueError:
    print("Entrada inválida. Por favor, digite um ano válido (ex: 2006).")

