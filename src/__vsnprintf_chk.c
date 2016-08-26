#include <stdarg.h>
#include <stddef.h>

int __vsnprintf_chk(char *s, size_t n, int f, const char *fmt, va_list ap)
{
	return vsnprintf(s, n, fmt, ap);
}
