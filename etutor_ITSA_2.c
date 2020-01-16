#include<stdio.h>
int main()
{
    int mi=0;
    double km=0;
    while(scanf("%d",&mi)!=EOF)//在遇到結尾字元前不斷做
    {
        km=mi*(1.6);//轉換
        printf("%.1f\n",km);//輸出
    }
    return 0;
}
