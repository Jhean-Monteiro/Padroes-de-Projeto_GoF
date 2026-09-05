# strategy

## Intenção
Definir uma família de algoritmos, encapsular cada um deles em uma classe separada, e torná-los intercambiáveis em tempo de execução.

## Problema
Quando uma classe precisa se comportar de formas diferentes dependendo do contexto (por exemplo, diferentes formas de calcular frete, ou diferentes formas de ordenar uma lista), resolver isso com vários `if`/`else` ou `switch` dentro da mesma classe deixa o código difícil de estender: cada novo comportamento exige editar essa classe, e os algoritmos ficam misturados com a lógica que os usa.

## Solução
Extrair cada algoritmo/comportamento para sua própria classe, todas implementando uma interface comum. A classe que usa o algoritmo guarda uma referência para essa interface (não para uma implementação específica), e pode trocar de estratégia em tempo de execução, sem precisar de `if`/`switch` nem conhecer os detalhes de cada algoritmo.