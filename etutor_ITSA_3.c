#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    while(scanf("%d%d",&x,&y)!=EOF)
    {
        if(((x*x)+(y*y))<=10000)//�a�J�����T���Ωw�z�Ga^2+b^2=c^2�A�p�Gxy����M���j��b�|����
        {
            printf("inside\n");
        }
        else//�Ϥ�
        {
            printf("outside\n");
        }
    }
    return 0;
}
