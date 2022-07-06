/*

ABC
BCD
CDE

*/

#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    
    int row = 1;
    
    while(row<=n){
        
        int col = 1;
        char ch = 'A' + row -1;
        
        while(col<=n){
            cout << ch << " ";
            ch++;
            col++;
        }
        
        cout << endl;
        row++;
        
    }
    return 0;
}