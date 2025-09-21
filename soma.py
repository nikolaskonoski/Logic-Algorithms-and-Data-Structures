def soma(lista):
    # Caso base: se a lista estiver vazia, a soma é 0.
    if not lista:
        return 0
    # Passo recursivo: soma o primeiro elemento com a soma do resto da lista.
    else:
        return lista[0] + soma(lista[1:])

if __name__ == "__main__":
    print(soma([2, 4, 6]))
