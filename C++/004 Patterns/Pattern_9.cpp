/*

1
23
456
78910

*/

#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int row = 1;

    int toPrint = 1;
    
    while(row<=n){
            
            int col = 1;
            while(col<=row){
                cout << toPrint << " ";
                toPrint++;
                col++;
            }
            
            cout << endl;
            row++;
            
    }

}