//norminette -R CheckForbiddenSourceHeader btree_create_node.c
//clear && clang -Wall -Wextra -Werror *.c && ./a.out | cat -e
#include <stdio.h>
#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *));

void	ft_putchar(void *c)
{
	printf("%c ", *((char *)c));
}

void	ft_print_btree(t_btree *root)
{
	if (root != NULL)
	{
		ft_print_btree(root->left);
		printf("%d ", *((int *)root->item));
		ft_print_btree(root->right);
	}
}

int	main(void)
{
	t_btree	*root;
	char	c1;
	char	c2;
	char	c3;
	char	c4;
	char	c5;
	char	c6;
	char	c7;
	char	c8;
	char	c9;

	c1 = 'F';
	root = btree_create_node(&c1);

	c2 = 'B';
	root->left = btree_create_node(&c2);

	c3 = 'A';
	root->left->left = btree_create_node(&c3);

	c4 = 'D';
	root->left->right = btree_create_node(&c4);

	c5 = 'C';
	root->left->right->left = btree_create_node(&c5);

	c6 = 'E';
	root->left->right->right = btree_create_node(&c6);

	c7 = 'G';
	root->right = btree_create_node(&c7);

	c8 = 'I';
	root->right->right = btree_create_node(&c8);

	c9 = 'H';
	root->right->right->left = btree_create_node(&c9);

	btree_apply_suffix(root, &ft_putchar);

	return (0);
}

// https://www.youtube.com/playlist?list=PLqJK4Oyr5WShBuC5rqt9I0fMVNnaVTpeo
// https://users.monash.edu/~lloyd/tildeAlgDS/Tree/
// https://leetcode.com/explore/learn/card/data-structure-tree/134/traverse-a-tree/992/
// https://www.cs.usfca.edu/~galles/visualization/BST.html
