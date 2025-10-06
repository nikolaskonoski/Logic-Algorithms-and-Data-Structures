'''
26) [DESAFIO] Crie um programa que leia o tamanho de três segmentos de reta. Analise seus comprimentos e diga se é possível formar um triângulo com essas retas. Matematicamente, para três segmentos formarem um triângulo, o comprimento de cada lado deve ser menor que a soma dos outros dois.
Analise criticamente o problema e descubra: 
(Tente explicar este problema para você mesmo em voz alta e peça mais informações/investigue mais até você compreender completamente o problema.)
'''
def verificar_triangulo(a, b, c):
    """Verifica se três segmentos podem formar um triângulo."""
    # A expressão booleana já retorna True ou False diretamente.
    return a + b > c and a + c > b and b + c > a

def main():
    """Função principal que interage com o usuário."""
    print("Digite o comprimento de três segmentos de reta:")
    
    while True:
        try:
            a = float(input("Primeiro segmento: "))
            b = float(input("Segundo segmento: "))
            c = float(input("Terceiro segmento: "))
            
            # Garante que os lados não são negativos ou zero
            if a > 0 and b > 0 and c > 0:
                break # Sai do loop se as entradas forem válidas
            else:
                print("Erro: Os comprimentos devem ser números positivos. Tente novamente.")
        except ValueError:
            print("Erro: Por favor, digite um valor numérico válido.")

    if verificar_triangulo(a, b, c):
        print("É possível formar um triângulo com esses segmentos.")
    else:
        print("Não é possível formar um triângulo com esses segmentos.")

if __name__ == "__main__":
    main()
