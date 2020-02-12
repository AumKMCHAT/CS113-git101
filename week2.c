#include <stdio.h>
#include <stdlib.h>
char name[20];   //char arrayกำหนด 20 ตัว
char number[5];
int main(){
    // printf("%s\n", name);
    // scanf("%s", name , &i); ห้ามใช้จนกว่าจะผ่าน lab4
    // printf("Enter name : ");
    // gets(name);
    // fgets(name , 20 , stdin); // ยืดหยุ่นกว่า gets เพราะ buffer กำหนดเอง
    // getchar(char); //buffer == 1
    // fgets(number , 5 , stdin); // กำหนดขนาด buffer เผื่อ \n \0 ไว้ด้วย
    // int i = atoi(number); //array to integer >> atoi
    // long l = atol();
    // double d = atof();
    // printf("number = %s , i = %d" , number , i); //ทำไมใส่ 123 แล้วมี \n ใส่ 12345 แล้วเก็บแค่ 1234 

    // char = getcetchar();  การกด enter ถือว่าเป็น 1 char
    // getchar();
    // chr1 = getchar();
    // fgets(number , 5 , stdin);
    // int i = atoi(number);
    // putchar(100);
    // putchar('u');

    // int found = 0; // = false != 0 >> true
    // float inExist = 0.0; // >> false
    // char isOnline = '\0'; // null charecter >> false

    // fgets(number , 5 ,stdin);
    // int i = atoi(number);

    // if (i > 0 && i < 11)
    // {
    //     printf("if = %d\n" , i > 0 && i < 11);
    // }else if (i <= 20 || !found){
    //     printf("else if\n");
    // }else{

    // }

    fgets(number , 5 ,stdin);
    int i = atoi(number);
    int count = 0;
    int j = atoi(number);
    // while (count < i){
    //     // count++ * count - 5;  // FASTER
    //     // ++count * count -5;   //ทำก่อนค่อยบวก   บวกก่อนค่อยทำ  แต่เมื่อจบจะได้ค่าเท่ากัน  ตอนประมวลผลเร็วไม่เท่ากัน
    //     // printf("count = %d\n" , count);
    //     // count++;
    // }

    for (int j = 0; j < i; j++)
    {
        printf("j = %d\n" , j);
    }
    
    while (1){

    }
}

/*
สร้าง char ต้องสร้างเผื่อตัวสุดท้าย1ตำแหน่งด้วย เพื่อเก็บ /0
การรับ input โดยใช้ fgets gets getchar
*/