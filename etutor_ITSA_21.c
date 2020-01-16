#include<stdio.h>
int main()
{
    float min=1e9;//箇砞程
    float max=-1e8;//箇砞程
    float tmp;
    for(int i=0;i<10;i++)
    {
        scanf("%f",&tmp);//块耞
        if(tmp>max)//ゑ程临
        {
            max=tmp;//穝程
        }
        if(tmp<min)//ゑ程临
        {
            min=tmp;//穝程
        }
    }
    printf("maximum:%.2f\nminimum:%.2f\n",max,min);
    return 0;
}
