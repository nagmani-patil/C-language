#include<stdio.h>

struct Time
{
    int hour;
    int minute;
    int second;
};

int main()
{
    struct Time t;

    printf("Enter Hour Minute Second: ");
    scanf("%d%d%d",&t.hour,&t.minute,&t.second);

    printf("Time : %02d:%02d:%02d",t.hour,t.minute,t.second);

    return 0;
}