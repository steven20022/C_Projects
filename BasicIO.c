// include header file
#include "./headers/BasicIO.h"

// write the code for the functions declared
// in the header file

// this function will use printf and puts
// to outpurt data to the stdout (terminal)
void output(void){
    // printf formats and outputs a series
    // of characters and values to stdout.
    // it does not append a new line character
    // to the end of its output
    printf("Your first name is %s\n", FIRST_NAME);
    printf("Your last name is %s\n", LAST_NAME);
    printf("Your weight is %f and your age is %d\n", WEIGHT, AGE);

    // puts outputs a string (char *) to stdout.
    // it does append a new line character to the
    // end of its output.
    puts(FIRST_NAME);
    puts(LAST_NAME);
}

// this function will use scanf tp
// input data from stdin (keyboard)
void input(void){
    // declare variables to store input data
    int age;
    float weight;
    char name[] = "";

    // input an integer
    printf("Enter your age: ");
    // scanf reads the value from stdin per
    // the type specified in the format specifier
    // and stores it in the address of the
    // spcified variable
    scanf("%d", &age);
    printf("Entered age is: %d\n", age);

    // input a float
    printf("Enter you weight: ");
    scanf("%f", &weight);
    printf("Entered weight is: %f\n", weight);

    // input string (char *)
    printf("Enter you name: ");
    scanf("%s", &name);
    printf("Entered name is: %s\n", name);
}