#include<stdio.h>
int main()
{
    int num;
    while(scanf("%d",&num)!=EOF)
    {
        int ans=0;
        for(int i=0;i<=num;i+=3)//�q0�}�l�A�C���[3�A�[�줣�W�Lnum
        {
            ans+=i;//��Ʀr�[�i�h
        }
        printf("%d\n",ans);
    }
    return 0;
}
