from  typing import Dict, List, Union

from  fila_base import FilaBase
from  estatistica_detalhada import EstatisticaDetalhada
from  estatistica_resumida import EstatisticaResumida

Classes = Union[EstatisticaResumida, EstatisticaDetalhada]

class FilaPrioritaria(FilaBase):

    def gera_senha_atual(self) -> None:
        self.senha_atual = f'PR {self.codigo}'

    def reseta_senha(self) -> None:
        if self.codigo >= 100:
            self.codigo = 0
        else:
            self.codigo += 1

    def atualiza_fila(self)-> None:
        self.reseta_senha()
        self.gera_senha_atual()
        self.fila.append(self.senha_atual)

    def chama_cliente(self, caixa:int) -> str:
        cliente_atual:str = self.fila.pop(0)
        self.clientes_atendidos.append(cliente_atual)
        return f'Cliente atual: {cliente_atual} dirija ao caixa {caixa}'

    def estatistica(self, retorna_estatistica: Classes)->dict:

        return retorna_estatistica.roda_estatistica(self.clientes_atendidos)

