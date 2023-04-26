# from fila_normal import filanormal
# from fila_prioritaria import FilaPrioritaria
from fabrica_fila import Fabrica_Fila

from estatistica_resumida import EstatisticaResumida
from estatistica_detalhada import EstatisticaDetalhada

# fila2_teste = FilaPrioritaria()
# fila2_teste.atualiza_fila()
# fila2_teste.atualiza_fila()
# print(fila2_teste.chama_cliente(5))
# print(fila2_teste.estatistica('11/12/2003', 322, 'detail'))

teste_fabrica = Fabrica_Fila.pega_fila('prioritaria')
teste_fabrica.atualiza_fila()
teste_fabrica.atualiza_fila()
teste_fabrica.atualiza_fila()
print(teste_fabrica.chama_cliente(5))
print(teste_fabrica.estatistica( EstatisticaDetalhada('11/10/2020', 120,)))








# This is a sample Python script.

# Press Shift+F10 to execute it or replace it with your code.
# Press Double Shift to search everywhere for classes, files, tool windows, actions, and settings.


#def print_hi(name):
    # Use a breakpoint in the code line below to debug your script.
 #   print(f'Hi, {name}')  # Press Ctrl+F8 to toggle the breakpoint.


# Press the green button in the gutter to run the script.
#if __name__ == '__main__':
 #   print_hi('PyCharm')

# See PyCharm help at https://www.jetbrains.com/help/pycharm/
