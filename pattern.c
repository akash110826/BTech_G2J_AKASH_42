#include<stdio.h>
int main()
{
    int n, i, j;
    printf(" Enter the hight of pattern");
    scanf(" %d", &n),
    for( i=0; i<=4; i++)
    {
        for(j=1; j<=4; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
