#include<stdio.h>
int main()
{
    int arr1[11]={0,1,2,3,4,5,6,7,8,9,10};//控制每次循环的次数
    int arr2[11]={0,1,2,3,4,5,6,7,8,9,10};//存放的乘阶结果，和要计算的乘阶，与上面对对应
    int sum=0;
    for(int n=1;n<=10;n++)
    {
        for(int i=1;i<arr1[n];i++)//计算乘阶
        {
            arr2[n]*=i;   
        }
        printf("%d的乘阶为%d\n",n,arr2[n]);
        sum+=arr2[n];//1！-10！相加的和】
        if(n==10)//防止一次循环打一次
            printf("1!-10!相加的和为%d",sum);
    }
}