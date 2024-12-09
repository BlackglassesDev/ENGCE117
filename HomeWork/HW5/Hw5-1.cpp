#include <stdio.h>
#include <string.h>

int main() {
    char ch1[ 50 ] ;
    char ch2[ 50 ] ;
    printf( "Enter Letter: " ) ;
    gets( ch1 ) ;
    int len = strlen( ch1 ) ;
    for( int i = 0 ; i < len ; i++ ){
        ch2[ i ] = ch1[ len - i - 1 ] ;
    }
    ch2[ len ] = '\0' ;
    printf( "Result: %s", ch2 ) ;
    return 0 ;
}//end function