#include "CNWSPlayerLastUpdateObject.h"

int CNWSPlayerLastUpdateObject::AddKnownSpell(unsigned char, unsigned char, unsigned long)
{
	asm("leave");
	asm("mov $0x081e43f4, %eax");
	asm("jmp %eax");
}

int CNWSPlayerLastUpdateObject::ClearActionQueue()
{
	asm("leave");
	asm("mov $0x081e4768, %eax");
	asm("jmp %eax");
}

int CNWSPlayerLastUpdateObject::ClearAutoMapData()
{
	asm("leave");
	asm("mov $0x081e47d8, %eax");
	asm("jmp %eax");
}

int CNWSPlayerLastUpdateObject::ClearEffectIcons()
{
	asm("leave");
	asm("mov $0x081e4364, %eax");
	asm("jmp %eax");
}

int CNWSPlayerLastUpdateObject::ClearKnownSpellUsesLeft()
{
	asm("leave");
	asm("mov $0x081e4670, %eax");
	asm("jmp %eax");
}

int CNWSPlayerLastUpdateObject::ClearKnownSpells()
{
	asm("leave");
	asm("mov $0x081e4314, %eax");
	asm("jmp %eax");
}

int CNWSPlayerLastUpdateObject::ClearMemorizedSpells()
{
	asm("leave");
	asm("mov $0x081e3928, %eax");
	asm("jmp %eax");
}

int CNWSPlayerLastUpdateObject::ClearSpellAddDeleteLists()
{
	asm("leave");
	asm("mov $0x081e3bd8, %eax");
	asm("jmp %eax");
}

int CNWSPlayerLastUpdateObject::ClearVisibilityList()
{
	asm("leave");
	asm("mov $0x081e4710, %eax");
	asm("jmp %eax");
}

int CNWSPlayerLastUpdateObject::GetIsDomainSpell(unsigned char, unsigned char, unsigned char)
{
	asm("leave");
	asm("mov $0x081e4548, %eax");
	asm("jmp %eax");
}

int CNWSPlayerLastUpdateObject::GetKnownSpellUsesLeft(unsigned char, unsigned char)
{
	asm("leave");
	asm("mov $0x081e46ac, %eax");
	asm("jmp %eax");
}

int CNWSPlayerLastUpdateObject::GetKnownSpell(unsigned char, unsigned char, unsigned char)
{
	asm("leave");
	asm("mov $0x081e4430, %eax");
	asm("jmp %eax");
}

int CNWSPlayerLastUpdateObject::GetMemorizedSpellMetaType(unsigned char, unsigned char, unsigned char)
{
	asm("leave");
	asm("mov $0x081e45ac, %eax");
	asm("jmp %eax");
}

int CNWSPlayerLastUpdateObject::GetMemorizedSpellReadied(unsigned char, unsigned char, unsigned char)
{
	asm("leave");
	asm("mov $0x081e44e4, %eax");
	asm("jmp %eax");
}

int CNWSPlayerLastUpdateObject::GetMemorizedSpell(unsigned char, unsigned char, unsigned char)
{
	asm("leave");
	asm("mov $0x081e4480, %eax");
	asm("jmp %eax");
}

int CNWSPlayerLastUpdateObject::InitializeAutoMapData()
{
	asm("leave");
	asm("mov $0x081e4810, %eax");
	asm("jmp %eax");
}

int CNWSPlayerLastUpdateObject::ResetAutoMapData(unsigned long)
{
	asm("leave");
	asm("mov $0x081e485c, %eax");
	asm("jmp %eax");
}

int CNWSPlayerLastUpdateObject::SetKnownSpellUsesLeft(unsigned char, unsigned char, unsigned char)
{
	asm("leave");
	asm("mov $0x081e46e0, %eax");
	asm("jmp %eax");
}

int CNWSPlayerLastUpdateObject::SetMemorizedSpellReadied(unsigned char, unsigned char, unsigned char, int)
{
	asm("leave");
	asm("mov $0x081e4610, %eax");
	asm("jmp %eax");
}

int CNWSPlayerLastUpdateObject::SetMemorizedSpellSlot(unsigned char, unsigned char, unsigned char, unsigned long, int, unsigned char)
{
	asm("leave");
	asm("mov $0x081e39d8, %eax");
	asm("jmp %eax");
}

int CNWSPlayerLastUpdateObject::SetNumberMemorizedSpellSlots(unsigned char, unsigned char, unsigned char)
{
	asm("leave");
	asm("mov $0x081e3ad8, %eax");
	asm("jmp %eax");
}

