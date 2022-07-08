#include<iostream>
using namespace std;

int sumArray(int arr[], int n) {
    
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum = sum + arr[i];
    }
    return sum;
}

int main() {
    
    int a[100],n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    cout << "The sum of the elements in the array is: " << sumArray(a, n) << endl;

}

