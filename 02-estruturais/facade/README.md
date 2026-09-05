# facade

## Intenção
Fornecer uma interface simplificada e unificada para um conjunto de interfaces mais complexas de um subsistema.

## Problema
Um sistema pode ser composto por várias classes complexas que precisam ser usadas em conjunto, numa ordem específica, para realizar uma tarefa. Se o código cliente precisar conhecer e coordenar todas essas classes diretamente, ele fica acoplado aos detalhes internos do subsistema, dificultando manutenção e uso.

## Solução
Criar uma classe fachada que conhece as classes complexas do subsistema e expõe métodos simples, que por dentro coordenam as chamadas necessárias na ordem certa. O cliente passa a interagir só com a fachada, sem precisar conhecer os detalhes internos do subsistema.