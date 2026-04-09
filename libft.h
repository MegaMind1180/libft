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
long unsigned int strlen(const char *s);
void	bzero(void *s, size_t n)

#endif