def quicksort(array):
    """
    Ordena um array usando o algoritmo Quicksort de forma recursiva.

    :param array: Uma lista de elementos comparáveis.
    :return: Uma nova lista contendo os elementos ordenados.
    """
    # Caso base: arrays com 0 ou 1 elemento já estão "ordenados".
    if len(array) < 2:
        return array
    else:
        # Passo recursivo
        # 1. Escolhe um pivô (neste caso, o primeiro elemento).
        pivo = array[0]

        # 2. Particiona o restante do array em duas sub-listas.
        #    - 'menores': todos os elementos menores ou iguais ao pivô.
        #    - 'maiores': todos os elementos maiores que o pivô.
        menores = [i for i in array[1:] if i <= pivo]
        maiores = [i for i in array[1:] if i > pivo]

        # 3. Combina os resultados chamando quicksort recursivamente.
        return quicksort(menores) + [pivo] + quicksort(maiores)

# Exemplo de uso
if __name__ == "__main__":
    lista_desordenada = [10, 5, 2, 3, 29, 8, 1]
    lista_ordenada = quicksort(lista_desordenada)
    print(f"Lista original: {lista_desordenada}")
    print(f"Lista ordenada: {lista_ordenada}")