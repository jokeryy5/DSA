#include "stdio.h"
#include "stdlib.h"

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* newNode(int key){
    struct Node* newNode= (struct Node*)malloc(sizeof(struct Node));
    newNode->data= key;
    newNode->left= NULL;
    newNode->right= NULL;

    return newNode;
}
///////////     insertNode with big num to right and small num to left
struct Node* insertNode(struct Node* root, int key){

    if(root== NULL){
       return newNode(key);
    }

    if(key> root->data){
        root->right= insertNode( root->right, key);
    } else{
        root->left= insertNode(root->left, key);
    }
    return root;
}
//////////////////////////////////////////////

void inorderTraversal(struct Node* node){

    if(node != NULL){
        inorderTraversal(node->left);
        printf("Data : %d\n", node->data);

        inorderTraversal(node->right);
    }
}


void finder(struct Node* node, int keyFinder){

    if(node != NULL){
        finder(node->left, keyFinder);
        if( node->data == keyFinder){
            printf("We found\n");
        }

        finder(node->right, keyFinder);
    }

}
int main(){

    struct Node* root= NULL;
    root= insertNode(root, 10);
    root= insertNode(root, 8);
    root= insertNode(root, 12);
    root= insertNode(root, 5);
    root= insertNode(root, 15);
    root= insertNode(root, 3);
    root= insertNode(root, 4);
    inorderTraversal(root);
    finder(root, 12);
    return 0;
}