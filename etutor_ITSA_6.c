#include<stdio.h>
int main()
{
    int month;
    while(scanf("%d",&month)!=EOF)//遇到結尾字元前一直做
    {
        if(month/3==1)//3 4 5
        {
            printf("Spring\n");
        }
        else if(month/3==2)//6 7 8
        {
            printf("Summer\n");
        }
        else if(month/3==3)//9 10 11
        {
            printf("Autumn\n");
        }
        else
        {
            printf("Winter\n");//12 1 2
        }
    }
    return 0;
}
