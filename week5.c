#include <stdio.h>
int main(){
    int x = 100; //10 number %d
    int q = 0144; //ox number %o
    int w = 0x64; //16 %h
    // printf("x = %d\n" , x);
    // printf("reference of x = %lu\n" , &x); //&x ส่งreference ของx
    // printf("reference of x = %p\n", &x); //%p ฐาน 16 //00 0x

    // int number[] = {1 ,2 , 3, 4 ,5 ,6}; //6
    // int number[100]; //100
    // int number[100] = {1,2,3,4,5,6}; //100
    // number[1000] = 200;
    // printf("index 1 = %d" , number[1]);
    // printf("reference of &number[1] = %p\n", &number[1]); //pointer เก็บ address
    // printf("reference of &number[0] = %p\n", &number[0]);   
    // printf("reference of number = %p\n", &number + 1);  //เก็บ address index[0] 
    // printf("reference of number = %p\n", &number + 1);  //+ ขนาดที่เก็บตัวแปร การบวกaddress
    // printf("index 1 = %d" , number[1000]); //access index[1000] เก็บค่า 0 ไว้ นี่คือaddress number[1000]

    // int number[] = {1 ,2 , 3, 4 ,5 ,6};
    // int *ptr = &x;  //ชี้ address assign address to pointer //ประกาศต้องมี*
    // int *arrPtr;
    // arrPtr = number; //เรียกตัวแปรไม่ต้องมี*
    // arrPtr += 3; //เก็บค่า0c +ตำแหน่งขนาดที่เก็บตัวแปรไปเรื่อยๆ
    // *arrPtr += 3; //address 0c ค่า 4 แล้ว+3 = 7 assign กลับที่ตำแหน่ง 0c
    // printf("arrPtr = %p , *arrPtr = %d" , arrPtr , *arrPtr);

    // int number[] = {1 ,2 , 3, 4 ,5 ,6};
    // for (int *ptr = number; ptr < &number[4]; ptr++)
    // {
    //     printf("[%p] = %d\n" , ptr , *ptr);
    // }
    // printf("\n");
    // int *ptr2 = number;
    // for(int i = 0; i< 5; i++){
    //     printf("[%p] = %d\n" , ptr2 + i , *(ptr2 + i)); //work unary before binary
    // }
    
    // char input[100];
    // int count = 0;
    // char c;
    // while ((c = getchar()) != '\n') //ปิด\0เอง char arr
    // {
    //     input[count] = c;
    //     ++count;
    // }
    // input[count] = '\0';
    // for (char *cPtr = input; *cPtr != '\0' ;cPtr++)
    // {
    //     printf("%c\n" , *cPtr);
    // }

    char s[100];
    int i;
    char c;
    scanf("%d=%c=%s", &i, &c, s); //รับpointer ส่งaddress //array ไม่ต้องมี&
    printf("%d--%c--%s", i, c, s);
    
}

/*
เลขฐาน2 เลขฐาน8 เลขฐาน16 เลขฐาน10
การ pass by reference // pass by value
การใช้ pointer
*/