// C program to implement
// the above approach
#include <stdio.h>
#include <time.h>
#define SIZE 256

// Driver code
int main(void)
{
    char buffer[SIZE];
    time_t curtime;
    struct tm *loctime;

    // Get the current time.
    curtime = time(NULL);

    // Convert it to local time
    // representation.
    loctime = localtime(&curtime);

    // Print out the date and time
    // in the standard format.
    fputs(asctime(loctime), stdout);

    // Print it out
    strftime(buffer, SIZE,
             "Today is %A, %B %d.\n",
             loctime);

    fputs(buffer, stdout);
    strftime(buffer, SIZE,
             "The time is %I:%M %p.\n",
             loctime);
    fputs(buffer, stdout);
    return 0;
}