#include "libft.h"

int	isalnum(int c)
{
	return (isalpha(c) || isdigit(c));
}

int main(int argc, char **argv)
{
	printf("%d", isalnum(argv[1][0]));
}