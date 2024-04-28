#include <stdio.h>

int addvalue(int val1, int val2)
{
    int result;

    __asm__ (
        "ADD %[Rd],%[Rs1],%[Rs2]"
        : [Rd] "=r" (result)
        : [Rs1] "r" (val1), [Rs2] "r" (val2)
    );

    return result;
}

int main()
{
    int val = addvalue(1, 2);
    printf("addvalue = %d\n", val);
    return 0;
}
