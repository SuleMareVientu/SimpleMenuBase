#include "..\inc\main.h"
#include "script.h"

void main();

BOOL APIENTRY DllMain(HMODULE hInstance, DWORD reason, LPVOID lpReserved)
{
	switch (reason)
	{
	case DLL_PROCESS_ATTACH:
		scriptRegister(hInstance, main);
		break;
	case DLL_PROCESS_DETACH:
		scriptUnregister(main);
		break;
	}
	return TRUE;
}