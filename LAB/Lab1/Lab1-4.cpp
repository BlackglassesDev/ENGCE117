#include <stdio.h>

int GetSet( int dt[] ) ;

int main() {
   int *data, num ;
   data = new int[10] ;
    num = GetSet( data ) ;
    printf( "------------------------\n" ) ;
    printf( "Number of elements: %d\n", num ) ;
    for( int i = 0 ; i < num ; i++ ) {
        printf( "%d ", data[i] ) ;
    }
    return 0 ;
}//end function

int GetSet( int dt[] ) {
    int num ;
    printf( "Enter the number of elements: " ) ;
    scanf( "%d", &num ) ;
    printf( "Enter the elements: " ) ;
    for( int i = 0 ; i < num ; i++ ) {
        scanf( "%d", &dt[i] );
    }
    return num ;
}