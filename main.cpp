/*
This program uses printf to send Hello World to the Screen
*/


#include "mbed.h"

// main() runs in its own thread in the OS
int main()
{
   printf("Hello World\n");              // the  \n  puts cursor on Next Line
   for(;;);                              // must stop program from going past last } 
}

