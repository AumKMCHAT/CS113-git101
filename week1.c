#include<stdio.h>
#define bb "asdfgh" //ระวังdefineชื่อเหมือนfunction
int main(){
    // ** = unary opperator = 1 operator with 1 operan
    // printf("hello, world\n");
    long long int a = 4000000000; //int 4 byte = 32 bit = 2**32 = 4294967296 >> เก็บค่าได้ >> มากกว่านี้เกิด overflow //long = 4 byte
    unsigned int b = 400000000; //unsigned int เก็บ 0 - 4294967296 >> USE THIS!!
    // printf("%lld", a); unsigned long long เก็บได้มากสุด
    // printf("%u", b);

    char c = 'a';
    char d = 97;
    // printf("%c %d %c %d" , d , d , c ,c);

    float f = 0.1245;
    double e = 20.18888;
    // printf("%f %lf" , f , e);


    float j;
    // printf("%f" , j+1000); // ต้องกำหนดค่าตัวแปรก่อนใช้งานเสมอ

    char p[] = "ABC"; //char array
    printf("%10s" , p); //ชิดขวา    %10s >> ชิดซ้าย

    // char r[0]; //complier กำหนดrเป็นemply string

    char r = '\0'; // emply string

}

/*
สัปดาห์นี้เรียนเกี่ยวกับการประกาศตัวแปร
การdeclare define
ภาษา C เก็บ ค่าchar เป็นตัวเลขแล้วไปเทียบตาราง ascii
หลักในการปริ้น
การใช้สตริงคล่าวๆ เป็น character array
*/