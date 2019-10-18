#include <stdio.h>

int main()
{
    char str[]="Hello India"; 
    char tmp;
    int len = 0, i =0;
    while(str[len] != '\0') len++;
    len--;  // end : len-1;
    while((len - i) >= 2)
    {
        tmp     =   str[len];
        str[len]=   str[i];
        str[i]  =   tmp;
        len--; i++;
    }
    printf("%s\n", str);
    return 0;
}
