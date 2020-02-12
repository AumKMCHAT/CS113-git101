#include <stdio.h>

// void addTen(int arr[][n]], int n) //มิติสุดท้ายต้องบอกขนาดเสมอ
void addTen(int *arr, int n){
    for(int i = 0; i< n; i++){
        // printf("[%d] = %d" , i, arr[i]);
        printf("addTen [%p] = %d\n" , arr + i, *(arr + i));
        *(arr + i) += 10;
    }
}

int addTwenty(int *n){
    *n += 20;
    return 1; //check ว่า ทำงานจบมั้ย
}

int main(){
    int number[] = {1,2,3,4,5};
    int n = 5;
    addTen(&number[0], n); //ส่งด้วยaddress รับด้วยpointer = pass by reference
    for (int i = 0; i < n; i++)
    {
        // printf("[%d] = %d" , i, arr[i]);
        printf("main [%p] = %d\n" , number + i, *(number + i));
    }
    addTwenty(&n);
    addTwenty(&number[4]);
    printf("n = %d\n", n);
    printf("number[4] = %d", number[4]);
}

/*
array 2 มิติ
*/