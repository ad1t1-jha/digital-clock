#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <conio.h>

int main()
{
    int hour, minute, second;
    hour = 0;
    minute = 0;
    second = 0;
    char type [50];
    char timer [20];
    char timenow [20];
    printf("Enter one of the following: timer, current time");
    fgets(type, 50, stdin);

    if(strcmp(type, timer) == 0){
        while(1){
        system("cls");
        printf("%02d : %02d : %02d", hour, minute, second);
        fflush(stdout);
        second ++;

        if(second == 60){
            minute+=1;
            second=0;
        }
        if(minute == 60){
            hour+=1;
            minute =0;
        }
        if(hour == 24){
            hour=0;
            minute=0;
            second=0;
        }
        sleep(1);
    }
    } else{
        time_t s,val = 1;
        struct tm* current_time;
        s = time(NULL);
        current_time = localtime(&s);
        printf("%02d : %02d : %02d", current_time->tm_hour, current_time->tm_min, current_time->tm_sec);
    }


    return 0;
}
