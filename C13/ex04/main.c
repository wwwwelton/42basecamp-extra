//norminette -R CheckForbiddenSourceHeader btree_create_node.c
//clear && clang -Wall -Wextra -Werror *.c && ./a.out | cat -e
#include <stdio.h>
#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *));

void	ft_putchar(void *c)
{
	printf("%s ", (char *)c);
}

void	ft_print_btree(t_btree *root)
{
	if (root != NULL)
	{
		ft_print_btree(root->left);
		printf("%s ", (char *)root->item);
		ft_print_btree(root->right);
	}
}

int	ft_strcmp(void *s1, void *s2)
{
	while ((char *)s1 == (char *)s2++)
		if ((char *)s1++ == 0)
			return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)--s2);
}

int	main(void)
{
	t_btree	*root;
	int (*cmpf)(void *, void *);

	cmpf = &ft_strcmp;
	root = (void *)0;
	btree_insert_data(&root, "F", cmpf);
	btree_insert_data(&root, "B", cmpf);
	btree_insert_data(&root, "G", cmpf);
	btree_insert_data(&root, "A", cmpf);
	btree_insert_data(&root, "D", cmpf);
	btree_insert_data(&root, "I", cmpf);
	btree_insert_data(&root, "C", cmpf);
	btree_insert_data(&root, "E", cmpf);
	btree_insert_data(&root, "H", cmpf);

	ft_print_btree(root);

	return (0);
}

// https://www.youtube.com/playlist?list=PLqJK4Oyr5WShBuC5rqt9I0fMVNnaVTpeo
// https://users.monash.edu/~lloyd/tildeAlgDS/Tree/
// https://leetcode.com/explore/learn/card/data-structure-tree/134/traverse-a-tree/992/
// https://www.cs.usfca.edu/~galles/visualization/BST.html
