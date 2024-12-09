#include <stdio.h>

char FirstName [50], LastName [50] ;
int main() {
    printf( "First Name: " ) ; 
    scanf( "%s", &FirstName ) ;
    printf( "Last Name: " ) ; 
    scanf( "%s", &LastName ) ;
    printf( "%s %ss TC, RMUTL, Chiang Mai, Thailand", FirstName, LastName ) ;
    return 0 ;
}//end function 