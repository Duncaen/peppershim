#include <string.h>

void *__memcpy_chk(void *dest, const void *src, size_t n, size_t m)
{
	return memcpy(dest, src, n);
}
