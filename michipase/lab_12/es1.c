#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef enum {false, true} bool;
struct node {
   int data;
   struct node *next;
};
struct node *root = NULL;
struct node *head = NULL;

// display the list
// void printList(){
//    struct node *p = head;
//    printf("\n[");

//    //start from the beginning
//    while(p != NULL) {
//       printf(" %d ",p->data);
//       p = p->next;
//    }
//    printf("]");
// }

// insertion at the ybeginning
// void insertatbegin(int data){

//    //create a link
//    struct node *lk = (struct node*) malloc(sizeof(struct node));
//    lk->data = data;

//    // point it to old first node
//    lk->next = head;

//    //point first to new first node
//    head = lk;
// }
// void insertatend(int data){

//    //create a link
//    struct node *lk = (struct node*) malloc(sizeof(struct node));
//    lk->data = data;
//    struct node *linkedlist = head;

//    // point it to old first node
//    while(linkedlist->next != NULL)
//       linkedlist = linkedlist->next;

//    //point first to new first node
//    linkedlist->next = lk;
// }
// void insertafternode(struct node *list, int data){
//    struct node *lk = (struct node*) malloc(sizeof(struct node));
//    lk->data = data;
//    lk->next = list->next;
//    list->next = lk;
// }
// void deleteatbegin(){
//    head = head->next;
// }
// void deleteatend(){
//    struct node *linkedlist = head;
//    while (linkedlist->next->next != NULL)
//       linkedlist = linkedlist->next;
//    linkedlist->next = NULL;
// }
// void deletenode(int key){
//    struct node *temp = head, *prev;
//    if (temp != NULL && temp->data == key) {
//       head = temp->next;
//       return;
//    }

//    // Find the key to be deleted
//    while (temp != NULL && temp->data != key) {
//       prev = temp;
//       temp = temp->next;
//    }

//    // If the key is not present
//    if (temp == NULL) return;

//    // Remove the node
//    prev->next = temp->next;
// }
// int searchlist(int key){
// //    struct node *temp = head;
// //    while(temp != NULL) {
// //       if (temp->data == key) {
// //          return 1;
// //       }
// //       temp=temp->next;
// //    }
// //    return 0;
// // }

struct node *createNode(int data)
{
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

void insertInList (int value) {
    // create a new node
    struct node *new_node = createNode(value);
    // point previous head to the new node if exists
    // if root does not exist, root and head are the new node
    // if root exist, head needs to point to ne element and became the head

    if(root && head) {
        head->next = new_node;
    } else {
        root = new_node;
    }
    head = new_node;
}

void insertAtBeginning (int value) {
    struct node *new_node = createNode(value);
    
    if(root) {
        new_node->next = root;
    } else {
        head = new_node;
    }

    root = new_node;
}

void printList () {
    printf("\n");
    struct node *p = root;
    
    while(p->next != NULL) {
        printf("%d ", p->data);
        p = p->next; 
    };
    printf("%d", p->data);
}

int calcSum() {
    int sum = 0;
    struct node *p = root;
    while(p->next != NULL) {
        sum = sum + p->data;
        p = p->next;
    }
    return sum;
}

int main(){
    int arr[5] = {1,2,3,4,5};

    for(int i = 0; i < 5; i++)
        insertInList(arr[i]);

    printList();
    
    insertAtBeginning(calcSum());
    printList();

    return 0;
}
