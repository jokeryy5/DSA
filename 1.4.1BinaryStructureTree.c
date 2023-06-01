#include "stdio.h"
#include "stdlib.h"

//struct Node{
//    int data;
//    struct Node* left;
//    struct Node* right;
//};
//
//struct Node* newNode(int key){
//   struct Node* newNode= (struct Node*)malloc(sizeof(struct Node));
//   newNode->data= key;
//   newNode->left= NULL;
//   newNode->right= NULL;
//
//    return newNode;
//}
//
//void insertAtRight(struct Node* root, int key){
//   root->right = newNode(key);
//}
//
//void insertAtLight(struct Node* root, int key){
//    root->left = newNode(key);
//}
//
//int main(){
//    struct Node* root= newNode(50);
//
//
////    struct Node* root= newNode(50);
////    insertAtRight(root, 60);
////    insertAtLight(root, 30);
////    insertAtRight(root->right, 80);
//    return 0;
//}



#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

struct Node* createTree(int start, int end) {
    if (start > end) {
        return NULL;
    }
    int mid = (start + end) / 2;
    struct Node* root = newNode(mid);
    root->left = createTree(start, mid - 1);
    root->right = createTree(mid + 1, end);
    return root;
}

//void printTree(struct Node* node) {
//    if (node == NULL) {
//        return;
//    }
//    printf("%d ", node->data);
//    printTree(node->left);
//    printTree(node->right);
//}

int main() {
    struct Node* root = createTree(1, 10);

    return 0;
}