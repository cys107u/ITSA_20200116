#include<stdio.h>
#include<string.h>
int is_Palindrome(char word[],int length)//�P�_�j�� �O�^��1 ���O�^��0
{
    for(int i=0;i<(length)/2;i++)//�q�Ĥ@�Ө줤������
    {
        if((word[i])!=word[length-i-1])//�e����i�Ӹ�˼Ʋ�i�Ӥ��@��->���O�^��
        {
            return 0;
        }
    }
    return 1;
}


int main()
{
    char word[8192];
    while(scanf("%s",word)!=EOF)
    {
        int length = strlen(word);//�r���`��
       //printf("%s L:%d, is_P:%d\n",word,length,is_Palindrome(word,length));

        if(is_Palindrome(word,length)==0)//���O�^��|�^��0
        {
            printf("NO\n");
        }
        else
            printf("YES\n");

    }
    return 0;
}
