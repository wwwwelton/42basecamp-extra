#include <stdio.h>
#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	if ((*root) == 0)
		*root = btree_create_node(item);
	else if (cmpf(item, (*root)->item) < 0)
			btree_insert_data(&(*root)->left, item, cmpf);
	else if (cmpf(item, (*root)->item) > 0)
			btree_insert_data(&(*root)->right, item, cmpf);
}
