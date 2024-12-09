#include <stdio.h>

int main() {
    char ans, sole, chackwater, money, gass, sod ;
    printf( "find raw material\n" ) ;   //หาวัตถุดิบ
    printf( "You have material? (y/n) : " ) ;   //มีวัตถุดิบหรือไม่
    scanf( " %c", &ans ) ;
    if( ans == 'n' ) {
        printf( "go to the shop\n" ) ;  //ไปที่ร้านค้า
        printf( "the shop soleout? (y/n): " ) ;  //ที่ร้านของหมดหรือไม่
        scanf( " %c", &sole ) ;
        if( sole == 'y' ) {
            printf( "go to next shop" ) ;   //ไปร้านต่อๆไป
        }//end if
        else {
            printf( "Is there enough money? (y/n): " ) ;    //เงินพอหรือไม่
            scanf( " %c", &money ) ;
            if( money == 'y' ) {
                printf( "buy and go to home" ) ;    //ซื้อแล้วกลับมาบ้าน
            }//end if
            else {
                printf( "come back and get the money" ) ;   //กลับมาเอาเงิน
            }//end else
        }
    }//end if
    else {
        printf( "Turn on the stove and put the pot of water in and wait for 3 minutes.\n" ) ;  //เปิดเตาตั้งหม้อใส่น้ำรอ 3 นาที
        printf( "Is the water boiling yet? (y/n): " ) ;    //น้ำเดือดหรือยัง
        scanf( "  %c", &chackwater ) ;
        if( chackwater == 'y' ) {
            printf( "Put the instant noodles into the pot and boil for 2 minutes.\n" ) ;   //ใส่มาม่าลงไปในหม้อต้มรอ 2 นาที
            printf( "When the noodles are cooked, place them in a bowl.\n" ) ;    //เส้นสุกแล้วเอาใส่ถ้วย
            printf( "Add seasonings. Are there any seasonings? (y/n): " ) ;  //ใส่เครื่องปรุงมีเครื่องปรุงไหม
            scanf( " %c", &sod ) ;
            if( sod == 'y' ) {
                printf( "Just tear it up.\n" ) ; //ฉีกใส่เลย
                printf( "When you're done, take it to your brother.\n" ) ;  //เสร็จแล้วเอาไปให้พี่
            }//end if
            else {
                printf( "Tell me to cook or cook it yourself." ) ;    //บอกพี่ให้ปรุงหรือปรุงเอง
                printf( "When you're done, take it to your brother.\n" ) ;  //เสร็จแล้วเอาไปให้พี่
            }//end else
        }//end if
        else {
            printf( "Check if the gas is empty. (y/n): " ) ;    //เช็คแก๊สว่าหมดหรือไม่
            scanf( " %c", &gass ) ;
            if( gass == 'y' ){
                printf( "Tell the people in the house that the gas is out.\n" ) ;  //บอกคนในบ้านว่าแก๊สหมด
            }//end if
            else {
                printf( "Turn up the heat a bit and wait for the water to boil.\n" ) ;   //เร่งไฟนิดหน่อยแล้วรอน้ำเดือด
            }//end else
        }//end if
    }//end else 
}//end function