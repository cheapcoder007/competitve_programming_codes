#include <bits/stdc++.h>
using namespace std;

typedef struct node {
    char ch;
    struct node *left, *right;
}node;

typedef

void inorder(tree t) {
    if(t == NULL)
        return;
    inorder(t->left);
    cout << t->ch;
    inorder(t->right);
}

void insert(tree *t, char ch) {

    if(t
