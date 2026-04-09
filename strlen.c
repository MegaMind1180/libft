long unsigned int strlen(const char *s)
{
    int x;

    if (!s)
        return (0);
    
    x = 0;
    while (s[x])
        x++;
    return (x);
}

/*
#include "libft.h"
int main(int argc, char **argv)
{
    printf("%ld", strlen(argv[1]));
}
*/