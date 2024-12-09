#include <stdio.h>
#include <string.h>

void GetSet( int dt[], int *nm ) ;

int main() {
    int *data, num ;
    data = new int[num] ;
    GetSet( data, &num ) ;
    printf( "------------------------\n" ) ;
    printf( "Number of elements: %d \n", num ) ;
    for( int i = 0 ; i < num ; i++ ) {
        printf( "%d ", data[i] ) ;
    }//end for
    return 0 ;
}//end function

void GetSet( int dt[], int *nm ) {
    printf( "Enter number: ") ;
    scanf( "%d", nm ) ;
    printf( "Enter Number Eletment: " ) ;
    for( int i = 0 ; i < *nm ; i++ ) {
        scanf( "%d", &dt[i] ) ;
    }//end for
}//end function Getset