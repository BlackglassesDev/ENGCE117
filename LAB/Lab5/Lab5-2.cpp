#include <stdio.h>
#include <string.h>

struct studentNode {
    char name[20] ;
    int age ;
    char sex ;
    float gpa ;
    struct studentNode *next ;
} ;

void ShowAll( struct studentNode **walk ) ;
void InsNode( struct studentNode **walk, char n[], int a, char s, float g ) ;
void DelNode( struct studentNode **walk ) ;
void GoNext( struct studentNode ***walk ) ;

int main() {
    struct studentNode *start, **now ;
    start = NULL ; now = &start ;
    InsNode( now, "one", 6, 'M', 3.11 ) ; ShowAll( &start ) ;
    InsNode( now, "two", 8, 'F', 3.22 ) ; ShowAll( &start ) ;
    GoNext( &now ) ;
    InsNode( now, "three", 10, 'M', 3.33 ) ; ShowAll( &start ) ;
    InsNode( now, "four", 12, 'F', 3.44 ) ; ShowAll( &start ) ;
    GoNext( &now ) ;
    DelNode( now ) ; ShowAll( &start ) ;
    return 0 ;
}//end function

void ShowAll( struct studentNode **walk ) {
    while( *walk != NULL ) {
        printf( "%s ", (*walk)->name ) ;
        walk = &(*walk)->next ;
    }//end while
    printf( "\n" ) ;
}//end function

void InsNode( struct studentNode **walk, char n[], int a, char s, float g ) {
    struct studentNode *NewNode = new studentNode ;
    strcpy(NewNode->name, n) ;
    NewNode->age = a ;
    NewNode->sex = s ;
    NewNode->gpa = g ;
    NewNode->next = NULL ;
    if(*walk == NULL) {
        *walk = NewNode ;
    }//end if
    else {
        NewNode->next = *walk ;
        *walk = NewNode ;
    }//end else
}//end function

void GoNext( struct studentNode ***walk ) {
    *walk = &( **walk )->next ;
}//end function

void DelNode( struct studentNode **walk ) {
    struct studentNode *temp ;
    temp = *walk ;
    temp->next = ( *walk )->next ;
    *walk = temp->next ;
}//end function