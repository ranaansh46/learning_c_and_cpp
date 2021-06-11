#include <stdio.h>
void main()
{
    int i,yr;
    printf("enter a year :\n");
    scanf("%d",&yr);
    if(yr%100==0)
    {
        if(yr%400==0)
        {
            printf("year %d is leap year",yr);
        }
        else
        printf("the year %d is not leap year",yr);
    }
    else if(yr%4==0)
    {
        printf("year %d is leap year",yr);
    }
    else
    printf("year %dis not leap year",yr);
}