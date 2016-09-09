// Timing Code
// 
// This is a simple example of using the clock() function of <ctime>
// to measure how long a code block took to run.
//

#include <iostream>
#include <ctime>
#include <math.h>

using namespace std;

int main()
{
    
    clock_t start_clock,end_clock;
    unsigned int i = 1;
    short unsigned int j = 1;
    
    start_clock = clock();  // Timing starts here
    while ( i > 0) 
    {
         i++;
    }

    end_clock = clock();    // Timing stops here
    

    double seconds_int = (double)(end_clock-start_clock) / CLOCKS_PER_SEC;
    cout << "unsigned int time (seconds) " << seconds_int << " seconds" << endl;

   start_clock = clock();  // Timing starts here
    while ( j > 0) 
    {
         j++;
    }

    end_clock = clock();    // Timing stops here
    double seconds_short_int = (double)(end_clock-start_clock) / CLOCKS_PER_SEC;
    double microseconds = seconds_short_int*1000;
    cout << "short unsigned int (microseconds) " << microseconds << " microseconds" << endl;
    int no_of_bytes_long = sizeof(long unsigned int);
    int no_of_bytes_int  = sizeof(unsigned int);
    int diff = no_of_bytes_long - no_of_bytes_int;
    
    double mult_factor = pow(2,(diff*8));
    double years_long_int = (seconds_int*mult_factor)/(24*60*60*365);
    cout << "unsigned long int time (years) " << years_long_int << "years" << endl;
}
