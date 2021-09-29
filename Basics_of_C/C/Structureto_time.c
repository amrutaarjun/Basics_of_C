#include <stdio.h>
struct dateAndTime
{
    int days;
    int hours;
    int minutes;
    int seconds;
};
struct dateAndTime timeUpdate(struct dateAndTime now)
{   
    now.seconds++; 
    if (now.seconds == 60) // One minute
    {
        now.seconds = 0; 
        now.minutes++; 
        if (now.minutes == 60) // One hour
        {
            now.minutes = 0;
            now.hours++; 
        }
    }


    return now; 
}


//Increments days by one when hours reaches 24
struct dateAndTime dateUpdate(struct dateAndTime now)
{
    now.days++;
    now.hours = 0; 
    return now; 
}

// Calls timeUpdate to increment time by one second
struct dateAndTime clockKeeper(struct dateAndTime now)
{
    timeUpdate(now); 

    // If hours reaches 24, increments dys by one
    if (now.hours == 24)
    {
        dateUpdate(now); 
    }

    return now; 
}

int main(void)
{
   struct dateAndTime clockKeeper(struct dateAndTime now); 
    struct dateAndTime present, future; 

    // Prompts and accepts user input
    printf("Enter a time (hh:mm:ss): "); 
    scanf("%i:%i:%i", &present.hours,
        &present.minutes, &present.seconds); 

    future = clockKeeper(present); 

    // Prints updated time
    printf("The updated time is: %.2i:%.2i:%.2i:%.2i\n", future.days, future.hours,
        future.minutes, future.seconds); 

    return 0; 
}
