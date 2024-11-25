#include <stdio.h>
int main() {
    int day, sec ;
    printf( "Input Days :\n" ) ;
    scanf( "%d", &day ) ;
    sec = day * 86400 ;
    printf( "%d day = %d seconds", day, sec ) ;
    return 0 ;
}//end function