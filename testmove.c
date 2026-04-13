#include "libft.h"
size_t ft_strlcpy(char *dst, const char *src, size_t dsize);
size_t ft_strlen(const char *s);
int main(void)
{
    char dest[100];
    const char src[] = "hallo du missed";



    printf("%ld", ft_strlcpy(dest, src, ft_strlen(src)));
}