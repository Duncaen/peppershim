#include <string.h>

void *__memmove_chk(void *dest, const void *src, size_t n, size_t m)
{
	return memmove(dest, src, n);
}
