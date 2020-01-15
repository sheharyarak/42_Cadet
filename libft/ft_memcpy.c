#include "libft.h"

void * ft_memcpy ( void * destination, const void * source, size_t num )
{
    unsigned int i = 0;
    while (i < num * sizeof(*source))
    {
        *((char*)(destination+i)) = *((char*)(source+i));
        i++;
    }
    return destination;
}