//wap to print the pattern.
#include<stdio.h>
int main()
{
 int n,i ,j;
 printf("Enter the hight of pattern");
 scanf("%d",&n);
  
 for (i=1 ; i<=n ; i++)
{
   int a = 1;
    for ( j=1; j <= i; j++)
    {

        printf("%d ",a);
        a=a+2;
    }
    printf("\n"); 
}

    return 0;

}
