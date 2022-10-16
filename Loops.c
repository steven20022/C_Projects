// include pre-processor directive
#include "./headers/Loops.h"

/* this function will use a while loop */
void loops1(void){
    // declare loop counter variable and initialize it
    int i = START;

    // set up while loop
    // use marco expression as condition of while loop
    while (condition(i))
    {
        printf("%d ", i);
        i--;
    }
    printf("blastoff\n");
    
}

/* this function will use a do-while loop */
void loops2(void){
    // declare loop counter variable and initialize it
    int i = START;

    // set up do-while loop
    do {
        printf("%d ", i);
        i--;
    } while (condition(i)); // use marco expression as condition of while loop
    printf("blastoff\n");
}

/* this function uses a for loop */
void loops3(void){
    // declare loop counter variable
    int i;

    // set up for loop
    // use marco expression as condition of for loop
    for(i = START; condition(i); i--){
        printf("%d ", i);
    }
    printf("blastoff\n")
}

/* this function uses a break statement to terminat a loop */
void loops4(void){
    // declare loop counter variable
    int i;

    // set up for loop
    // use marco expression as condition of for loop
    for(i = START; condition(i); i--){
        printf("%d ", i);
        // use marco expression as condition of if statement
        if(break(i)){
            // terminate loop
            break;
        }
    }
    printf("early blastoff\n")
}

/* this function uses a continue statement to skip the current
 * iteration of a loop */
void loops5(void){
    // declare loop counter variable
    int i;

    // set up for loop
    // use marco expression as condition of for loop
    for(i = START; condition(i); i--){
        // use marco expression as condition of if statement
        if(continue(i) != 0){
            // skip current iteration of loop
            continue;
        }
        printf("%d ", i);
    }
    printf("even blastoff\n")
}