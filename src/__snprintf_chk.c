#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

int __snprintf_chk(char *s, size_t l, int f, size_t n, const char *fmt, ...)
{
	int ret;
	va_list ap;
	va_start(ap, fmt);
	ret = vsnprintf(s, l, fmt, ap);
	va_end(ap);
	return ret;
}
