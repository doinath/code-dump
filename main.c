#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node* next;
}node;

typedef struct list {
    node* head;
    node* tail;
}list;

void add(list* n, int num);
void print(list* n);
void init(list* n);

int main(void) {
    list l;

    init(&l);
    add(&l,1);
    add(&l,2);
    add(&l,3);
    add(&l,4);
    print(&l);
    return 0;
}
void init(list* n) {
    n->head =NULL;
    n->tail =NULL;
}
void add(list* n, int num) {
    node* newNode = (node*)malloc(sizeof(node));
    newNode->value = num;
    newNode->next = NULL;

    if (n->head == NULL) {
        n->head = newNode;
        n->tail = newNode;
    }

    n->tail->next = newNode;
    n->tail = newNode;

}

void print(list* n) {
    node* curr = n->head;

    if(curr == NULL) {
        printf("Empty\n");
    }
    while(curr != NULL) {
        printf("%d ", curr->value);
        curr = curr->next;
    }
}
