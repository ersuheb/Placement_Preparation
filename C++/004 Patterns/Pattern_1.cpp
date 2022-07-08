/*

****
****
****
****


*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    int row = 0;
    while(row < n){      //row = 0,1,2,3,4,........,n-1 which is basically n times
        int col = 0;
        while(col < n){
            cout << "*";
            col++;
        }
        cout << endl;    //after printing one row, we need to enter the next row so endl
        row++;
    }
    return 0;
}