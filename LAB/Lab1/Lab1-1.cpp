#include <stdio.h>
int main() {
    int round ;
    printf( "Enter round: " ) ;
    scanf( "%d", &round ) ;
    for( int i = 1 ; i <= round ; i++ ) {
        printf( "[%d] ", i ) ;
        printf( "Hello world\n" ) ;
    } //end for
    return 0 ;
} //end function