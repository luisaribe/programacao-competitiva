Compressão de dados
● Problema: representar um arquivo GRANDE por outro menor.
● Exemplo:
○ arquivo GRANDE: abababababababababababab
○ arquivo menor: 12ab
● Por que comprimir?
○ Menor espaço de armazenamento.
○ Menor tempo de transmissão.
● Software: gzip, bzip, 7z, etc.

O algoritmo de Huffman recebe um fluxo de bits e devolve um fluxo de bits
comprimido que representa o fluxo original
● Em geral, o fluxo comprimido é mais curto que o original
● O fluxo de bits original é lido de 8 em 8 bits, como se fosse um fluxo de
caracteres:

● O algoritmo transforma uma string em uma cadeia de bits. Exemplo:
transforma ABRACADABRA! em 011111110011001000111111100101
● Cada caractere da string original é convertido em uma pequena cadeia de
bits, que é o seu código
○ Por exemplo, C é convertido em 110
● Ideia do algoritmo de Huffman: usar códigos curtos para os caracteres que
ocorrem com frequência e deixar os códigos mais longos para os caracteres
mais raros.
○ Os códigos são, portanto, de comprimento variável

● A tabela de códigos de Huffman não é universal. Ela é construída sob
medida para a string a ser codificado de tal modo que o comprimento da
cadeia codificada seja o menor possível
● Primeiro, construímos a trie do código, depois extraímos dela a tabela de
códigos. Dada a string a ser codificada, a trie é construída assim:
○ determine a frequência (ou seja, o número de ocorrências) de cada caractere da string
original,
○ para cada caractere, crie um nó e armazene o caractere e sua frequência nos
campos ch e freq;
○ organize o conjunto de nós em uma trie conforme o seguinte algoritmo.

● Algoritmo de construção da trie do código:
○ no início de cada iteração temos um conjunto de tries mutuamente disjuntas (no início da
primeira iteração, cada trie tem um único nó);
○ escolha duas tries cujas raízes, digamos x e y, tenham freq mínima;
○ crie um novo nó parent e faça com que x e y sejam filhos desse nó;
○ faça parent.freq igual a x.freq + y.freq;
○ repita esse processo até que o conjunto de tries tenha uma só trie

Associe a cada símbolo um número
binário assim:
● Rotule com 0 as arestas da árvore
que ligam um nó com seu filho
esquerdo e com 1 as arestas que
ligam um nó com seu filho direito
● O código correspondente a cada
símbolo é a concatenação dos bits
associados às arestas do caminho
da raiz até a folha correspondente ao
símbolo
● O código de b é 101

● A cadeia de bits produzida pelo algoritmo de Huffman não pode ser
decodificada sem a correspondente trie.
● É preciso acrescentar a trie à cadeia codificada!

● A codificação de Huffman é um método de compressão que usa as
probabilidades de ocorrência dos símbolos no conjunto de dados a ser
comprimido para determinar códigos de tamanho variável para cada símbolo
● Os códigos de cada símbolo são determinados com a ajuda de uma árvore
binária chama árvore de Huffman
● A árvore é então percorrida, atribuindo-se valores binários de 1 ou 0 para
cada aresta, e os códigos são gerados a partir desse percurso
● A tabela de codificação precisa ser adicionada no arquivo compactado para o
processo de descompactação