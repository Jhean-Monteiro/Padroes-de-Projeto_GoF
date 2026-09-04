# bridge

## Intenção
Separar uma abstração da sua implementação, permitindo que as duas variem e evoluam de forma independente.

## Problema
Quando uma abstração precisa funcionar com múltiplas implementações diferentes (por exemplo, formas geométricas que podem ser renderizadas de jeitos diferentes), resolver isso só com herança tradicional exige criar uma classe para cada combinação possível, uma explosão combinatória de classes que cresce a cada nova forma ou nova implementação adicionada.

## Solução
Separar em duas hierarquias independentes: uma para a abstração e outra para a implementação. A abstração guarda uma referência para a implementação (a "ponte" entre as duas), em vez de herdar dela. Isso permite combinar qualquer abstração com qualquer implementação em tempo de execução, sem precisar de uma classe para cada combinação.