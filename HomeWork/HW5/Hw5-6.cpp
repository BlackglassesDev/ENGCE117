#include <stdio.h>

int main() {
    int num ;
    printf( "Input : " ) ;
    scanf( "%d", &num ) ;
    if( num < 0) {
        printf( "Negative" ) ;
    }//end if
    else {
        printf( "Positive" ) ;
    }//end else
    return 0 ;
}//end function