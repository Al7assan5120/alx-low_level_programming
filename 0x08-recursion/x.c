#include <stdio.h>


void reversePrint(char* str)
{
    if (*str == '\0')
    {
        
        return;
        
    }
    reversePrint(str + 1);
    putchar(*str);
    
}

int main() {
    char str[] = "Hello, World!";
    reversePrint(str);
    putchar('\n');
    return 0;
}
