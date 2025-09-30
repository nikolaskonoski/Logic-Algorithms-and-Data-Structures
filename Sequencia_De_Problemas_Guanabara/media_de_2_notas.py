#Constante para a nota minima 
NOTA_MINIMA = 7.0

try:
    #inputs
    nome = input("Digite o seu nome: ")
    nota1 = float(input("Digite a sua primeira nota: "))
    nota2 = float(input("Digite a sua segunda nota: "))

    #Para validar se as notas estão inseridas dentro do limite permitido 
    if not (0 <= nota1 <= 10 and 0 <= nota2 <= 10) : 
        print("Erro: As notas devem estar entre 0 e 10.")
    else: 
        #Calculo de media
        media = (nota1 + nota2) / 2
        print(f"A média de {nome} foi {media:.1f}")
        #Condicionais para avaliar o resultado 
        if media >= NOTA_MINIMA : 
            print("Parabéns! Você teve um bom aproveitamento!")
        else : 
            print("Você não atingiu a média, se esforce ou aceite a mediocridade.")

#Saida para erros 
except ValueError: 
    print("Erro: Por favor, digite apenas números válidos para as notas.")
