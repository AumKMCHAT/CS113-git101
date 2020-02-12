#include <stdio.h> //<name.h> see method <name.c> see fucntion 
//int x ; >> x =0
int addTen(int x){ //write a function #function prototype# have return นิยามfunction //fisrt alphabet have to be ตัวพิมพ์เล็ก //type , name = การประกาศตัวแปร
    x += 10;
    return x;
}

int addTwenty(); //นิยามfucntion //ไม่มีการประกาศตัวแปร ทำเสร็จจะไปเปลี่ยนค่าในglobal
int x = 2000;
int main(){
    //int x; >> x = 982934839 ต้องกำหนดค่าเริ่มต้นให้ตัวแปรlocalเสมอ
    int x = 90; //local scope
    int y = addTen(x);
    printf("addTen in main = %d\n" , y);
    printf("addTwenty in main = %d\n" , addTwenty());
}

int addTwenty(){ //global จะหาจากที่เรียกใช้ขึ้นไป
    x += 20;
    return x;
}
/*
5 = 0101
5 >> 2 => 01
5 << 2 => 010100
5 & 1 => 0101 & 0001
*/

/*
การนิยามฟังก์ชัน
*/