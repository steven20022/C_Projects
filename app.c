#include <stdio.h>
#include <stdlib.h>
// include header file
#include "./headers/BasicIO.h"
#include "./headers/Decisions.h"
#include "./headers/Loops.h"
#include "./headers/Pointers.h"

int main(void)
{
    // puts("Hello World!!!");
    // testing Basic IO functionality
    // output();
    // input();
    // testing Decisions functionality
    // decisions1();
    // decisions2();
    // decisions3();
    // decisions4();
    // decisions5();
    // decisions6();
    // testing Loops functionality
    // loops1();
    // loops2();
    // loops3();
    // loops4();
    // loops5();
    printAddress();
    printf("The global variable i stores its value at %p\n",getAddress());
    printf("The global static variable i stores %d\n",getDataAtAddress());
}
