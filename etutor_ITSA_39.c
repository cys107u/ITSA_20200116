#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);//���X�Ӿǥͪ����Z
    for(int round=0;round<N;round++)//�N���X��
    {
        int point[3],total=0,more_than_sixty=0;
        for(int i=0;i<3;i++)
        {
            scanf("%d",&point[i]);//��J�U�즨�Z
            total+=point[i]//�P�ɥ[�i�`��;
            if(point[i]>=60)
            {
                more_than_sixty++;//�P�ɧP�_���S��60���H�W;
            }
        }
        if(more_than_sixty==3||total>=220)//3��60�H�W���`��220�H�W
        {
            printf("P\n");
        }
        else if(more_than_sixty==2&&total<220)//2��60�H�W�B�`���C��220
        {
                printf("M\n");
        }
        else if(more_than_sixty==1)//1��60�H�W
        {
            if(point[0]>=80||point[1]>=80||point[2]>=80)//���@��80�H�W
            {
                printf("M\n");
            }
            else//�Ϥ�
            {
                printf("F\n");
            }
        }
        else//��L���p
        {
            printf("F\n");
        }

    }
    return 0;
}