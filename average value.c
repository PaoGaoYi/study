#include <stdio.h>
int main()
    {
        long long sum=0,i,arr=0;
        int number;
        float avg;
        printf("输入个数\n");
        scanf("%ld",&number);
        printf("输入%ld个数字\n",number);
            for(i=0;i<number;i++)
            {
               scanf("%ld",&arr);
                sum+=arr;
                printf("当前总和%ld\n",sum);
            }
        printf("----------------------------------------\n");
        printf("总和为%ld\n",sum);
        avg=(float)sum/number;
        printf("平均值为%f\n",avg);
    
    }