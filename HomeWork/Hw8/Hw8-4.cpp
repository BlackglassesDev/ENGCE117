#include <stdio.h>

int main () {
    int num = 0, i = 0, total = 1, base ;
    printf( "Enter Number: " ) ;
    scanf( "%d", &num ) ;
    base = num ;
    printf( "%d! = ", num ) ;
    while( i < num ) {
        printf( "%d", num ) ;
        if( i < num - 1 ) {
            printf( " x " ) ;
        }//end if
        total *= num ;
        num-- ;
    }//end while
    printf( "\n%d! = %d",base, total ) ;
    return 0 ;
}//end function