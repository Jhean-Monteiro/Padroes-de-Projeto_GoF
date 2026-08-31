# abstract-factory

## Intenção
Fornecer uma interface para criar  famílias inteiras de objetos relacionados, sem especificar suas classes concretas.
(cria vários produtos relacionados de uma vez, garantindo que eles  sejam compatíveis entre si)


## Problema
Imagine que está sendo montado uma interface gráfica que precisa suportar múltiplos "temas", por exemplo, tema Claro e tema Escuro. Cada tema precisa de um Botao e de um Checkbox, mas um BotaoClaro só devia aparecer junto com um CheckboxClaro, nunca misturado com um CheckboxEscuro. Se cada componente fosse criado de forma independente (como no Factory Method), seria fácil "errar a mão" e montar uma combinação inconsistente.