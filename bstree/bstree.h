#ifndef __BSTREE_H__
#define __BSTREE_H__

#include <stdbool.h>

typedef struct s_bstree bstree;
typedef bstree *pbstree;

bstree *createBstree();

int bstree_root(const bstree *t);

void bstree_add(pbstree *t, int v);

bool bstree_search(const bstree *t, int v);

bool bstree_empty(const bstree *t);

#endif