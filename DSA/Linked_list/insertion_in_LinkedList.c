#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void printLinkedList(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("data = %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *insertAtFirst(struct Node *first, int new_data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = new_data;
    ptr->next = first;
    return ptr;
}

struct Node *insertAtBetween(struct Node *first, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = first;
    int count = 0;
    while (count != index - 1)
    {
        p = p->next;
        count++;
    }
    ptr->next = p->next;
    p->next = ptr;
    return first;
}

struct Node *insertAtEnd(struct Node *first, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = first;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return first;
}

int main()
{
    struct Node *first = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));

    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    printLinkedList(first);
    printf("\n");
    struct Node *new_first = insertAtFirst(first, 1);
    printLinkedList(new_first);
    printf("\n");
    struct Node *new_index = insertAtBetween(new_first, 40, 2);
    printLinkedList(new_index);
    printf("\n");
    struct Node *new_end = insertAtEnd(new_first, 100);
    printLinkedList(new_end);

    return 0;
}