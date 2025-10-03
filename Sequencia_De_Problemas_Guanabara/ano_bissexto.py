try: 
    ano_inserido = int(input("Digite o ano que você quer avaliar: "))
 
    # Validação para garantir que o ano seja um número positivo.
    if ano_inserido > 0:
        # A regra do ano bissexto é:
        # 1. Divisível por 4, mas não por 100, a menos que...
        # 2. ...seja divisível por 400.
        isDivisibleBy4= (ano_inserido % 4) == 0
        isNotDivisibleBy100= (ano_inserido % 100) != 0
        isDivisibleBy400= (ano_inserido % 400) == 0
        
        if (isDivisibleBy4 and isNotDivisibleBy100) or isDivisibleBy400:
            print(f"O ano {ano_inserido} é BISSEXTO.")
        else:
            print(f"O ano {ano_inserido} não é BISSEXTO.")



        isDivisibleBy4= (ano_inserido % 4) == 0
        isNotDivisibleBy100= (ano_inserido % 100) != 0
        if (isDivisibleBy4 and isNotDivisibleBy100):
            print(f"O ano {ano_inserido} é BISSEXTO.")
        else:
            isDivisibleBy400= (ano_inserido % 400) == 0
            if (isDivisibleBy400):
                print(f"O ano {ano_inserido} é BISSEXTO.")
            else:
               print(f"O ano {ano_inserido} não é BISSEXTO.")

    else: 
        print("Por favor, digite um ano válido (número positivo).")

    
    if ano_inserido <= 0:
        print("Por favor, digite um ano válido (número positivo).")
    else:
        # A regra do ano bissexto é:
        # 1. Divisível por 4, mas não por 100, a menos que...
        # 2. ...seja divisível por 400.
        if (ano_inserido % 4 == 0 and ano_inserido % 100 != 0) or (ano_inserido % 400 == 0):
            print(f"O ano {ano_inserido} é BISSEXTO.")
        else:
            print(f"O ano {ano_inserido} não é BISSEXTO.")
 
except ValueError:
    print("Entrada inválida. Por favor, digite um ano válido (ex: 2024).")