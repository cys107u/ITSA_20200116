#include<stdio.h>

int function(int x)//���j�ƨ禡
{
    if(x==0||x==1)//1��X2�A0��X1
    {
        return x+1;
    }
    else
        return function(x-1)+function(x/2); //���M�N���D�ص������l���j�䵪��
}

int main()
{
    int x;
    scanf("%d",&x);
    printf("%d\n",function(x));
    return 0;
}
