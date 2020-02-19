//6210402356 Kammachat Khwanyoo
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next, *previuos_node;
    
};

int main(){
    struct node *newnode, *previuos, *head, *compare;
    int input, check = 1;

    //กำหนด head
    while (1)
    {
        scanf("%d", &input);
        if (input == -1)
        {
            check = 0;
            break;
        }
        
        if(input >= 0){
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode -> data = input;
        newnode -> next = NULL; //ทำให้บล็อกต่อไปว่า เพื่อรอรับ
        newnode -> previuos_node = NULL; // head หน้าว่าง
        head = newnode;
        previuos = head;
        break;
        } 
    }
    if(check){
        while (1)
        {
            scanf("%d", &input);
            if (input == -1)
            {
                //print sort list
                while (head != NULL)
                {
                    printf("%d\n", head -> data);
                    head = head -> next;
                }
                
                break;
            }

            //เพิ่มเลขไปในlist่
            if(input >= 0){
                newnode = (struct node *)malloc(sizeof(struct node));
                newnode -> data = input;
                newnode -> next = NULL; //ทำให้บล็อกต่อไปว่าง เพื่อรอรับnewnode
                newnode -> previuos_node = previuos;
                previuos -> next = newnode;
                previuos = previuos -> next;
                compare = newnode; //รอเปรียบเทียบ

                while (compare -> previuos_node != NULL)
                {
                    int number;
                    if (compare -> data < (compare -> previuos_node)->data)
                    {
                        number = (compare->data);
                        compare -> data = (compare->previuos_node)->data;
                        (compare->previuos_node)->data = number;
                    }
                    compare = compare -> previuos_node;
                    
                }
            }
            
        }
    }
}