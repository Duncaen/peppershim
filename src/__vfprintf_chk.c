#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

int __vfprintf_chk(FILE *fp, int f, const char *fmt, va_list ap)
{
	return vfprintf(fp, fmt, ap);
}
