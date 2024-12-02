#include <stdio.h>

int *GetSet( int *nm ) ;

int main() {
    int *data, num ;
    data = GetSet( &num ) ;
    printf( "------------------------\n" ) ;
    printf( "Number of elements: %d\n", num ) ;
    for( int i = 0 ; i < num ; i++ ) {
        printf( "%d ", data[i] ) ;
    }
    return 0 ;
}//end function   

int *GetSet( int *nm ) {
    int nmarr ;
    printf( "Enter the number of elements: " ) ;
    scanf( "%d", &nmarr ) ;
    int *dt = new int[nmarr] ;
    printf( "Enter the elements: " ) ;
    for( int i = 0 ; i < nmarr ; i++ ) {
        scanf( "%d", &dt[i] ) ;
    }
    *nm = nmarr ;
    return dt ;
}

