#include "CNWBaseItemArray.h"

int CNWBaseItemArray::GetBaseItem(int) const
{
	asm("leave");
	asm("mov $0x080c1a80, %eax");
	asm("jmp %eax");
}

int CNWBaseItemArray::Load()
{
	asm("leave");
	asm("mov $0x080bfbe4, %eax");
	asm("jmp %eax");
}

