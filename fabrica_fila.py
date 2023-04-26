from typing import Union

from fila_normal import filanormal
from fila_prioritaria import FilaPrioritaria
from constantes import TIPO_FILA_NORMAL, TIPO_FILA_PRIORITARIA

class Fabrica_Fila:

    @staticmethod
    def pega_fila(tipo_fila: str) -> Union[TIPO_FILA_NORMAL, TIPO_FILA_PRIORITARIA]:
        if tipo_fila == TIPO_FILA_NORMAL:
            return filanormal()
        elif tipo_fila == TIPO_FILA_PRIORITARIA:
            return FilaPrioritaria()
        else:
            raise NotImplementedError('Tipo de fila não exite')
