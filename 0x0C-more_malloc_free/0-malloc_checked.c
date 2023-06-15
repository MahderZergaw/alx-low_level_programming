#include <stdlib.h>
/**
 * malloc_checked - malloc check
 *@b:param 1
 * Return:void
 */
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
exit(98)
return (ptr);
}
