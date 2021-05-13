#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include "trie.h"


// --- Utilities ---
int ctoi(char c){
    return c-'a';
}

char *manger(char *s){
    return &(*s)+1;
}

// --- Node ---

struct s_Node {
    node *tab[26];
    bool term;
    char c;
};

node *node_create(char c, bool term){
    node *n = malloc(sizeof(node));
    n->c = c;
    n->term = term;
    return n;
}

void node_addSon(pnode *n1, node *n2){
    assert(!node_hasSon(*n1, n2->c));
    (*n1)->tab[ctoi(n2->c)] = n2;
}

void node_setTerminal(pnode *n){
    (*n)->term = true;
}

bool node_isTerminal(const node *n){
    return n->term;
}

char node_getChar(const node *n){
    return n->c;
}

bool node_hasSon(const node *n, char c){
    return n->tab[ctoi(c)]!=NULL;
}

node *node_getSon(const node * n, char c){
    assert(!node_hasSon(n, c));
    return n->tab[ctoi(c)];
}

// --- Trie Create ---

Trie *trie_create(){
    Trie *n = node_create('\0',false);
    return n;
}

void trie_addKey(pTrie *t, char *s){
    if (s[0]!='\0'){
        if (node_hasSon(*t, s[0])){
            trie_addKey(&(*t)->tab[ctoi(s[0])], manger(s));
        }else{
            node_addSon(t, node_create(s[0], false));
            trie_addKey(&(*t)->tab[ctoi(s[0])], manger(s));
        }
    }else{
        node_setTerminal(t);
    }
}

bool trie_isEmpty(const Trie *t){
    assert(t->c == '\000');
    for(int i = 0; i < 26; i++){
        if (t->tab[i] != NULL){
            return false;
        }
    }
    return true;
}

bool trie_Search(const Trie *t, char *s){
    assert(s[0] != '\0');
    const Trie *cur = t;
    while (s[0] != '\0'){
        if (node_hasSon(cur, s[0])){
            cur = cur->tab[ctoi(s[0])];
            s = manger(s);
        }else{
            return false;
        }
    }
    return true;
}

bool trie_SearchKey(const Trie *t, char *s){
    assert(s[0] != '\0');
    const Trie *cur = t;
    while (s[0] != '\0'){
        if (node_hasSon(cur, s[0])){
            cur = cur->tab[ctoi(s[0])];
            s = manger(s);
        }else{
            return false;
        }
    }
    return node_isTerminal(cur);
}