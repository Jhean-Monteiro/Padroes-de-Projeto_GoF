# singleton
Categoria: Criacional

## Intenção
Garantir que uma classe tenha apenas uma instância durante toda a execução do programa, e fornecer um ponto de acesso global a ela.

## Problema
As vezes é preciso que só exista um objeto de um certo tipo compartilhado por todo o sistema, por exemplo, uma conexão com banco de dados, um gerenciador de configurações, um logger. se qualquer parte do código pudesse criar uma nova instância à vontade (new Logger()), haveria multiplas instâncias divergentes, desperdício de recursos, ou inconsistência de estado.

## Como resolve
1. Construtor privado (ninguém de fora pode dar new).
2. Um método estático (getInstance()) que cria a instância na primeira chamada e devolve sempre a mesma depois.
3. Bloqueia cópia e atribuição (senão alguém copia o objeto e "quebra" a unicidade). 
```
