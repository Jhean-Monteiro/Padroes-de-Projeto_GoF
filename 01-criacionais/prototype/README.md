# prototype

## Intenção
Permitir criar novos objetos copiando um objeto existente (um "protótipo"), em vez de criar do zero através de um construtor.


## Problema
Às vezes, criar um objeto do zero é caro ou complicado, por exemplo, o objeto pode ter passado por um processo custoso de inicialização (consulta a banco de dados, cálculo pesado, configuração complexa), e precisa de vários objetos parecidos, só com pequenas diferenças. Recriar tudo do zero pra cada um seria repetir todo esse custo desnecessariamente.


## Como resolve
Cada classe que quer ser "clonável" implementa um método clone() (virtual), que sabe copiar a si mesma corretamente, incluindo todos os seus dados específicos. O código cliente chama objeto->clone() sem precisar saber a classe concreta, e recebe de volta uma cópia igualzinha, do tipo certo.