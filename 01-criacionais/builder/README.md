# builder

## Intenção
Separar a construção de um objeto complexo da sua representação final, permitindo montar esse objeto passo a passo. O mesmo processo de construção pode gerar representações diferentes do objeto, dependendo de quais passos são executados.


## Problema
Uma classe pode ter muitos atributos, boa parte deles opcionais (por exemplo, uma Pizza com tamanho, tipo de massa e uma lista variável de ingredientes). Resolver isso só com construtor gera dois problemas clássicos:

1. Um construtor com parâmetros demais, onde não fica claro o que cada valor representa ao ler o código.
2. O "telescoping constructor": criar várias sobrecargas do construtor para cobrir diferentes combinações de parâmetros, o que vira uma explosão de variações difícil de manter.


## Solução
Em vez de um construtor gigante, cria-se uma classe separada (o Builder), com métodos que vão configurando o objeto aos poucos — cada método retorna o próprio builder, permitindo encadear as chamadas e montar o objeto de forma legível, configurando apenas o que for necessário.