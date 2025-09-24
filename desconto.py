#Captando o input com o tratamento de float para não ter estouro e atribuindo ele a uma variável.
valorProduto = float(input("Digite o valor do produto : R$"))

#Fazendo uma variável que receba o valor do produto e faça uma equação para aplicação de desconto
desconto = float(valorProduto / 100 * 5 )

#Variável que efetuará a operação final de desconto
valorFinal = valorProduto - desconto

#Imprimindo os resultados
print(f"O valor do desconto é de R${desconto:.2f}")
print(f"O valor total do produto com desconto é de R${valorFinal:.2f}")

