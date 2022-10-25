// include pre-processor directive
#include "headers/AssignmentA.h"

/* write function for question 1 */
void genAdditionTables(int n){
    int i = 0;
    do
    {
        i++;
        int j = 0;
        do
        {
            j++;
            printf("%d + %d = %d\n", i, j, i+j);
        } while (condition1(j, n));
        printf("\n");
    } while (condition1(i, n));
    
}
/* write function for question 2 */
void genAdditionTablesReference(int *nPtr){
        int i = 0;
    do
    {
        i++;
        int j = 0;
        do
        {
            j++;
            printf("%d + %d = %d\n", i, j, i+j);
        } while (condition1(j, *nPtr));
        printf("\n");
    } while (condition1(i, *nPtr));
    
}