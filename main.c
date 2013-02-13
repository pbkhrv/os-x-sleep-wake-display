#include <stdio.h>
#include <string.h>
#include <CoreFoundation/CoreFoundation.h>
#include <IOKit/IOKitLib.h>

/* Returns 0 on success and 1 on failure. */
int putDisplayToSleep (int isSleep)
{
    io_registry_entry_t reg = IORegistryEntryFromPath(kIOMasterPortDefault, "IOService:/IOResources/IODisplayWrangler");

    if (!reg)
        return 1;

    IORegistryEntrySetCFProperty(reg, CFSTR("IORequestIdle"), (isSleep) ? kCFBooleanTrue : kCFBooleanFalse);
    IOObjectRelease(reg);
    return 0;
}

int main (int argc, const char * argv[])
{
    if (argc > 1 && strcmp(argv[1], "sleep") == 0)
        return putDisplayToSleep(TRUE);

    if (argc > 1 && strcmp(argv[1], "wake") == 0)
        return putDisplayToSleep(FALSE);

    printf("Please specify 'sleep' or 'wake' as first argument to put monitor to sleep or wake it up.\n");
    return 1;
}
