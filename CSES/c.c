#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} * NODE;
void display(NODE first)
{
    if (first == NULL)
    {
        printf("List is empty\n");
        return;
    }
    while (first != NULL)
    {
        printf("%d\t", first->data);
        first = first->next;
    }
}
NODE insert_front(NODE first, int data)
{
    NODE n1;
    n1 = (NODE)malloc(sizeof(struct node));
    if (n1 == NULL)
    {
        printf("Out of memory\n");
        exit(0);
    }
    n1->data = data;
    n1->next = NULL;
    if (first == NULL)
        return n1;
    n1->next = first;
    return n1;
}
NODE insert_Rear(NODE first, int element)
{
    NODE n1, f;
    n1 = (NODE)malloc(sizeof(struct node));
    if (n1 == NULL)
    {
        printf("Out of memory\n");
        exit(0);
    }
    n1->data = element;
    n1->next = NULL;
    if (first == NULL)
        return n1;
    f = first;
    while (first->next != NULL)
        first = first->next;
    first->next = n1;
    return f;
}

NODE delete_front(NODE first)
{
    NODE temp;
    if (first == NULL)
    {
        printf("List is empty\n");
        return NULL;
    }
    temp = first->next;
    printf("The element deleted is %d\n", first->data);
    free(first);
    return temp;
}
NODE delete_rear(NODE first)
{
    NODE temp, prev = NULL;
    if (first == NULL)
    {
        printf("List is empty\n");
        return NULL;
    }
    temp = first;
    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    if (prev == NULL)
    {
        printf("The element deleted is%d\n", first->data);
        free(first);
        return NULL;
    }
    printf("The element deleted is %d\n", temp->data);
    prev->next = NULL;
    free(temp);
    return first;
}
int main()
{
    NODE first = NULL;
    int choice, element;
    do
    {
printf("\n1.Insert_Front\n2.Insert_Rear\n
3.Delete_Front\n4.Delete_Rear\n5.display\n6.exit\n  ");
printf("Enter the option\n");
scanf("%d",&choice);
switch(choice){
        case 1:
            printf("Enter the element to be inserted\n");
            scanf(" %d", &element);
            first = insert_front(first, element);
            break;
        case 2:
            printf("Enter the element to be inserted\n");
            scanf("%d", &element);
            first = insert_Rear(first, element);
            break;
        case 3:
            first = delete_front(first);
            break;
        case 4:
            first = delete_rear(first);
            break;
        case 5:
            printf("The elements of the list are\n");
            display(first);
            break;}
    } while (choice <= 5);
}
