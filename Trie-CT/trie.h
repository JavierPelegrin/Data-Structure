#ifndef __TRIE_H__
#define __TRIE_H__

#include <assert.h>
#include <stdbool.h>

typedef struct s_Node node;
typedef struct s_Node *pnode;


node *create_node(char c, bool term);

void node_addSon(pnode *n1, node *n2);

void node_setTerminal(pnode *n);

bool node_isTerminal(const node *n);

char node_getChar(const node *n);

bool node_hasSon(const node *n, char c);

node *node_getSon(const node *n, char c);

// ---  Trie Create ---

typedef struct s_Node Trie;
typedef struct s_Node *pTrie;

node *trie_create();

void trie_addKey(pTrie *t, char *s);

bool trie_isEmpty(const Trie *t);

bool trie_Search(const Trie *t, char *s);

bool trie_SearchKey(const Trie *t, char *s);

#endif