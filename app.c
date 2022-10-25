#include <stdio.h>
#include <stdlib.h>
// include header file
#include "./headers/BasicIO.h"
#include "./headers/Decisions.h"
#include "./headers/Loops.h"
#include "./headers/Pointers.h"
#include "./headers/PassByReference.h"
#include "./headers/AssignmentA.h"

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
    //testing Pointers functionality
    // printAddress();
    // printf("The global variable i stores its value at %p\n", getAddress());
    // printf("The global static variable i stores %d\n", getDataAtAddress());
    // printf("The global static variable j now stores %.2f\n", storeDataAddress());
    // printf("THw size of the value in the global static variable j is %d\n", getDoubleBytes());
    // printf("THw size of the pointer to the global static variable j is %d\n", getPointerToDoubleBytes());
    // pointerToNull();
    // testing Pass By Reference functionality
    // declare doubles for (x, y) point
    double x = 3.0;
    double y = 4.0;

    // declare double for (radiusPtr, thetaPtr)
    double radiusPtr;
    double thetaPtr;

    // call cartesianToPolar
    // must use & to access an address of a variable
    // cartesianToPolar(x, y, &radiusPtr, &thetaPtr);
    // printf("(%.2f, %.2f) equals (%.2f, %.2f)", x, y, radiusPtr, thetaPtr);

    // Assignment 2A
    int n = 5;
    int *ptr = &n;
    // genAdditionTables(n);
    genAdditionTablesReference(ptr);
}
