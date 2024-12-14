#include <stdio.h>

int main() {
    int score = 0 ;
    printf( "Enter Score:\n" ) ;
    scanf( "%d", &score ) ;
    for( ; score >= 80 ; ) {
        printf( "A !" ) ;
        break;
    }//end for
    for( ; score >= 75 && score < 80 ; ) {
        printf( "B+ !" ) ;
        break;
    }//end for
    for( ; score >= 70 && score < 75 ; ) {
        printf( "B !" ) ;
        break;
    }//end for
    for( ; score >= 65 && score < 70 ; ) {
        printf( "C+ !" ) ;
        break;
    }//end for
    for( ; score >= 60 && score < 65 ; ) {
        printf( "C !" ) ;
        break;
    }//end for
    for( ; score >= 55 && score < 60 ; ) {
        printf( "D+ !" ) ;
        break;
    }//end for
    for( ; score >= 50 && score < 55 ; ) {
        printf( "D !" ) ;
        break;
    }//end for
    for( ; score < 50 ; ) {
        printf( "F !" ) ;
        break;
    }//end for
    return 0 ;
}//end function