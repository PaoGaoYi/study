#include<stdio.h>
#include <stdlib.h>
int main()
{
  
    long long a,sum=1;    
    char b[2]={0};
    gets(b);
    a=atol(b);
    if(a==0)
    {
        printf("%s的乘阶为1",a);
    }
    else
    {    for(int i=1;i<=a;i++)
            {
            sum*=i;
            }
            
        printf("%lld的乘阶为%lld",a,sum);
    }
        
return 0;
}

