● Também conhecidas como tabelas de indexação, dispersão ou de
espalhamento
○ É uma generalização da idéia de array.
● Idéia central
○ Utilizar uma função, chamada de função de hashing, para espalhar os elementos que
queremos armazenar na tabela.
○ Esse espalhamento faz com que os elementos fiquem dispersos de forma não ordenada
dentro do array que define a tabela

● Por que espalhar os elementos melhora a busca?
○ A tabela permite a associar valores a chaves
■ chave: parte da informação que compõe o elemento a ser inserido ou buscado na
tabela
■ valor: é a posição (índice) onde o elemento se encontra no array que define a
tabela
○ Assim, a partir de uma chave podemos acessar de forma rápida uma determinada
posição do array
■ Na média, essa operação tem custo O(1)

● Vantagens
○ Alta eficiência na operação de busca
■ Caso médio é O(1) enquanto o da busca linear é O(N) e a da busca binária é
O(log2 N)
○ Tempo de busca é praticamente independente do número de chaves armazenadas na
tabela
○ Implementação simples

● O que é uma colisão?
○ Uma colisão ocorre quando duas (ou mais) chaves diferentes tentam ocupar a mesma
posição na tabela hash.
■ A colisão de chaves não é algo exatamente ruim, é apenas algo indesejável pois
diminui o desempenho do sistema. 