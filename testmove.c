#include "libft.h"

int main(void)
{
    char *dest;
    char src[] = "hallo du missed";
    dest = src + 3;



    printf("%s", (char *)ft_memmove(dest, src, strlen(src)));
}