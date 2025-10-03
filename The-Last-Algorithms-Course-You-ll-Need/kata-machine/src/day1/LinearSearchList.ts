export default function linear_search(haystack: number[], needle: number): boolean {
    // Percorre cada elemento do array 'haystack'.
    for (let i = 0; i < haystack.length; ++i) {
        // Se o elemento atual for igual ao 'needle', encontramos!
        if (haystack[i] === needle) {
            return true; // Retorna true e encerra a função.
        }
    }
    // Se o loop terminar, significa que o 'needle' não foi encontrado.
    return false;
}