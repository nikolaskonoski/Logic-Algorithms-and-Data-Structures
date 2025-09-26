# Serve para encontrar o menor elemento em um array
def buscaMenor(arr):
    """Encontra o menor elemento em um array e retorna o seu índice."""
    menor = arr[0]
    menor_indice = 0
    for i in range(1, len(arr)):
        if arr[i] < menor:
            menor = arr[i]
            menor_indice = i
    return menor_indice

# Para escrever a ordenação por seleção
def ordenacaoSelecao(arr):
    """Ordena um array usando o algoritmo de ordenação por seleção."""
    novoArr = []
    arr_para_ordenar = list(arr) # Cria uma cópia para não modificar a lista original
    for i in range(len(arr_para_ordenar)):
        menor = buscaMenor(arr_para_ordenar)
        novoArr.append(arr_para_ordenar.pop(menor))
    return novoArr

print(ordenacaoSelecao([5, 3, 6, 2, 10]))