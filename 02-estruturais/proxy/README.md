# proxy

## Intenção
Fornecer um objeto substituto (proxy) que controla o acesso a outro objeto, podendo adicionar comportamento antes ou depois de repassar a chamada para ele.

## Problema
Às vezes você precisa controlar o acesso a um objeto sem alterar sua classe original, por exemplo, adiar a criação de um objeto pesado até que seja realmente necessário (lazy loading), verificar permissões antes de permitir uma operação, ou registrar logs de cada chamada.

## Solução
Criar uma classe proxy que implementa a mesma interface do objeto real, guarda uma referência (ou sabe criar) o objeto real, e adiciona a lógica extra antes/depois de delegar a chamada para ele. O cliente usa o proxy como se fosse o próprio objeto real, sem perceber a diferença.