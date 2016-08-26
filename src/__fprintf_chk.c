#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

int __fprintf_chk(FILE *fp, int f, const char *fmt, ...)
{
	int ret;
	va_list ap;
	va_start(ap, fmt);
	ret = vfprintf(fp, fmt, ap);
	va_end(ap);
	return ret;
}
