/*

   *
  **
 ***
****

*/

// Logic for row i, we are first printing n-i spaces and then printing i stars.

#include <iostream>
using namespace std;

int main(){
        
        int n;
        cin >> n;
        
        int row = 1;
        
        while(row<=n){

            int space = 1;
            while(space<=n-row){
                cout<<" ";
                space++;
            }
            
            int col = 1;
            while(col<=row){
                cout << "*";
                col++;
            }
            
            cout << endl;
            row++;
            
        }

        return 0;
}
