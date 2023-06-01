//
// Created by ADMIN on 30-Apr-23.
//

#include "stdio.h"
#include "stdlib.h"

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* newNode(int input) {
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));

    node->data= input;
    node->left= NULL;
    node->right= NULL;

    return node;
}

struct Node* Tree(int start, int end){
    if(start > end){        //checking data are right or wrong
        return NULL;
    }
    int midPoint= (start+end)/2;
    struct Node* root= newNode(midPoint);
    root->left= Tree(start, midPoint-1);
    root->right= Tree(midPoint-1, end);
    return root;

}


int main(){
    struct Node* root= Tree(1,10);
    printf("Bla Bla");

    return 0;
}