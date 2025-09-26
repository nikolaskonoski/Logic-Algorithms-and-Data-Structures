#Constante de velocidade permitida 
VELOCIDADE_PERMITIDA = 80

#Constante de custo por velocidade excedida
CUSTO_DE_MULTA_POR_KILOMETRO = 5

#Variável que recebe o input do valor inteiro do usuário
velocidade_atual = int(input("Digite a velocidade atual do seu veiculo em km/h: "))

#Condicionais para os casos possiveis 
if velocidade_atual <= VELOCIDADE_PERMITIDA :
    print("Você esta dentro da velocidade permitida.")
elif velocidade_atual > VELOCIDADE_PERMITIDA :
    
    velocidade_excedida = velocidade_atual - VELOCIDADE_PERMITIDA

    custo_da_multa = velocidade_excedida * CUSTO_DE_MULTA_POR_KILOMETRO

    print(f"Você excedeu a velocidade permitidade de 80km/h em {velocidade_excedida}km/h. \nA sua multa tem o custo de R${custo_da_multa:.2f}")


'''
Código revisado pela IA: Usar try para lidar com erros de digitação de input, usar else para simplificar a lógica, apresentar um valor de erro para o usuário

Sugestões de Melhoria
Seu código está ótimo e funcional. As sugestões abaixo são apenas para refinar ainda mais suas habilidades e deixar o código mais robusto e idiomático (mais "com a cara" de Python).

Simplificar a Condicional: Como um número só pode ser <= ou > que outro, se a primeira condição (if) for falsa, a segunda é automaticamente verdadeira. Você pode simplificar o elif para um else.

Tratamento de Erros: O que acontece se o usuário digitar "oitenta" em vez de "80"? A função int() não saberá como converter o texto e o programa irá parar com um erro (ValueError). Em outros scripts seus, como projeto3.py, você já usou try...except para lidar com isso. É uma excelente prática para tornar seus programas à prova de falhas.

Aqui está como o código ficaria com essas sugestões aplicadas:

#Constante de velocidade permitida 
VELOCIDADE_PERMITIDA = 80

#Constante de custo por velocidade excedida
CUSTO_DE_MULTA_POR_KILOMETRO = 5

try:
    #Variável que recebe o input do valor inteiro do usuário
    velocidade_atual = int(input("Digite a velocidade atual do seu veiculo em km/h: "))

    #Condicionais para os casos possiveis
    if velocidade_atual <= VELOCIDADE_PERMITIDA:
        print("Você está dentro da velocidade permitida.")
    else: # Se não está abaixo ou igual, então certamente está acima.
        velocidade_excedida = velocidade_atual - VELOCIDADE_PERMITIDA
        custo_da_multa = velocidade_excedida * CUSTO_DE_MULTA_POR_KILOMETRO
        print(f"Você excedeu a velocidade permitida de {VELOCIDADE_PERMITIDA}km/h em {velocidade_excedida}km/h.")
        print(f"A sua multa tem o custo de R${custo_da_multa:.2f}")

except ValueError:
    print("Erro: Por favor, digite um número inteiro válido para a velocidade.")








'''