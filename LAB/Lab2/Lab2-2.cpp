#include <stdio.h>
#include <string.h>

char* reverse( char str1[]) ;

int main() {
    char text[ 50 ] ;
    char *out ;
    out = reverse( text ) ;
    printf( "%s", out ) ;
}//end function

char* reverse( char str1[]) {
    char *str2 = new char[10] ;
    printf( "Enter Your Massage: " ) ;
    fgets( str1, 50, stdin ) ;
    int len = strlen( str1 ) ;
    for( int i = 0 ; i < len ; i++ ) {
        str2[ i ] = str1[ len - i - 1 ] ;
    }//end function
    str2[ len ] = '\0' ; 
    return str2 ;
}