#include<stdio.h>
int main()
{
    int mi=0;
    double km=0;
    while(scanf("%d",&mi)!=EOF)//�b�J�쵲���r���e���_��
    {
        km=mi*(1.6);//�ഫ
        printf("%.1f\n",km);//��X
    }
    return 0;
}
