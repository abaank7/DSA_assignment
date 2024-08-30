#include <stdio.h>



int main() 
{
    char str[10];
    int i=0,j, l, flag = 0;
    printf("enter a string");
    gets(str);
   while(str[i]!='\0')
{
   l++;
   
    i++;
}

    for (j = 0; j < l; j++) 
    {
        
        if (str[j] != str[l - j - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag)
        printf("%s is not palindrome", str);
    else
        printf("%s is palindrome", str);
        
    return 0;
}
