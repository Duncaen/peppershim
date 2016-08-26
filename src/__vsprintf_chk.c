#include <stdio.h>
#include <limits.h>

int __vsprintf_chk(char *s, int f, const char *fmt, va_list ap)
{
	return vsnprintf(s, INT_MAX, fmt, ap);
}
