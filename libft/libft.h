#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void*	ft_memset(void*	ptr, int value,	size_t num);
void*	ft_memcpy(void* destination, const void* source, size_t num);
void*	ft_memccpy(void* destination, const void * source, int c, size_t num);
void	ft_bzero(void* s, size_t n);
void*	ft_memmove(void* destination, const void* source, size_t num);

#endif