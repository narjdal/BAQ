#include <stdio.h>
#include "ft_printf.h"
int main ()
{
    int     i;
    int     d;
    char    *str;
    int returnvalue1,returnvalue2;
    d = -2147483648;
    returnvalue1 = printf("|| VR PRINTF  %d",d);
    returnvalue2 = ft_printf("|| MY PRINTF  %d",d);
    printf(" \n return value VR %d return value MY %d",returnvalue1,returnvalue2);
}