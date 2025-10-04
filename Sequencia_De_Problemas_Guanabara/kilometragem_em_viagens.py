'''
Faça um algoritmo que pergunte a distância que um passageiro deseja percorrer em Km. 
Calcule o preço da passagem, cobrando R$0.50 por Km para viagens até 200Km e R$0.45 para viagens mais longas.
'''

# ======================================================================
# 1. O CHEF (LÓGICA DE NEGÓCIO)
#    Define as regras e realiza os cálculos.
# ======================================================================

# Constantes com as regras de preço (o "livro de receitas" do Chef)
PRECO_VIAGEM_CURTA_POR_KM = 0.50
PRECO_VIAGEM_LONGA_POR_KM = 0.45
DISTANCIA_LIMITE_VIAGEM_CURTA = 200

def calcular_preco_passagem(distancia: float) -> float:
    """
    Calcula o preço da passagem com base na distância fornecida.
    Esta função é o "Chef": ela só precisa da distância para "preparar" o preço.
    """
    if distancia <= DISTANCIA_LIMITE_VIAGEM_CURTA:
        preco_total = distancia * PRECO_VIAGEM_CURTA_POR_KM
    else:
        preco_total = distancia * PRECO_VIAGEM_LONGA_POR_KM
    return preco_total

# ======================================================================
# 2. O GARÇOM (INTERFACE COM O USUÁRIO)
#    Responsável por interagir com o usuário e coletar os dados.
# ======================================================================

def obter_distancia_desejada() -> float:
    """
    Pergunta ao usuário a distância e garante que a entrada seja válida.
    Esta função é o "Garçom": ela pega o "pedido" do cliente.
    """
    while True:
        try:
            distancia = float(input("Qual é a distância da sua viagem em Km? "))
            if distancia >= 0:
                return distancia
            else:
                print("Erro: A distância não pode ser um número negativo. Tente novamente.")
        except ValueError:
            print("Erro: Por favor, digite um valor numérico válido.")

# ======================================================================
# 3. O GERENTE (ORQUESTRADOR PRINCIPAL)
#    Inicia e coordena o fluxo do programa.
# ======================================================================
if __name__ == "__main__":
    # O Gerente chama o Garçom para pegar o pedido (distância)
    distancia_da_viagem = obter_distancia_desejada()
    
    # O Gerente entrega o pedido ao Chef para calcular o preço
    preco_final = calcular_preco_passagem(distancia_da_viagem)
    
    # O Gerente informa o resultado final ao cliente
    print(f"O preço da sua passagem para uma viagem de {distancia_da_viagem:.1f}Km será de R${preco_final:.2f}.")