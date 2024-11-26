#include <stdio.h>
int main() {
    int num1, num2, num3 ;
    printf( "Input[1] :\n" ) ;
    scanf( "%d", &num1 ) ;
    printf( "Input[2] :\n" ) ;
    scanf( "%d", &num2 ) ;
    printf( "Input[3] :\n" ) ;
    scanf( "%d", &num3 ) ;
    printf( "Output: \n") ;
    if( num1 > num2 && num2 > num3) {
        printf( "%d %d %d", num1, num2, num3 ) ;
    }
    else if( num1 > num3 && num3 > num2 ) {
        printf( "%d %d %d", num1, num3, num2 ) ;
    }
    else if( num2 > num1 && num1 > num3 ) {
        printf( "%d %d %d", num2, num1, num3 ) ;
    }
    else if( num2 > num3 && num3 > num1 ) {
        printf( "%d %d %d", num2, num3, num1 ) ;
    }
    else if( num3 > num1 && num1 > num2 ) {
        printf( "%d %d %d", num3, num1, num2 ) ;
    }
    else {
        printf( "%d %d %d", num3, num2, num1 ) ;
    }
    return 0 ;
}