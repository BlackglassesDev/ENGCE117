#include <stdio.h>
#include <string.h>

void reverse( char str1[], char str2[] ) ;

int main() {
    char text[ 50 ] ;
    char out[ 50 ] ;
    reverse( text, out ) ;
    printf( "%s", out ) ;
    return 0 ;
}//end function

void reverse( char str1[], char str2[] ) {
    printf( "Input Your Massage: " ) ;
    gets( str1 ) ;
    int len = strlen( str1 ) ;
    for( int i = 0 ; i < len ; i++ ) {
        str2[ i ] = str1[ len - i - 1 ] ;
    }
    str2[ len ] = '\0' ;
}