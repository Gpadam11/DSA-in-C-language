//Calculate the difference between two time periods using structure
// #include <stdio.h>
// #include <stdlib.h>

struct zone
{
    int sec;
    int min;
    int hour;
};
typedef struct zone time;

time diff(time t1,time t2)
{
    t1.sec=(abs)(t1.sec-t2.sec);
    t1.min=(abs)(t1.min-t2.min);
    t1.hour=(abs)(t1.hour-t2.hour);

    return t1;

}

void zones()
{
    time a,b;
    printf("For first time zone\n");
    printf("Enter the seconds: ");
    scanf("%d",&a.sec);
    printf("Enter the minutes: ");
    scanf("%d",&a.min);
    printf("Enter the hour: ");
    scanf("%d",&a.hour);

    printf("For second time zone\n");
    printf("Enter the seconds: ");
    scanf("%d",&b.sec);
    printf("Enter the minutes: ");
    scanf("%d",&b.min);
    printf("Enter the hour: ");
    scanf("%d",&b.hour);

    time res;
    res=diff(a,b);

    printf("After difference\n");
    printf("Hour: %d \n",res.hour);
    printf("Minutes: %d \n",res.min);
    printf("Seconds: %d \n",res.sec);

    }


