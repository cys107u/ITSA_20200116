#include<stdio.h>
int main()
{
    int num;
    while(scanf("%d",&num)!=EOF)
    {
        int ans=0;
        for(int i=0;i<=num;i+=3)//從0開始，每次加3，加到不超過num
        {
            ans+=i;//把數字加進去
        }
        printf("%d\n",ans);
    }
    return 0;
}
