#Constantes para ano atual e idade necessária 

ANO_ATUAL = 2025
IDADE_NECESSARIA = 18

try: 
    #Captando o ano de nascimento 
    ano_de_nascimento = int(input("Digite o seu ano de nascimento: "))

    #Subtraindo o ano atual pelo ano de nascimento para saber a idade 
    idade = ANO_ATUAL - ano_de_nascimento

    #Condicional para analisar se o usuario pode votar 
    if idade >= IDADE_NECESSARIA : 
        print("Você esta apto para votar! ")

    elif ano_de_nascimento > ANO_ATUAL :
        print("Insira um ano válido. ")
    else :
        idade_que_falta = IDADE_NECESSARIA - idade
        print(f"Você ainda não pode votar. Faltam {idade_que_falta} anos para você estar apto.")

except ValueError: 
    print("Por favor digite um ano com 4 digitos e do tipo inteiro. ")