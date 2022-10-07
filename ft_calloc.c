#include "libft.h"
void *ft_calloc(size_t count, size_t size)
{
   size_t  i;
   char *memory;

    i = 0;
   memory = malloc(count * size);
   if (memory == NULL)
    return (0);
    while(i < count * size)
    {
        memory[i] = 0;
        i++;
    }
   return (memory);
}
//  #include <stdio.h>
// int main()
// {

//     // size_t count = 20;
//     // size_t size = 4;
//     // calloc(count, size);
//     size_t count1 = 20;
//     size_t size1 = 4;
//     ft_calloc(count1, size1);
// }