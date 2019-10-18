#include <stdio.h>

int main()
{
    char str[]="Hello India"; 
    char tmp;
    int len = 0, i =0;
    while(str[len] != '\0') len++;
    len--;  // end : len-1;
    //printf("%d : %s\n", len, str);
    char str2[len];
    while((len - i) >= 2)
    {
        tmp     =   str[len];
        str[len]=   str[i];
        str[i]  =   tmp;
        len--; i++;
        
        /* To store in another str :
        str2[i]= str[len];
        len--; i++;
        */
    }
    printf("%s\n", str);
    //str2[i]='\0';
    //printf("%s\n", str2);

    return 0;
}
