try: 
    numero = int(input("Insira um valor inteiro e positivo: "))
    
    if numero < 0:
        print("Erro: O número deve ser positivo.")
    elif numero % 2 == 0: 
        print(f"O número {numero} é par!")
    else: 
        print(f"O número {numero} é ímpar!") 

except ValueError: 
    print("É necessário que você insira um valor que seja inteiro e positivo. ")

'''
- Atenção com o tratamento de erros => verificar
- Atenção com a utilização de constantes declaradas
- Ao imprimir o resultado, imprima também o input


'''