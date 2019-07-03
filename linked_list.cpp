#include <bits/stdc++.h>
using namespace std;


typedef struct node{
    int data;
    struct node *next;
}node;

typedef node *Integer;

void init(Integer *head) {
    *head = NULL;
    return ;
}

void append(Integer *head, int data) {
    node *tmp = (node *)malloc(sizeof(node));
    tmp->data = data;
    tmp->next = NULL;
    if(!*head) {
        *head = tmp;
        return ;
    }
    node *p = *head;
    while(p->next)
        p = p->next;
    p->next = tmp;
    return ;
}

void printlist(Integer head) {
    cout << "INTEGER: [";
    node *tmp = head;
    while(tmp != NULL) {
        cout << tmp->data;
        tmp = tmp->next;
    }
    cout << "]\n";
    return ;
}

int add(Integer *head) {
    if(*head == NULL)
        return 1;
    int val, carry;
    node *temp = *head;
    carry = add(&temp->next);
    val = carry + temp->data;
    if(val > 9) {
        temp->data = val % 10;
        val /= 10;
    }
    else {
        temp->data = val;
        val = 0;
    }
    return val;
}

void addint(Integer *head) {
    int val;
    val = add(head);
    if(val > 0) {
        node *tmp = new node();
        tmp->data = val;
        tmp->next = *head;
        *head = tmp;
    }
    return ;
}


int main() {
    Integer i;
    init(&i);
    printlist(i);
    append(&i, 9);
 //   append(&i, 9);
//    append(&i, 9);  
    addint(&i);
    printlist(i);
    addint(&i);
    printlist(i);
    return 0;
}



























