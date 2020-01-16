#include<stdio.h>

int is_prime(int x)
{
    for(int i=2; i*i<=x; i++)//從二做到x的開根號附近
    {
        if(i*i==x)//有找到因數
        {
            return 1;
        }
        for(int j=1; i*j<=x; j++)
        {
            if(x==j*i)//有找到因數
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int num;
    while(scanf("%d",&num)!=EOF)
    {
        if(is_prime(num))//1
        {
            printf("NO\n");
            continue;
        }
        // 0
        printf("YES\n");
    }
    return 0;
}
