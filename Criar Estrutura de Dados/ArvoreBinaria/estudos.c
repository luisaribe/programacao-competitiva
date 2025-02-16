Uma árvore é uma abstração matemática usada para representar
estruturas hierárquicas não lineares dos objetos modelados

Árvore binária
- array
FILHO_ESQ(PAI) = 2 * PAI + 1
FILHO_DIR(PAI) = 2 * PAI + 2

Podemos percorrer a árvore de 3 formas
○ Percurso pré-ordem
■ visita a raiz, o filho da esquerda e o filho da direita

○ Percurso um-ordem
■ visita o filho da esquerda, a raiz e o filho da direita

○ Percurso pós-ordem
■ visita o filho da esquerda, o filho da direita e a raiz

Árvore Binária de Busca
● Regra para posicionamento dos valores na árvore
○ Para cada nó pai
■ todos os valores da sub-árvore esquerda são menores do que o nó pai
■ todos os valores da sub-árvore direita são maiores do que o nó pai;
○ Inserção e remoção devem ser realizadas respeitando essa regra de posicionamento dos
nós

● Custo para as principais operações em uma árvore binária de busca
contendo N nós.
○ O pior caso ocorre quando a árvore não está balanceada


Melhor caso: log N  
Pior caso: N

● Para inserir um valor V na árvore
○ Se a raiz é igual a NULL, insira o nó
○ Se V é menor do que a raiz: vá para a sub-árvore esquerda
○ Se V é maior do que a raiz: vá para a sub-árvore direita
○ Aplique o método recursivamente
■ pode ser feito sem recursão
● Dessa forma, percorremos um conjunto de nós da árvore até chegar ao
nó folha que irá se tornar o pai do novo nó

● Consultar se um determinado nó V existe em uma árvore é similar a
operação de inserção
○ primeiro compare o valor buscado com a raiz;
○ se V é menor do que a raiz: vá para a sub-árvore da esquerda;
○ se V é maior do que a raiz: vá para a sub-árvore da direita;
○ aplique o método recursivamente até que a raiz seja igual ao valor buscado
■ pode ser feito sem recursão

● Remover um nó de uma árvore binária de busca não é uma tarefa tão
simples quanto a inserção.
○ Isso ocorre porque precisamos procurar o nó a ser removido da árvore o qual pode ser
um
■ nó folha
■ nó interno (que pode ser a raiz), com um ou dois filhos.
○ Se for um nó interno
■ Reorganizar a árvore para que ela continue sendo uma árvore binária de busca

● Árvore é uma estrutura hierárquica de natureza recursiva.
● Podemos implementar árvores usando listas.
● A travessia em uma árvore pode ser feita de diferentes formas.