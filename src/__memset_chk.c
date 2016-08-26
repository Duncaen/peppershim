#include <string.h>
#include <stdlib.h>

void *__memset_chk(void *dest, int c, size_t l, size_t n)
{
	// XXX:???
	if (n > l)
		abort();
	return memset(dest, c, n);
}
