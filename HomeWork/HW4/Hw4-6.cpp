#include <stdio.h>
int main() {
    char empID[10] ;
    int hr, salary ;
    float total ;
    printf( "Input the Employees ID(Max. 10 chars):\n" ) ;
    scanf( "%s", empID ) ;
    printf( "Input the working hrs: \n" ) ;
    scanf( "%d", &hr ) ;
    printf( "Salary amount/hr: \n" ) ;
    scanf( "%d", &salary ) ;
    total = hr * salary ;
    printf( "Expected Output:\n" ) ;
    printf( "Employees ID = %s\n", empID ) ;
    printf( "Salary = U$ %.2f", total ) ;
    return 0 ;
} // end function