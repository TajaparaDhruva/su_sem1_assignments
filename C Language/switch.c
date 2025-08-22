#include<stdio.h>
int main (){
    int DayNum;
    scanf("%d", &DayNum);
    switch (DayNum)
    {
    case 1:printf("Monday");
    break;
    case 2:printf("Tuesday");
    break;
    case 3:printf("Wednesday");
    break;
    case 4:printf("Thursday");
break;
    case 5:printf("Friday");
    break;
    case 6:printf("Saturday");
    break;
    case 7:printf("Sonday");
    break;
    default:printf("enter correct day number");
   break;
    }
}