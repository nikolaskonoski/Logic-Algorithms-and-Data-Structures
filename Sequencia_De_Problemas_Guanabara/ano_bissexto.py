try: 
    ano_inserido = int(input("Digite o ano que você quer avaliar: "))
 
    # Validação para garantir que o ano seja um número positivo.
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