#include<stdio.h>
int main()
{
    int N,total,remain;//N: �p�����h�ֿ�  total:�`�@�n�I�h�ֿ�  remain:�䪺�`�B
    int a[3],coin[3];
    scanf("%d,%d,%d,%d",&N,&a[0],&a[1],&a[2]);
    total=(a[0]*15)+(a[1]*20)+(a[2]*30);
    if(total>N)//�`�@�I������p�������h
    {
        printf("0\n");
    }
    else if(total==N)//�`�@�I������n�O�p������
    {
        printf("0,0,0\n");
    }
    else
    {
        //�o��ϥ�greedy �V�j�����B���V�h�V�n
        remain=N-total;

        coin[0]=remain/50;
        remain%=50;

        coin[1]=remain/5;
        remain%=5;

        coin[2]=remain/1;
        printf("%d,%d,%d\n",coin[2],coin[1],coin[0]);
    }

    return 0;
}
