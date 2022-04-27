#include<stdio.h>
#include<stdlib.h>

#define p printf
#define s scanf

typedef struct node{
    int num;
    struct node *next;
}Node;

//funciones
Node *createNode(int x);
void initinsert(Node **head, int x);
void finalInsert(Node **head, int x);
void printLinkedList(Node *head);
//
int main(){
    Node *head = NULL;
    int n, i;
    s("%d", &n);
    for(i=0; i<n; i++){
        int x;
        s("%d", &x);
        if(head == NULL) initinsert(&head, x);
        else finalInsert(&head, x);
    }
    printLinkedList(head);
    free(head);
    return 0;
}

Node *createNode(int x){//xd
    Node *new = (Node *)malloc(sizeof(Node));
    if(new != NULL){
        new->num = x;
        new->next = NULL;
    }
    else{
        p("error no hay memoria\n");
        exit(1);
    }
}

void initinsert(Node **head, int x){
    Node *nuevo;
    nuevo = createNode(x);
    if (nuevo != NULL){
        nuevo->next = *head;
        *head = nuevo;
    }
}

void finalInsert(Node **head, int x){
    Node *aux = *head, *nuevo = NULL;
    nuevo = createNode(x);
    if(nuevo != NULL){
        while(aux->next != NULL){
            aux = aux->next;
        }
    }
    aux->next = nuevo;
}

void printLinkedList(Node *head){
    Node *aux = head;
    
    while(aux != NULL){
        p("%d\n", aux->num);
        aux = aux->next;
    }
}