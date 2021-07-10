#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <errno.h>
# include <string.h>
#include <libgen.h>

void	ft_putchar(char c);
int		ft_strlen(char *str);
int		ft_filelen(char *file);
char	*ft_filecpy(char *file, char *str);
void	ft_putstrn(char *str, int index);
int		ft_ctoi(int argc, char **argv);

#endif
