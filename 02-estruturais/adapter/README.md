# adapter

## Intenção
Permitir que classes com interfaces incompatíveis trabalhem juntas, convertendo a interface de uma classe para outra que o cliente espera.


## Problema
Imagine que tem um sistema que já funciona esperando uma interface específica, por exemplo, o código chama pagamento->processar(valor). Agora é preciso integrar uma biblioteca externa de pagamento (que não é controlado, não pode editar), mas ela tem um método totalmente diferente: executarCobranca(centavos). As assinaturas são incompatíveis, o código não pode simplesmente chamar essa biblioteca externa diretamente sem reescrever tudo.

## Como resolve
Cria uma classe adaptadora, que:
1. Implementa a interface que o sistema já espera (processar(valor))
2. Por dentro, traduz essa chamada pra interface da biblioteca externa (executarCobranca(centavos))