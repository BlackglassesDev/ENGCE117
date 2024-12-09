#include <stdio.h>

int main() {
    int num, i = 0 ;
    printf( "Enter number round: " ) ;
    scanf( "%d", &num ) ;
    while( i < num ) {
        if( num % 2 == 0 ) {
            printf( "(%d) Hello World\n", i + 1 ) ;
        }//end if
        else {
            printf( "[%d] Hello World\n", i + 1 ) ;
        }//end else
        i++ ;
    }//end for
    return 0 ;
}//end function