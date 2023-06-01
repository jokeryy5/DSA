#include "stdio.h"
#include "stdlib.h"

struct node* newNode(int data);
int balance_factor( struct node* root);

struct node{
    int data;
    struct node* left;
    struct node* right;
    int height;
};


int main(){
    struct node* root= NULL;
    root= newNode(30);
    printf("Bla Bla");

    return 0;
}
////////node declaration
struct node* newNode(int data){
    struct node* new= (struct node*)malloc(sizeof(struct node));
    new->data= data;
    new->left= NULL;
    new->right= NULL;
    new->height= 0;

    return new;
}
///////////////node inserting
struct node* add(struct node* root, int data){
    if(root == NULL){
        struct node* new= newNode(data);
        root= new;  //changing 'new' node into "root" for the purpose of creation
    }
    else if(data > root->data){
        root->right= add(root->right, data);

        if(balance_factor(root) == -2){

        }

    }else{
        root->left= add(root->left, data);
    }
    return root;
}

int balance_factor( struct node* root){

}