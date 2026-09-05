# decorator

## Intenção
Adicionar novas responsabilidades a um objeto dinamicamente, sem alterar sua classe nem usar herança para cada combinação possível.

## Problema
Se você quisesse adicionar combinações de funcionalidades extras a um objeto usando só herança (por exemplo, um café que pode ou não ter leite, chantilly, canela), precisaria de uma subclasse para cada combinação possível — a mesma explosão combinatória de classes que vimos no Bridge.

## Solução
Criar uma classe decoradora que implementa a mesma interface do objeto original, guarda uma referência para ele, e "envolve" suas chamadas, adicionando comportamento antes ou depois de delegar para o objeto envolvido. Decoradores podem ser empilhados uns sobre os outros, combinando funcionalidades livremente em tempo de execução.