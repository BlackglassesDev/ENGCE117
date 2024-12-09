#include <stdio.h>

int main() {
    int celdeg ;
    float fahdeg ;
    printf( "User input : " ) ;
    scanf( "%d", &celdeg ) ;
    fahdeg = ( celdeg * 9.0 / 5.0 ) + 32 ;
    printf( "%d degree Celsius = %.1f degree Fahrenheit", celdeg, fahdeg ) ;
    return  0 ;
}//end function