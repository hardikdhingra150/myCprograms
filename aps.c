#include <stdio.h>
int main() 
 {
    int rows = 3;
    int cols = 5;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
 }