#include <stdio.h>

int main()
{
    int year;
    while(scanf("%d",&year)!=EOF)
    {
        if( ( (year%4)==0 && (year%100)!=0 ) || (year%400) ==0) //(�O4������ �B ���O100������) �άO (�O400������)
        {
            printf ("Bissextile Year\n",year);
        }
        else    //��L���p
        {
            printf ("Common Year\n");
        }
    }


    return 0;
}
