#include<stdio.h>
int main()
{
    int row, col;
    while(scanf("%d %d",&row,&col)!=EOF)
    {
        int arr[row][col];
        for(int i=0;i<row;i++)//照著每個row的col輸入完跳下一個row的方式輸入
        {
            for(int j=0;j<col;j++)
            {
                scanf("%d",&arr[i][j]);
            }
        }
        for(int i=0;i<col;i++)//col跟row互換輸出
        {
            for(int j=0;j<row;j++)
            {
                if(j==0)
                {
                    printf("%d",arr[j][i]);
                }
                else
                printf(" %d",arr[j][i]);
            }
            printf("\n");
        }
    }
    return 0;
}
