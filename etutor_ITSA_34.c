#include<stdio.h>
int main()
{
    int h,g;//h:����  g:�ʧO
    double w;//�魫
    while(scanf("%d%d",&h,&g)!=EOF)//��J
    {
        if(g==1)//�k��
        {
            w= (h-80)*0.7;//����
        }
        else if(g==2)//�k��
        {
            w= (h-70)*0.6;//����
        }
        printf("%.1f\n",w);//��X��p�ƲĤ@��
    }
    return 0;
}
