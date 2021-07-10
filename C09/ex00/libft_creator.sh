gcc -Wall -Werror -Wextra -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
ar rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
ranlib libft.a
rm -f ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

# -c
# Compile or assemble the source files, but do not link. The linking stage simply is not done. The ultimate output is in the form of an object file for each source file.

#ranlib libft.a //fast index lib for future usages

# ar command is used to create, modify and extract the files from the archives. An archive is a collection of other files having a particular structure from which the individual files can be extracted. Individual files are termed as the members of the archive.

# Reading the manual for ar helps but I will explain it in more detail. ar -rcs is the most likely command you would use when using a Makefile to compile a library. r means that if the library already exists, replace the old files within the library with your new files. c means create the library if it did not exist. s can be seen to mean 'sort' (create a sorted index of) the library, so that it will be indexed and faster to access the functions in the library. Therefore, rcs can be seen to mean replace, create, sort.
