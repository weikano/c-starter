#include <stdio.h>
#include <stdlib.h>

int main()
{
    return printMessage("Hello World!\n");
}

int printMessage(const char* msg)
{
    return puts(msg);
}
