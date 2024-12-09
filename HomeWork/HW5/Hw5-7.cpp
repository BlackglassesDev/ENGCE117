#include <stdio.h>

int main() {
    int year ;
    printf( "Year(s) : " ) ;
    scanf( "%d", &year ) ;
    if( year % 4 == 1 ) {
        printf( "February has 28 days" ) ;
    }//end if
    else if( year % 4 == 0 && year % 100 == 0 && year % 400 == 1 ) {
        printf( "February has 28 days" ) ;
    }//end else if
    else if( year % 4 == 0 && year % 100 == 1 ) {
        printf( "February has 29 days" ) ;
    }//end else if
    else {
        printf( "February has 29 days" ) ;
    }//end else
    return 0 ;
}//end function