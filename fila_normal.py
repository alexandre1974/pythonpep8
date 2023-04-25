from  fila_base import FilaBase

class filanormal(FilaBase):

    def gerasenhaatual(self) -> None:
        self.senhaatual = f'NM {self.codigo}'

    def atualizafila(self)->None:
        self.resetasenha()
        self.gerasenhaatual()
        self.fila.append(self.senhaatual)

    def chamacliente(self, caixa:int) -> str:
        clienteatual:str = self.fila.pop(0)
        self.clientesatendidos.append(clienteatual)
        return f'Cliente atual: {clienteatual} dirija ao caixa {caixa}'