#ifndef LIBFT_H
#define LIBFT_H

# include <stdio.h>
# include <string.h> 

int isascii(int c);
int	isprint(int c);
int	isalnum(int c);
int isdigit(int c);
int	isalpha(int c);
void	*memset(void *s, int c, size_t n);
size_t strlen(const char *s);
void	bzero(void *s, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);

#endif