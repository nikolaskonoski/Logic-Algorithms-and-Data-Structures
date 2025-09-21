# ======================================================================
# VERSÃO 1: PSEUDOCÓDIGO ORIGINAL (NÃO FUNCIONAL)
# ======================================================================
# O código abaixo é uma mistura de pseudocódigo com Python 2 e contém erros.
# Ele serve como uma ideia inicial do algoritmo.

# def procure_pela_chave(caixa_principal):
#     # ERRO 1: 'main_box' e 'vazia' não estão definidos. São conceitos.
#     pilha = main_box.crie_uma_pilha_para_busca()
#     while pilha is not vazia:
#         caixa = pilha.pegue_caixa()
#         for item in caixa:
#             # ERRO 2: O 'elif' está indentado dentro do 'if', o que é um erro de sintaxe.
#             # ERRO 3: A condição do 'if' e do 'elif' é a mesma. O 'elif' nunca seria executado.
#             if item.e_uma_caixa():
#                 pilha.append(item)
#                 elif item.e_uma_caixa():
#                     # ERRO 4: Sintaxe de print do Python 2. Em Python 3, usa-se print().
#                     print "achei a chave!"

# E para fazer isto usando a recursão: 
# def procure_pela_chave(caixa): 
#   for item in caixa: 
#     if item.e_uma_caixa(): 
#       procure_pela_chave(item)
#     elif item.e_uma_chave(): 
#       print "Achei a chave!"
#
#
# ======================================================================
# VERSÃO 2: CÓDIGO PYTHON FUNCIONAL
# ======================================================================
# Esta é uma versão funcional em Python.

def e_uma_caixa(item):
    """Verifica se um item é uma 'caixa' (neste caso, uma lista)."""
    return isinstance(item, list)

def e_a_chave(item):
    """Verifica se um item é a 'chave'."""
    return item == 'chave'

def procure_pela_chave_funcional(caixa_principal):
    """Procura pela 'chave' dentro de uma estrutura de caixas aninhadas."""
    pilha = [caixa_principal]  # A pilha começa com a caixa principal
    while pilha:  # O loop continua enquanto a pilha não estiver vazia
        caixa_atual = pilha.pop(0)  # Pega a primeira caixa da pilha (fila)
        for item in caixa_atual:
            if e_uma_caixa(item):
                pilha.append(item)  # Se for uma caixa, adiciona na pilha para verificar depois
            elif e_a_chave(item):
                print("Achei a chave!")
                return True # Encontrou a chave, pode parar a busca
    print("Nenhuma chave encontrada.")
    return False # Não encontrou a chave em nenhuma caixa

# Exemplo de uso:
caixa_com_chave = [ [], ['item', 'chave'], [] ]
caixa_sem_chave = [ [], ['item'], [[]] ]

print("Procurando na caixa com chave:")
procure_pela_chave_funcional(caixa_com_chave)