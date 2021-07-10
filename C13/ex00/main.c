//norminette -R CheckForbiddenSourceHeader btree_create_node.c
//clear && clang -Wall -Wextra -Werror *.c && ./a.out | cat -e
#include <stdio.h>
#include "ft_btree.h"

int	main(void)
{
	t_btree	*btree;
	int	n;

	n = 42;
	btree = btree_create_node(&n);

	printf("%d", *((int *)btree->item));
	return (0);
}

// https://www.youtube.com/playlist?list=PLqJK4Oyr5WShBuC5rqt9I0fMVNnaVTpeo
// https://users.monash.edu/~lloyd/tildeAlgDS/Tree/
// https://leetcode.com/explore/learn/card/data-structure-tree/134/traverse-a-tree/992/
// https://www.cs.usfca.edu/~galles/visualization/BST.html
