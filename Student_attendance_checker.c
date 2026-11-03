#include<stdio.h>
int main()
{
    int n,Class_attended;
    float Attendance_percent;

    printf("Enter the number of classes conducted::");
    scanf("%d",&n);

    printf("Enter the number classes attended::");
    scanf("%d",&Class_attended);

    Attendance_percent = ((float)Class_attended/n)*100;

    if(Attendance_percent>=75)
    {
        printf("Eligible for Exams with %.2f %%",Attendance_percent);

    }
    else
    {
        printf("Not eligible for Exams with %.2f %%",Attendance_percent);
    }
    return 0;

}