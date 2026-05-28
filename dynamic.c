#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr , n ,i , sum =0;
    printf("Enter the number of element");
    scanf("%d",&n);

    ptr = (int*)calloc (n,(2));

    if (ptr==NULL)
    {
        printf("memory allocation is failed");
      return 1;
    }
    for(i=0 ; i<n ; i++)
    {
        printf("Enter the element");
        scanf("%d",ptr+i);

        sum  =sum + *(ptr+i);
    }
    printf("sum = %d",sum);
    free( ptr);
    ptr = NULL;
    return 0;
}
