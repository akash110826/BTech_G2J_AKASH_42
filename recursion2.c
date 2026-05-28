#include<stdio.h>
int power(int m ,int n)
{
    if (n==0)
    return 1;
    else return m*power(m,n-1);
}

int main(){
    int x ,y,result;
    printf("enter the number");
    scanf("%d",&x);
    printf("enter the power");
    scanf("%d",&y);
     
    result = power(x,y);

    printf("the result is  %d  " ,result);
return 0;
}
