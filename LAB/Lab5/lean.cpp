// #include <stdio.h>
// #include <string.h>

// struct studentNode {
// 	char name[ 20 ] ;
// 	int age ;
// 	char sex ;
// 	float gpa ;
// 	struct studentNode *next ;
// } ;

// void ShowAll( struct studentNode *walk ) ;
// struct studentNode *AddNode( struct studentNode **walk, char *name, int age, char sex, float gpa ) ;
// void InsNode( struct studentNode *walk, char *name, int age, char sex, float gpa ) ;
// void DelNode( struct studentNode **walk ) ;

// int main() {
	
// 	struct studentNode *start, *now ;
// 	start = NULL ;
// 	now = AddNode( &start, "one", 6, 'M', 3.11 ) ; ShowAll( start ) ;
// 	now = AddNode( &start, "two", 8, 'F', 3.22 ) ; ShowAll( start ) ;
// 	InsNode( now, "three", 10, 'M', 3.33 ) ; ShowAll( start ) ;
// 	InsNode( now, "four", 12, 'F', 3.44 ) ; ShowAll( start ) ;
// 	DelNode( &now ) ; ShowAll( start ) ;
// 	return 0 ;
	
// }//end function

// void ShowAll( struct studentNode *walk ) {
	
// 	while( walk != NULL ) {
// 		printf( "%s ", walk->name ) ;
// 		walk = walk->next ;
// 	}//end while
	
// 	printf( "\n" ) ;
	
// }//end function

// struct studentNode *AddNode( struct studentNode **walk, char *name, int age, char sex, float gpa ) {
	
// 	while( *walk != NULL ) {
// 		walk = &(*walk)->next ;
// 	}//end while
	
// 	*walk = new struct studentNode ;
// 	strcpy((*walk)->name, name);
//     (*walk)->age = age;
//     (*walk)->sex = sex;
//     (*walk)->gpa = gpa;
//     (*walk)->next = NULL;
	
// 	return *walk ;
	
// }//end struct studentNode *AddNode function

// void InsNode( struct studentNode *walk, char *name, int age, char sex, float gpa ) {
      
//     struct studentNode *newNode = new struct studentNode ;
//     strcpy( newNode->name, name ) ;
//     newNode->age = age ;
//     newNode->sex = sex ;
//     newNode->gpa = gpa ;
//     newNode->next = walk->next ;
//     walk->next = newNode ;
    
// }//end InsNode function

// void DelNode( struct studentNode **walk ) {
	
//     struct studentNode *temp = (*walk)->next ;
    
//     if ( temp != NULL ) {
//         (*walk)->next = temp->next ;
//         delete temp ;
//     }//end if
    
// }//end DelNode function









// **********************************************************************************




#include <stdio.h>
#include <string.h>

struct studentNode {
  char name[20];
  int age;
  char sex;
  float gpa;
  struct studentNode *next;
};

void InsNode(struct studentNode **preNode, char n[], int a, char s,float g); // prototype
void GoNext(struct studentNode ***ptr);     // prototype
void DelNode(struct studentNode **preNode); // prototype
void ShowAll(struct studentNode **walk);    // prototype

int main() {
  struct studentNode *start, **now;
  start = NULL;
  now = &start;
  InsNode(now, "one", 6, 'M', 3.11);
  ShowAll(&start);
  InsNode(now, "two", 8, 'F', 3.22);
  ShowAll(&start);
  GoNext(&now);
  InsNode(now, "three", 10, 'M', 3.33);
  ShowAll(&start);
  InsNode(now, "four", 12, 'F', 3.44);
  ShowAll(&start);
  GoNext(&now);
  DelNode(now);
  ShowAll(&start);
  return 0;
} // end function

void ShowAll(struct studentNode **walk) {
  while (*walk != NULL) {
    printf("%s ", (*walk)->name);
    walk = &(*walk)->next;
  } // end while
  printf("\n");
} // end function

void InsNode(struct studentNode **nowNode, char n[], int a, char s, float g) {
  struct studentNode *newNode = new studentNode;
  strcpy(newNode->name, n);
  newNode->age = a;
  newNode->sex = s;
  newNode->gpa = g;
  newNode->next = NULL;
  if (*nowNode == NULL) {
    *nowNode = newNode;
  } else {
    newNode->next = *nowNode;
    *nowNode = newNode;
  }
} // end function

void DelNode(struct studentNode **nowNode) {
  struct studentNode *delNode = (*nowNode)->next;
  (*nowNode)->next = delNode->next;
} // end function

void GoNext(struct studentNode ***preNode) {
  **preNode = (*(*preNode))->next;
} // end function