/*

1
23
345
4567

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
            toPrint = row;
            while(col<=row){
                cout << toPrint << " ";
                toPrint++;
                col++;
            }
            
            cout << endl;
            row++;
            
        }
        
}