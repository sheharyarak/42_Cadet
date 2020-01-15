#include "libft.h"

void * ft_memccpy ( void * destination, const void * source, int c, size_t num )
{
    unsigned int i = 0;
    while (i < num * sizeof(*source))
    {
        *((char*)(destination+i)) = *((char*)(source+i));
        if(*((char*)source+i) == c)
            return (destination + i + 1);
        i++;
    }
    return NULL;
}