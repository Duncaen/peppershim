#include <setjmp.h>

void __longjmp_chk(jmp_buf buf, int val)
{
	return longjmp(buf, val);
}
