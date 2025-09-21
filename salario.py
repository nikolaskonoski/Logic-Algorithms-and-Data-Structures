'''
3) Crie um programa que leia o nome e o salário de um funcionário, mostrando no
final uma mensagem.
Ex:
Nome do Funcionário: Maria do Carmo
Salário: 1850,45
O funcionário Maria do Carmo tem um salário de R$1850,45 em Junho.
'''
nome_do_funcionario = input("Digite o nome do funcionário: ")
salario_do_funcionario = float(input("Digite o salário do funcionário: "))

print(f"Nome do funcionário: {nome_do_funcionario}\nSalário do funcionário: R$ {salario_do_funcionario:.2f}\nO funcionário {nome_do_funcionario} recebeu o valor de R$ {salario_do_funcionario:.2f} no mês de setembro.")

'''
#Uma forma de deixar mais elegivel quando forem várias linhas 

nome_do_funcionario = input("Digite o nome do funcionário: ")
salario_do_funcionario = float(input("Digite o salário do funcionário: "))

print(f"""Nome do funcionário: {nome_do_funcionario}
Salário do funcionário: R$ {salario_do_funcionario:.2f}
O funcionário {nome_do_funcionario} recebeu o valor de R$ {salario_do_funcionario:.2f} no mês de setembro.""")

'''