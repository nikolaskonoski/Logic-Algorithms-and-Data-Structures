#Condicionais 
#if, elif, else 
'''
Eu cheguei atrasado na aula, ainda posso entrar? 
Se essa não for a terceira vez chegando atrasdo, então pode sim, caso contrário irá tomar uma suspensão. 
'''
#  : é igual a então
numero_de_atrasos = 2
if numero_de_atrasos >= 3: 
    print("Você está suspenso")
elif numero_de_atrasos == 1:
    print("Você está no limite, se atrasar mais duas vezes, irá tomar suspensão")
elif numero_de_atrasos == 2:
    print("Você está no limite, se atrasar mais uma vez, irá tomar suspensão")
else:
    print("Você pode entrar")