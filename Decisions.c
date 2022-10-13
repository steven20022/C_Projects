// include header file
#include "./headers/Decisions.h"

// write code for the functions
// defined in the header file

// this function will use the comparison operators, 
// and the is, if-else, if-else-if statements
void decisions1(void) {
    // declare a variable of type float
    // intiialize it using constant defined in header file
    float num = NUM;

    // use if statement
    if (num < 40000.0)
    {
        printf("Num (%.2f) is less than 40000.0.\n", num); // displayed
    }

    num += num;

    //use if-else statement
    if (num < 40000.0)
    {
        printf("Num (%.2f) is less than 40000.0.\n", num); // not displayed
    }
    else
    {
        printf("Num (%.2f) is not less than 40000.0.\n", num); // displayed
    }
    
    num = 0.0;
    
    // use if-else-if-else
    if (num == 0.0)
    {
        printf("Num (%.2f) is equal to 0.0.\n", num); // displayed
    }
    else if (num < 40000.0)
    {
        printf("Num (%.2f) is less than 40000.0.\n", num); // not displayed
    }
    else
    {
        printf("Num (%.2f) is not less than 40000.0.\n", num); // not displayed
    }
    
}

/* this functio will use the logical operators (&&, ||, !)*/
void decisions2() {
    // declare a variable of type float
    // intiialize it using constant defined in header file
    float num = NUM;

    // use logical AND operator
    // both conditions must be true
    if (num > 0.0 && num < 40000.0)
    {
        printf("Num (%.2f) is between 0.0 and 40000.0\n", num); // displayed
    }
    
    // use the logical OR operator
    // only one conditions must be true
    if (num > 0.0 || num < 40000.0)
    {
        printf("Num (%.2f) is greater than 0.0 or less than 40000.0\n", num); // displayed
    }

    // use the logical NOT operator
    // it inverses the bool value
    if (!(num > 0.0 && num < 40000.0))
    {
        printf("Num (%.2f) is not between 0.0 and 40000.0\n", num); // not displayed
    }
}
/* This function will use a bool variable */
void decisions3(){
    // declare a variable of type float
    // intiialize it using constant defined in header file
    float num = NUM;

    // declare a variable of type bool and initialize it
    bool isNotBetween = !(num > 0.0 && num < 40000.0); // false

    // use bool variable in an if-else statement
    if (isNotBetween)
    {
        printf("Num (%.2f) is not between 0.0 and 40000.0.\n", num); // not displayed
    } else {
        printf("Num (%.2f) is between 0.0 and 40000.0.\n", num); // displayed
    }
    
}

/* this function will use the ternary operator */
void decisions4(){
    // declare a variable of type float
    // intiialize it using constant defined in header file
    float num = NUM;

    // declare a variable of type bool and initialize it
    bool isNotBetween = !(num > 0.0 && num < 40000.0); // false

    // declare a variable of type float and initialize it
    // using the ternary operator
    // the ternary operator is the only operator that has
    // three operands
    float extra = isNotBetween ? (num - 40000.0) : 0.0; // operand 3 will be returned

    // display the value in extra
    printf("Extra is %.2f");
}

/* this function will use a switch statement */
void decisions5(){
    // declare variables
    char operation;
    int num1;
    int num2;

    // input operation
    printf("Enter operation to be performed (+, -, *, /): ");
    scanf("%c", &operation);

    // input numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // use switch statement to evaluate operation
    switch (operation)
    {
    case '+':
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
        break;
    case '/':
        printf("%d / %d = %d\n", num1, num2, num1 / num2);
        break;
    default:
        printf("Invalid operation");
        break;
    }
}

/* this function will examine short circuit evaluation - 
 * the compiler skips the evaluation of sub expressions
 * in a logical expression */
void decisions6(void){
    // decaler variables that will be used in logical expression
    int x = 1;
    bool y = true;

    // since x == 1 is true, the second expression is evaluated
    // short circut evaluation will not take place
    if (x == 1 && y)
    {
        printf("If block executed.\n"); // displayed
    } else {
        printf("Else block executed.\n");
    }

    // since x == 2 is false, the second expression is not executed
    // short circuit evaluation will take place
    if (x == 2 && y)
    {
        printf("If block executed.\n"); 
    } else {
        printf("Else block executed.\n"); // displayed
    }
    
    y = false;

    // since x != 1 is false, the second expression is evaluated
    // short circuit evaluation will not take place
    if (x != 1 || y)
    {
        printf("If block executed.\n"); 
    } else {
        printf("Else block executed.\n"); // displayed
    }

    // since x == 1 is true, the second expression is not executed
    // short circuit evaluation will take place 
    if (x == 1 || y)
    {
        printf("If block executed.\n"); // displayed
    } else {
        printf("Else block executed.\n");
    }
}