//wap to read  
#include<stdio.h>
int main()
{
    int a,b;
    char operend;
    printf("enter two operend");
    scanf("%d%d",&a,&b);
    printf("Enter the operends(+,-,*,/) ");
    scanf(" %c",&operend);
    switch(operend)
    {
        case'+':
        printf("Addition=%d",a+b);
        break;
        case'-':
        printf("Subtraction=%d",a-b);
        break;

        case'*':
        printf("Multiplication=%d",a*b);
        break;

        case'/':
        printf("Division=%d",a/b);
        break;
        default:
        printf("ERROR! Incorrect operator");
    }
    return 0;
}