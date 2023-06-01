#include "stdio.h"
#include "stdlib.h"

void bubbleSort(int data[], int size){
    for (int i = 0; i < size-1; ++i) {
        for (int j = 0; j < size-1-i; ++j) {
        if(data[j] > data[j+1]){
            int temp= data[j];
            data[j]= data[j+1];
            data[j+1]= temp;
        }
        }
    }

}

int main(){
    int data[]= {5, 12, 3, 10, 15, 8, 7, 20, 11, 4};

    int length= sizeof(data)/ sizeof (data[0]); //////  for length of data array

    bubbleSort(data, length);

    for (int i = 0; i < length; ++i) {
        printf("%d :", data[i]);
    }


    return 0;
}