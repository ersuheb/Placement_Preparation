/*

****
 ***
  **
   *


*/

//Logic: Print i-1 spaces & n-i+1 stars for ith row.


#include <iostream>
using namespace std;

int main(){
        
        int n;
        cin >> n;
        
        int row = 1;

        while(row<=n){
                
                int space = 1;
                while(space<row){
                    cout<<" ";
                    space++;
                }
                
                int col = 1;
                while(col<=n-row+1){
                    cout << "*";
                    col++;
                }
                
                cout << endl;
                row++;
                
        }

        return 0;

}