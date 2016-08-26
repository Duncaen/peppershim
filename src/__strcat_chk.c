#include <stdlib.h>
#include <string.h>

char *__strcat_chk(char *dest, const char *src, size_t n)
{
	size_t src_l = strlen(src);
	size_t dest_l = strlen(dest);
	// XXX: overflow???
	if (dest_l + src_l > n)
		abort();
	return strncat(dest, src, n);
}
