#include<stdio.h>

int main()
{
    int kWh_stand[5]= {0,120,330,500,700};//: 计だ
    double summer[5]= {2.10, 3.02, 4.39, 4.97, 5.63 };//: 甃ぱ计基窥
    double non_summer[5]= {2.10, 2.68, 3.61, 4.01, 4.50 };//: 獶甃ぱ计基窥
    int kWh,temp;//kWh: 
    double summer_total=0,non_summer_total=0;
    scanf("%d",&kWh);
    for(int i=4;kWh>0;i--)//眖程穓
    {
        if(kWh>kWh_stand[i])//狦Τ禬筁夹非
        {
            temp=kWh-kWh_stand[i];//禬筁ぶ
            summer_total+=temp*summer[i];//甃ぱ羆筿禣禬筁计*甃ぱ基窥
            non_summer_total+=temp*non_summer[i];//獶甃ぱ羆筿禣禬筁计*獶甃ぱ基窥
            kWh-=temp;//Ι奔竒衡场だ
        }
    }
    printf("Summer months:%.2f\n",summer_total);//块
    printf("Non-Summer months:%.2f\n",non_summer_total);

return 0;
}
