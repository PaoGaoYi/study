#include <stdio.h>
int main()
{
    //此为升序数组的二分法查找
    
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    printf("输入要查找的数字(1-10)\n");
    int k;
    scanf("%d",&k);//要查找的数字
    printf("%d\n",k);
    while(k==0||k>10)//k==0或者k>10都不行一定要1-10
    {
        printf("请输入1-10的数字\n");
        scanf("%d",&k);
    }  
    int arr_number=sizeof(arr)/sizeof(arr[0]);
    int left=0;//最左边的元素下标
    int right=arr_number-1;//最右边的元素下标
    while(left<=right)
    {
        int median=(left+right)/2;//中位值下标
        if(arr[median]<k)//k大于中位值则说明k的位置处于中位值右边
        {
            left=median+1;
        }
        else if(arr[median]>k)//k小于中位值则说明k的位置处于中位值左
        {
            right=median-1;
        }
        else 
        {   //k==arr[median],说明k值找到
            printf("要查找数字的下标=%d",median);
            break;
        }
    }
    if(right<left)
    {
        printf("找不到");
    }
    return 0;
}