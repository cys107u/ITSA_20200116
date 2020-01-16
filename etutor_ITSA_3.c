#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    while(scanf("%d%d",&x,&y)!=EOF)
    {
        if(((x*x)+(y*y))<=10000)//帶入直角三角形定理：a^2+b^2=c^2，如果xy平方和不大於半徑平方
        {
            printf("inside\n");
        }
        else//反之
        {
            printf("outside\n");
        }
    }
    return 0;
}
