#include<stdio.h>
void main()
{
    char flag = 'Y';
    char pass;
    while (flag == 'Y')
    {
        /* code */
        printf("Enter the password:");
        scanf("%c", &pass);
        if (pass == 'x')
        {
            /* code */
            flag = 'N';
        }   
    }    
}