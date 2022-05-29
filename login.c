#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
    system("chcp 65001");//改变命令行的编码
    char *username[2]={0};
    char *password[2]={0};
    char *admin[2]={0};
    char *pasw[2]={0};
    for (int i=0;i<2;i++)//给数组指针申请空间字节为10
    {
        username[i]=(char*)malloc(10);
        password[i]=(char*)malloc(10);
        admin[i]=(char*)malloc(10);
        pasw[i]=(char*)malloc(10);
        if(username[i]==NULL)//遇到空指针则退出
            exit(1);
        if(password[i]==NULL)
            exit(1);
        if(admin[i]==NULL)
            exit(1);
        if(pasw[i]==NULL)
            exit(1);
    }
    int n=0,a=0;//n控制注册用户的数量，a控制密码错误次数
    char us;//用于判断要不要注册账户
loop:
if(a<3)//错三次就停止
{
    printf("是否已有账户(Y/N)?\n");
    us=getchar();
    getchar();
    if( us =='Y')//有账户的情况下
    {   
        printf("请输入账号:\n");
        scanf("%s",admin[0]);//为指针赋值
        getchar();//吸掉回车
        printf("请输入密码:\n");
        scanf("%s",pasw[0]);//为指针赋值
        getchar();//吸掉回车
        for(int i=0;i<2;i++)//查找数据库中是否存在这个用户，后续可以改进，如用二分法
        {
            if (strcmp(admin[0],username[i])==0)//比较用户名与数据库中是否相等，strcmp相同则会返回0，为0则执行下面语句
            {
                if (strcmp(pasw[0],password[i])==0)//判断密码
                {
                    printf("登录成功\n");
                    printf("2秒后跳转到主页面\n");
                     Sleep(2000);
                    system("cls");
                    goto next;//跳出整个程序
                }
                else
                { 
                    printf("登录失败,用户名或密码错误\n");
                    a++;//失败一次就加+1
                    goto loop;//返回函数开始的时候
                }
            }
        } 
        a++;//失败一次就加+1
        printf("登录失败，不存在此用户名\n");
        goto loop;//返回函数开始的时候
        
    }
    else if( us =='N')//用于注册
    {
        printf("请输入用户名用于注册：\n");
        scanf("%s",username[n]);//用n来标识这是第几个人注册，用户名
        getchar();
        printf("请输入用户密码：\n");
        scanf("%s",password[n]);//用n来标识这是第几个人注册，密码
        getchar();
        n++;//注册成功一个人就加1，这样就不会被覆盖
        printf("注册成功,2秒后返回登录页面\n");
        Sleep(2000);
        system("cls");
        goto loop;//返回登录界面，重新登录
    }
    else
    {//没有输入Y或者N的时候，防止出错
        printf("输入错误请重新输入\n");
        goto loop;
    }
    next://跳出程序
    printf("这里是主界面");
    getchar();
}
else 
{//错误过多惩罚
    printf("超过三次,请等待30分钟后再试");
    Sleep(1000);
    a=0;
    system("cls");
    goto loop;
}
return 0;
}