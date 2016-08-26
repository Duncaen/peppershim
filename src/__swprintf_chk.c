#include <stdarg.h>
#include <wchar.h>

int __swprintf_chk(wchar_t *s, size_t n, int f, const wchar_t *fmt, ...)
{
	int ret;
	va_list ap;
	va_start(ap, fmt);
	ret = swprintf(s, n, fmt, ap);
	va_end(ap);
	return ret;
}
