#include<stdio.h>
#include<string.h>
int main()
{
    char str[101];
    //printf("%s",str);
    int num_word=0;
    int letter[26];
    for(int i=0; i<26; i++)
    {
        letter[i]=0;//初始化
    }
    while(scanf("%s",str)!=EOF)
    {
        num_word++;//一次迴圈就是一個字
        int length=strlen(str);
        for(int i=0;i<length; i++)
        {
            if(str[i]<=90&&str[i]>=65)//偵測到大寫
            {
                int temp=str[i]-65;//
                letter[temp]++;
            }
            else if(str[i]<=122&&str[i]>=97)//偵測到小寫
            {
                int temp=str[i]-97;
                letter[temp]++;
            }
        }
    }
    printf("%d\n",num_word);
    for(int i=0; i<26; i++)
    {
        if(letter[i])//如果不是0
        {
            printf("%c : %d\n",i+97,letter[i]);
        }
    }
    return 0;
}
