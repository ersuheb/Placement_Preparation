/*

1
23
345
4567

*/


/* With using extra variable

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

*/


#include <iostream>
using namespace std;

int main(){
        
        int n;
        cin >> n;
        
        int row = 1;
        
        while(row<=n){
            
            int col = row;

            while(col < row * 2){
                cout << col << " ";
                col++;
            }
            
            cout << endl;
            row++;
            
        }
        
}

