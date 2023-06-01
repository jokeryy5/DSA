#include "stdio.h"
#include "math.h"

int mini(int first, int second){
    if(first> second){
        return second;
    } else{
        return first;
    }

}

int jumpsearch(int arr[], int key, int size){
    int step= sqrt(size);
    int previous= 0;    // set the current jump to the first element

    while (arr[mini(step, size)-1]< key){
        previous= step;
        step= step+ sqrt(size);

        if(previous>= size){
            return -1;
        }
    }
    //////////// for key finder///////////////////////
    for (int i = previous; i < step ; ++i) {
    if(arr[i]== key){
        return i;
    }
    }
    return -1;

}

int main(){
    int arr[]= {1,2,3,4,5,6,7,8,9,100,101,102};

    int size= sizeof(arr)/ sizeof(arr[0]);

    int toFind= 9;
    int indexNumber = jumpsearch(arr, toFind, size);
    if(indexNumber != -1){
        printf("We found!\n");
        printf("found at index%d    data:%d", indexNumber,arr[indexNumber]);
    }else{
        printf("Not found!!!\n");
    }

    return 0;
}