#include<stdio.h>
int main()
{
    long long arr[10];
    long long a,max=0,i;
    for(i=0;i<10;i++)
    {
      scanf("%lld",&arr[i]);
    }
 
    for(i=0;i<10;i++)
    {
        if(arr[i]>max)
            max=arr[i];
            printf("值为%lld\n",max);
    }  
    printf("最大值为%lld",max);
   return 0;
}
