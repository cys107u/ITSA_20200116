#include<stdio.h>
int main()
{
    float min=1e9;//���w�]�̤p�Ȭ��ܤj
    float max=-1e8;//�w�]�̤j�ȫܤp
    float tmp;
    for(int i=0;i<10;i++)
    {
        scanf("%f",&tmp);//��J�@�ӧP�_�@��
        if(tmp>max)//��̤j���٤j
        {
            max=tmp;//��s�̤j��
        }
        if(tmp<min)//��̤p���٤p
        {
            min=tmp;//��s�̤p��
        }
    }
    printf("maximum:%.2f\nminimum:%.2f\n",max,min);
    return 0;
}
