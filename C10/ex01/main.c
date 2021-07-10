#include <unistd.h>
#include <fcntl.h>

int	main(void)
{
	char *str[30000];

	read(0, str, 30000);
	write(1, str, 30000);
}
