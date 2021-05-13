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

## listMix
Las `listas` son una implementacion de la mezcla entre las `listas staticas` y las `listas dinamiscas`.

Los elementos dentro de la lista dinamica son exclusivamente listas estaticas de hasta `16` elementos en su interior.

| ----- | ---- | ---- | ---- | ----- |
|   3   |      |  5   |      |   3   |
|   1   |      |  2   |      |   4   |
|   4   |      |  8   |      |   1   |
|   2   |      |  6   |      |   9   |
|  --   |      |  --  |      |  --   |
| elem1 | <--> | elm2 | <--> | elem3 |

