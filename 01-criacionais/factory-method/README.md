# factory-method
Categoria: Criacional

## Intenção
Definir uma interface para criar um objeto, mas deixar que as subclasses decidam qual classe concreta instanciar. Em vez do código cliente chamar new ClasseConcreta() diretamente, ele chama um método "fábrica" que devolve o objeto, sem o cliente precisar saber qual classe concreta foi criada

## Problema
Imagine que tem uma classe Notificacao e precisa criar NotificacaoEmail, NotificacaoSMS, NotificacaoPush, etc. Se o código cliente fizesse new NotificacaoEmail() direto, ele ficaria acoplado à classe concreta — pra trocar de email pra SMS, teria que caçar e editar cada new espalhado pelo código

## Como resolver
# cria-se:
1. Uma classe abstrata (produto), por exemplo Notificacao, com métodos virtual.
2. Classes concretas que herdam dela, NotificacaoEmail, NotificacaoSMS.
3. Uma classe "criadora" com um método virtual (o factory method) que devolve um Notificacao* (ponteiro pra abstração), e cada subclasse da criadora decide qual concreta instanciar.