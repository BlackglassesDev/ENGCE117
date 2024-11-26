#include <stdio.h>
int main() {
    int num ;
    printf( "Input :\n" ) ;
    scanf( "%d", &num ) ;
    if( num % 2 == 0 ) {
        printf( "%d  is an even integer", num ) ;
    }//end if
    else {
        printf( "%d  is an odd integer", num ) ;
    }//end else
    return 0 ;
}//end function