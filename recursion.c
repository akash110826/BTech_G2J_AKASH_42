#include<stdio.h>
int sum(int n)
{
    if( n==0)
    return 0;
    else
return n+sum(n-1);

}
int main()
{
    int num, f;
    printf("Enter the nmber");
    scanf("%d",&num);

    f = sum(num);
    printf("factorial of %d is %d",num,f);
    return 0;
}
