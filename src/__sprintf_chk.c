#include <stdio.h>
#include <stdarg.h>
#include <limits.h>

int __sprintf_chk(char *s, int f, size_t n, const char *fmt, ...)
{
	int ret;
	va_list ap;
	va_start(ap, fmt);
	ret = vsnprintf(s, n, fmt, ap);
	va_end(ap);
	return ret;
}
