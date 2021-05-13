#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "bstree.h"


struct s_bstree{
    bstree *parent;
    bstree *left;
    bstree *right;
    int root;
};

bstree *createBstree(){
    return NULL;
}

bool bstree_empty(const bstree *t){
    return t == NULL;
}

bstree *bstree_cons(bstree *left, bstree *right, int root){
    bstree *t = malloc(sizeof(struct s_bstree));
    t->parent = NULL;
    t->left = left;
    t->right = right;
    if(left != NULL){
        t->left->parent = t->left;
    }
    if(right != NULL){
        t->right->parent = t->right;
    }
    t->root = root;
    return t;
}

void bstree_add(pbstree *t, int v){
    //left<root<right
    pbstree *cur = t;
    bstree *parent = NULL;
    while(!bstree_empty(*cur)){
        if(bstree_root(*cur) > v){
            parent = *cur;
            cur = &(*cur)->left;
        }else if (bstree_root(*cur) < v) {
            parent = *cur;
            cur = &(*cur)->right;
        }else{
            return;
        }
    }
    *cur = bstree_cons(NULL, NULL, v); 
    (*cur)->parent = parent;
}

int bstree_root(const bstree *t){
    return t->root;
}

bool bstree_search(const bstree *t, int v){
    const bstree *cur = t;
    while(!bstree_empty(cur)){
        if (bstree_root(cur) == v){
            return true;
        }else if (bstree_root(cur)<v) {
            cur = cur->right;
        }else{
            cur = cur->left; 
        }
    }
    return false;
}

