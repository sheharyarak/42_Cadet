#include "libft.h"

void*	ft_memset(void*	ptr, int value,	size_t num)
{
	int i = 0;
	while(i < num)
	{
		*((char*)(ptr+i)) = value;
		i++;
	}
	return ptr;
}