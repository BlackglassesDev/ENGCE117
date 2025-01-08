#include <stdio.h>
#include <string.h>

struct studentNode {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
    struct studentNode *next ;
    struct studentNode *back ;
} ;

void ShowAll( struct studentNode *walk ) ;
struct studentNode *AddNode( struct studentNode **walk, char n[], int a, char s, float g ) ;
void InsNode( struct studentNode *walk, char n[], int a, char s, float g ) ;
void GoBack( struct studentNode **walk ) ;
void DelNode( struct studentNode *walk ) ;

int main() {
    struct studentNode *start, *now ;
    start = NULL ;
    now = AddNode( &start, "one", 6, 'M', 3.11 ) ; ShowAll( start ) ;
    now = AddNode( &start, "two", 8, 'F', 3.22 ) ; ShowAll( start ) ;
    InsNode( now, "three", 10, 'M', 3.33 ) ; ShowAll( start ) ;
    InsNode( now, "four", 12, 'F', 3.44 ) ; ShowAll( start ) ;
    GoBack( &now ) ;
    DelNode( now ) ; ShowAll( start ) ;
    printf( "\n ............... %s\n",now ) ;
    DelNode( now ) ; ShowAll( start ) ;
    printf( "\n ............... %s\n",now ) ;
    DelNode( now ) ; ShowAll( start ) ;
    printf( "\n ............... %s\n",now ) ;
    return 0 ;
}//end function

void ShowAll( struct studentNode *walk ) {
    while( walk != NULL ) {
        printf( "%s ", walk->name ) ;
        walk = walk->next ;
    }//end while
    printf( "\n" ) ;
}//end function

struct studentNode *AddNode( struct studentNode **walk, char n[], int a, char s, float g ) {
    struct studentNode *temp = NULL ;
    while( *walk != NULL ) {
        temp = *walk ;
        walk = &( *walk )->next ;
    }//end while
    *walk = new struct studentNode ;
    strcpy( ( *walk )->name, n ) ;
    ( *walk )->age = a ;
    ( *walk )->sex = s ;
    ( *walk )->gpa = g ;
    ( *walk )->next = NULL ;
    ( *walk )->back = temp ;
    return *walk ;
}//end function

void InsNode( struct studentNode *walk, char n[], int a, char s, float g ) {
    struct studentNode *NewNode = new struct studentNode ;
    strcpy( ( NewNode )->name, n ) ;
    ( NewNode )->age = a ;
    ( NewNode )->sex = s ;
    ( NewNode )->gpa = g ;
    ( NewNode )->next = NULL ;
    ( NewNode )->back = walk->back ;
    if( walk == NULL) {
        walk = NewNode ;
    }//end if
    else {
        walk->back->next = NewNode ;
        walk->back->next->next = walk ;
        walk->back = walk->back->next ;
    }//end else
}//end function

void GoBack( struct studentNode **walk ) {
    *walk = ( *walk )->back ;
}//end function

void DelNode( struct studentNode *walk ) {
    struct studentNode *temp ;
    temp = walk ;
    if( walk->next != NULL ) {
        walk->next->back = walk->back ;
        walk->back->next = walk->next ;
        temp = temp->next ;
    }//end if
    else {
        temp = walk->back ;
        walk->back->next = NULL ;
    }//end else
    *walk = *temp ;
    // delete temp ;
}//end function