#include<stdio.h>
void swap(int *a ,int *b)//交換兩個變數的值
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int sum_of_number(int x)//計算一個數字各位數的總和
{
    int y=0;
    int k=10000000,m;
    while(1)
    {
        //利用%k來過濾k以上的所有位數 利用/m取k到m之間唯一的那個數
        m=k/10;
        int tmp=(x%k);
        y+=tmp/m;//再加進y
        k/=10;
        if(k==1)//k==1就表示到底了
        {
            break;
        }
    }
    return y;

}


int main()
{
    int N;
    scanf("%d",&N);
    int number[N],sum[N];
    for(int now_num=0;now_num<N;now_num++)//輸入
    {
        scanf("%d",&number[now_num]);
        sum[now_num]=sum_of_number(number[now_num]);//輸入的同時計算各位數總和
        //printf("%d ",sum[now_num]);
    }

    for(int i=N-1;i>=0;i--)//先依照數字本身大小做排序
    {
        for(int j=0;j<i;j++)
        {
            if(number[j]>number[j+1])
            {
                swap(&number[j],&number[j+1]);
                swap(&sum[j],&sum[j+1]);
            }
        }
    }
    for(int i=N-1;i>=0;i--)//再依照各位數總和做排序
    {
        for(int j=0;j<i;j++)
        {
            if(sum[j]>sum[j+1])
            {
                swap(&number[j],&number[j+1]);
                swap(&sum[j],&sum[j+1]);
            }
        }
    }
    for(int i=0;i<N;i++)//輸出
    {
        if(i!=0)
            printf(" ");
        printf("%d",number[i]);
    }
    printf("\n");
    return 0;
}
