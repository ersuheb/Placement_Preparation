#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
    
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}


void swapAlternate(int arr[], int size){

    for (int i = 0; i < size; i+=2) {
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }

}

int main(){

    int even[8] = {1,4,0,5,-2,15,2,6};
    int odd[5] = {2,6,3,9,4};

    swapAlternate(even, 8);
    swapAlternate(odd, 5);

    printArray(even, 8);
    printArray(odd, 5);

}

/*

Avoid Swap inbuilt function
(Internal working of swap)

[2,5,3,9,4]
 0 1 2 3 4

 temp = arr[1]
 arr[1] = arr[0]
 arr[0] = temp

*/

