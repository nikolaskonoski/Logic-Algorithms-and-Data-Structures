def sauda(nome):
    print("Olá, " + nome + "!")
    sauda2(nome)
    print("preparando para dizer tchau...")
    tchau()

def sauda2(nome):
    print("Como vai você, " + nome + "?")

def tchau():
    print("ok, tchau!")

# Agora, vamos chamar a função principal para que o código seja executado
if __name__ == "__main__":
    sauda("Nikolas")