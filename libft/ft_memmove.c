#include "libft.h"

void * ft_memmove ( void * destination, const void * source, size_t num )
{
    if(sizeof(*destination) * num < sizeof(*source) * num)
    {
        return destination;
    }
    unsigned int i = 0;
    char* tmp = (char*)malloc(num*sizeof(char));
    while (i < num * sizeof(char))
    {
        *(tmp + i) = *((char*)(source+i));
        i++;
    }
    i = 0;
    while (i < num * sizeof(*source))
    {
        *((char*)(destination+i)) = *(tmp+i);
        i++;
    }
    return destination;
}