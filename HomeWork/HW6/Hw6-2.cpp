#include <stdio.h>

int main() {
    int num ;
    int values[ 13 ] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 } ;
    const char *symbols[ 13 ] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" } ; // arr 13เก็บสตริง 13 ตัว แต่* เก็บค่าแอดเดรสที่อยู่ในสตริงอีกที
    printf( "Enter Number: " ) ;
    scanf( "%d", &num ) ;
    for ( int i = 0 ; i < 13 ; i++ ) {
        for ( ; num >= values[ i ] ; num -= values[ i ] ) {
            printf( "%s", symbols[ i ] ) ;
        }//end for
    }//end for
    printf( "\n" ) ;
    return 0 ;
}//end function
