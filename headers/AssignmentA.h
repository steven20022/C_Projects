// include pre-processor directive
#include <stdio.h>

// define MACRO expression to determine if
// the loops should repeat
#define condition1(i, n) (i != n)

// declare functions
void genAdditionTables(int n);
void genAdditionTablesReference(int * n);