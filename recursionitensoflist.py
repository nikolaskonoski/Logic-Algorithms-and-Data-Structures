def contar_itens(lista):
    """
    Conta o número de itens em uma lista de forma recursiva.
    """
    # Caso base: se a lista estiver vazia, não há itens a contar.
    if not lista:
        return 0
    # Passo recursivo: retorna 1 (para o elemento atual) mais a contagem
    # do restante da lista.
    else:
        return 1 + contar_itens(lista[1:])

def encontrar_maior(lista):
    """
    Encontra o maior número em uma lista de forma recursiva.
    """
    # Caso base 1: Se a lista estiver vazia, não há maior número.
    if not lista:
        return None
    # Caso base 2: Se a lista tem um só item, ele é o maior.
    if len(lista) == 1:
        return lista[0]
    # Passo recursivo:
    else:
        # Encontra o maior número no restante da lista.
        maior_do_resto = encontrar_maior(lista[1:])
        # Compara o primeiro item com o maior do restante e retorna o maior dos dois.
        return lista[0] if lista[0] > maior_do_resto else maior_do_resto

# Exemplo de uso da função
# Esta é uma construção padrão em Python. Ela verifica se o arquivo está sendo
# executado diretamente pelo interpretador. Se sim, o código dentro deste bloco
# será executado. Se o arquivo for importado por outro script, este código não roda.
if __name__ == "__main__":

    # Aqui, uma lista de exemplo com 6 números inteiros é criada e atribuída
    # à variável chamada `minha_lista`.
    minha_lista = [10, 20, 30, 40, 50, 60]

    # Esta linha chama a sua função recursiva `contar_itens`, passando `minha_lista`
    # como argumento. O resultado da contagem (que será 6) é armazenado
    # na variável `numero_de_itens`.
    numero_de_itens = contar_itens(minha_lista)

    # Por fim, esta linha usa uma "f-string" para imprimir uma mensagem formatada
    # no console. Ela exibirá o conteúdo de `minha_lista` e o valor de
    # `numero_de_itens`, resultando na saída:
    # "A lista [10, 20, 30, 40, 50, 60] contém 6 itens."
    print(f"A lista {minha_lista} contém {numero_de_itens} itens.")

    # Exemplo de uso da nova função
    outra_lista = [15, 99, 42, 7, 56]
    maior_valor = encontrar_maior(outra_lista)
    print(f"O maior valor na lista {outra_lista} é {maior_valor}.")
