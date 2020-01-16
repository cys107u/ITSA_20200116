#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b)//qsort�ݭn��compare�禡
{
    int c = *(int *)a;
    int d = *(int *)b;
    if(c < d)
    {
        return -1; //�^��-1���a<b
    }
    else if (c == d)
    {
        return 0;//�^��0���a=b
    }
    else
        return 1;//�^��1���a>b
}

int main()
{
    int N;
    scanf("%d",&N);//��J�X������
    while(N)//�Ѿl�����!=0���e
    {
        int T,m,k;//T:�`�w��  m:���u��  k:���~��
        scanf("%d%d%d",&T,&m,&k);//��J
        int item[k];
        for(int i=0; i<k; i++)
        {
            scanf("%d",&item[i]);//��J�U���~���B
        }

        qsort(item,k,sizeof(int),compare);//����~���B���Ƨ�
        int temp=0;
        for(int i=0; i<m; i++)//greedy:�V�K�y�����~�V���R�A���u���X��N�R�e�X�K�y��
        {
            temp+=item[i];
        }
        if(temp<=T)//�ݶR���F�観�S���W�L�`�w��A�S���W�L�N��X
        {
            printf("%d\n",temp);
        }
        else//�Ϥ�
        {
            printf("Impossible\n");
        }
        N--;//�����--
    }
    return 0;
}
