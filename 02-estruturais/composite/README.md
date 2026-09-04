# composite

## Intenção
Permitir tratar objetos individuais e composições de objetos (grupos) de forma uniforme, através da mesma interface.

## Problema
Estruturas em árvore, como pastas e arquivos ou um menu com submenus, exigem tratar um item individual e um grupo de itens da mesma forma. Sem um padrão para isso, o código cliente precisaria diferenciar constantemente "é um item único ou é um grupo?", com lógica duplicada para cada caso.

## Solução
Criar uma interface comum implementada tanto pela "folha" (o item individual, sem filhos) quanto pelo "composto" (um item que contém uma lista de outros componentes, podendo ser folhas ou outros compostos). O composto implementa suas operações delegando e somando o resultado de cada filho, inclusive de forma recursiva quando um filho também é um composto.