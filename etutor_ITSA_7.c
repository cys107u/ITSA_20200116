#include<stdio.h>
#include<string.h>
int main()
{
    int total,x_R,x_I,y_R,y_I,ans_R=99,ans_I=99;
    scanf("%d",&total);//��J�����
    for(int round=0;round<total;round++)//�X�Ӵ���]�X��
    {
        char compute[2];
        scanf("%s",compute);//��J�B��Ÿ�
        scanf("%d%d%d%d",&x_R,&x_I,&y_R,&y_I);//��Jxy����ƩM���
        if(strcmp(compute,"+")==0)//+
        {
            ans_R=x_R+y_R;
            ans_I=x_I+y_I;
        }
        else if(strcmp(compute,"-")==0)//-
        {
            ans_R=x_R-y_R;
            ans_I=x_I-y_I;
        }
        else if(strcmp(compute,"*")==0)//*
        {
            ans_R=(x_R*y_R)-(x_I*y_I);//��Ƭۭ�-��Ƭۭ�
            ans_I=(x_R*y_I)+(x_I*y_R);//��Ƶ�Ƥ����ۥ[
        }
        printf("%d %d\n",ans_R,ans_I);
    }
    return 0;
}
