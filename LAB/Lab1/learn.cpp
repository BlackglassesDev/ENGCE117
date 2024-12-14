// #include <stdio.h>
// #include <string.h>

// void GetSet(int data[], int *num);

// int main(){
//     int *data;
//     int num;
//     data = new int[10];
//     GetSet(data, &num);
//     printf("Number of elements: %d\n", num);

//     for (int i = 0; i < num; i++){
//         printf("%d ", data[i]);
//     }// end for
//     printf("\n");

//     return 0;
// } // end main

// void GetSet(int data[], int *num){
//     printf("Enter the number of elements: ");
//     scanf("%d", num);

//     printf("Enter the elements: ");
//     for (int i = 0; i < *num; i++){
//         scanf("%d", &data[i]);
//     }
// } // end GetSet



//////////////////////////////////////////////////////////////////////////////////////////////




// #include <stdio.h>

// void GetMatrix(int value[], int *row, int *col);

// int main() {
//     int data[100]; // ขนาดของอาเรย์ที่กำหนดไว้ล่วงหน้า
//     int m, n;

//     // เรียกใช้งานฟังก์ชัน GetMatrix
//     GetMatrix(data, &m, &n);

//     // แสดงผลเมทริกซ์
//     printf("Matrix (%dx%d):\n", m, n);
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             printf("%d ", data[i * n + j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// // ฟังก์ชัน GetMatrix รับจำนวนแถว คอลัมน์ และค่าของสมาชิกในเมทริกซ์
// void GetMatrix(int value[], int *row, int *col) {
//     // รับจำนวนแถวและคอลัมน์จากผู้ใช้
//     printf("Enter the number of rows: ");
//     scanf("%d", row);
//     printf("Enter the number of columns: ");
//     scanf("%d", col);

//     // รับค่าของเมทริกซ์
//     printf("Enter the matrix elements: ");
//     for (int i = 0; i < (*row) * (*col); i++) {
//         scanf("%d", &value[i]);
//     }
// }



/////////////////////////////////////////////////////////////////////////


// #include <stdio.h>

// void GetMatrix( int value[], int *row, int *col ) ;

// int main() {
//     int data[100], m, n ;
//     GetMatrix( data, &m, &n ) ;
//     if( m <= 0 && n <= 0 ) {
//         return 0 ;
//     }//end if
//     else if( m <= 0 || n <= 0 ) {
//         return 0 ;
//     }//end else if
//     if( data[100] != m * n ) {
//         printf( "Error: Incorrect number of elements." ) ;
//         return 0 ;
//     }
//     else{
//         printf( "Matrix (%dx%d): \n", m, n ) ;
//     for( int i = 0 ; i < m ; i++ ){
//         for( int j = 0 ; j < n ; j++ ) {
//             printf( "%d ", data[i * n + j] ) ;
//         }//end for
//         printf( "\n" ) ;
//     }//end for
//     }

    
//     return 0 ;
// }//end function

// void GetMatrix( int value[], int *row, int *col ) {
//     printf( "Enter the number of rows: " ) ;
//     scanf( "%d", row ) ;
//     printf( "Enter the number of columns: " ) ;
//     scanf( "%d", col ) ;
//     if( *row <= 0 && *col <= 0 ) {
//         printf( "Matrix:\n" ) ;
//         printf( "(empty)" ) ;
//         return ;
//     }//end if
//     else if( *row <= 0 || *col <= 0 ) {
//         printf( "Error: Invalid matrix dimensions." ) ;
//         return ;
//     }//end else if
//     printf( "Enter the matrix elements: " ) ;
//     for( int i = 0 ; i < *row  ; i++ ) {
//         for( int j ; j< *col ; j++ ) {
//             scanf( "%d", &value[i * ( *col ) + j] ) ;
//             char ch = getchar() ;
//             if ( ch == '\n' ) {             
//                 break ;
//             }
//         }
//     }//end for
// }//end function GetMatrix




///////////////////////////////////////////////////////////////////////////////




// #include <stdio.h>

// int *GetMatrix( int *row, int *col ) ;

// int main(){
//     int *data, n ,m ;
//     data = GetMatrix( &m, &n ) ;
//     printf("data = %d",data);
// }
// int *GetMatrix( int *row, int *col ){
//     int val[2] ;
//     int val ;
//     printf("test: ");
//     scanf("%d",&val);
//     val[0]= 2;
//     val[1]= 4;
//     return val;
// }
