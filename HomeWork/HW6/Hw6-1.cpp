#include <stdio.h>

int main() {
    int num ;
    printf( "Enter number round: " ) ;
    scanf( "%d", &num ) ;
    for( int i = 0 ; i < num ; i++ ) {
        if( num % 2 == 0 ) {
            printf( "(%d) Hello World\n", i + 1 ) ;
        }//end if
        else {
            printf( "[%d] Hello World\n", i + 1 ) ;
        }//end else
    }//end for
    return 0 ;
}//end function