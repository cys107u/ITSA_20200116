#include<stdio.h>

int main()
{
    int kWh_stand[5]= {0,120,330,500,700};//�ت�: �׼ƪ�����
    double summer[5]= {2.10, 3.02, 4.39, 4.97, 5.63 };//�ت�: �L�ѫ׼ƪ�����
    double non_summer[5]= {2.10, 2.68, 3.61, 4.01, 4.50 };//�ت�: �D�L�ѫ׼ƪ�����
    int kWh,temp;//kWh: ��
    double summer_total=0,non_summer_total=0;
    scanf("%d",&kWh);
    for(int i=4;kWh>0;i--)//�q�̫᭱�j
    {
        if(kWh>kWh_stand[i])//�p�G���W�L�з�
        {
            temp=kWh-kWh_stand[i];//���X�W�L�h��
            summer_total+=temp*summer[i];//�L���`�q�O�[�W�W�L���׼�*�L�ѻ���
            non_summer_total+=temp*non_summer[i];//�D�L���`�q�O�[�W�W�L���׼�*�D�L�ѻ���
            kWh-=temp;//�����w�g��n������
        }
    }
    printf("Summer months:%.2f\n",summer_total);//��X
    printf("Non-Summer months:%.2f\n",non_summer_total);

return 0;
}
