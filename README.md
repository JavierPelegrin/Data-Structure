# Structuras de datos

Este repertorio es un deposito de alguna estructuras de datos.

## Stack

El `Stack` o `pila` es una estructura de datos basica, esta implementacion es de tipo estatica y tiene un `SIZE` fijado en 32.
Implementa las funciones basicas:

```c
Stack *createStack(void)
void stackPush(Stack *s, int v)
void stackPop(Stack *s)
void stackTop(Stack *s)

```
y algunas como las de Size y remove.

## List-Mix
Las `listas` son una implementacion de la mezcla entre las `listas staticas` y las `listas dinamiscas`.

Los elementos dentro de la lista dinamica son exclusivamente listas estaticas de hasta `16` elementos en su interior.

| list1 |      | list2 |      | list3 |      | list4 |
| ----- | ---- | ----- | ---- | ----- | ---- | ----- |
|   3   |      |   5   |      |   3   |      |   3   |
|   1   |      |   2   |      |   4   |      |   6   |
|   4   |      |   8   |      |   1   |      |   1   |
|   2   |      |   6   |      |   9   |      |   9   |
|  ---  |      |  ---  |      |  ---  |      |  ---  |
| elem1 | <--> | elem2 | <--> | elem3 | <--> | elem4 |


## Binary Search Tree
Los arboles de busqueda binarios es una implementacion de nivel medio.
Esta es una estructura recursiva, esta compuesta de nodos reliados entre ellos con la relacion unica `padre-hijo` y tiene un nodo unico particular llamado `raiz`.
### Définiciones
- Un arbol es dicho **completo** si todos sus nodos tienen o **0** o **dos** hijos
- Un arbol es dicho **degenerado** si todos sus nodos tienen **1** hijo
- Un arbol es dicho **equilibrado** si todos la profundidad de todas sus `hojas` es la misma e igual a la altura del arbol. Para un arbol de ariedad `b` (en este caso 2) y `N` nodos, la profundidad es:

$$

p = log_b(N) 

$$

## Trie
Los Trie o arboles prefix es una estructura de datos associativa (clave <-> dato) con n nodos. En mi implentacion, cada noto tiene como maximo 26 nodos, uno por cada letra del abcdario, el camino a un nodo forma una clave de aceso al dato.
Existen dos tipos de nodos:

- Nodos de associacion
- Nodos de terminales

Los nodos terminales son los que contienen el dato


## Auteurs du projet

- **Javier Pelegrin Garcia** - développeur - Documentation