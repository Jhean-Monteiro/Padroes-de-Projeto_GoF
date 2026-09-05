# observer

## Intenção
Definir uma dependência um-para-muitos entre objetos, de forma que quando um objeto (o "sujeito") muda de estado, todos os seus dependentes (os "observadores") sejam notificados e atualizados automaticamente.

## Problema
Muitas vezes um objeto precisa avisar outros objetos quando algo muda nele, sem ficar fortemente acoplado a eles — por exemplo, uma estação meteorológica que precisa atualizar vários painéis de exibição diferentes sempre que a temperatura muda, sem saber quantos painéis existem nem quais são.

## Solução
O sujeito mantém uma lista de observadores (todos implementando uma interface comum de notificação), e permite que observadores se inscrevam ou cancelem a inscrição dinamicamente. Quando o estado do sujeito muda, ele percorre a lista e notifica cada observador, sem precisar conhecer suas classes concretas.