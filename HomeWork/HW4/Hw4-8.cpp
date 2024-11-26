#include <stdio.h>
#include <stdlib.h>

void printBinary( int num ) ;//Prototype

int main() {
    char basesixteen [20] ;
    int baseten ;
    printf( "User input:\n" ) ;
    scanf( "%s", basesixteen ) ;
    baseten = strtol( basesixteen, NULL, 16 ) ; // แปลงเลขฐาน 16 เป็นฐาน 10
    printBinary( baseten ) ;
    return 0 ;
}//end function

void printBinary( int num ) { // แปลงฐาน 10 เป็นฐาน 2 
    if( num > 1 ) {
        printBinary( num / 2 ) ;
    }//end if
    printf( "%d", num % 2 ) ; //แสดงเลขฐาน 2
}//end fuction