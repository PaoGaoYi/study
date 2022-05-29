#include<stdio.h>
#include<windows.h>//用于sleep(),system()
#include<string.h>//strlen()//用于计算字符串长度
int main()
{
    //system("chcp 65001");
    char arr1[19]={0};//放#号
    char arr2[19]={0};//放字符
    int num=0;
    printf("请输入字符\n");
    gets(arr2);//输入要显示的字符
    int s_arr2=sizeof(arr2)/sizeof(arr2[0]);//计算数组的元素个数
    printf("%d\n",s_arr2);
    for(int i=0;i<s_arr2;i++)//算出数组中没有字符的0有多少
     {
        if (arr2[i]==0)
            {
            num++;
            }
     }
    int zong=s_arr2-num;//用总的元素个数减去空的0得到显示的字符元素个数
    for(int i=0;i<zong;i++)//再将arr1填充对应的#号
    {
        arr1[i]='#';
    }
    printf("%s\n",arr1);

    for(int i=0;i<zong;i++,zong--)//将头尾的#号同时替换字符
    {
        arr1[i]=arr2[i];
        arr1[zong-1]=arr2[zong-1];//下标开始为0所以减1
        Sleep(1000);//单位毫秒,延迟1秒再执行
        system("cls");//清空屏幕
        printf("%s\n",arr1);
    } 
    getchar();
}