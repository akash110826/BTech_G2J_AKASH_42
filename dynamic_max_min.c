#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr , n , i , max, min;

    printf("Enter the number of element");
    scanf("%d",&n);
    
    ptr = (int*)calloc(n,sizeof(int));

    if(ptr == NULL)
    {
        printf("MEMORY IS NOT ALLOCATED");
        return 1;
    }
    for(i=0 ; i<n ; i++)
    {
        printf("Enter the emement ");
        scanf("%d", ptr+i);
    }
        max = *ptr;
    min = *ptr;
    for(i=0 ; i<n ;i++)
    {
    
       if(*(ptr+i)>max)
       max = *(ptr+i);
       if (*(ptr+i)<min)
       min = *(ptr+i);
    }
    printf("max = %d",max);
    printf("min = %d",min);
    free(ptr);
    ptr = NULL;
    return 0 ;

}
