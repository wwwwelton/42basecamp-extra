#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *))
{
	while (root != 0 && cmpf(data_ref, root->item) != 0)
	{
		if (cmpf(data_ref, root->item) < 0)
			root = root->left;
		else if (cmpf(data_ref, root->item) > 0)
			root = root->right;
		else
			return (root->item);
	}
	return ((void *)0);
}
