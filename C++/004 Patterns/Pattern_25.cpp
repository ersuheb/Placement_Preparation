/*

   1
  23
 456
78910

*/

//Logic: Print space (n-row) and print num. Then inrement num.

#include <iostream>
using namespace std;

int main(){
        
        int n;
        cin >> n;
        
        int row = 1;
        int num = 1;
        
        while(row<=n){
            
            int space = 1;
            while(space<=n-row){
                cout<<"  ";       //Notice two spaces
                space++;
            }
            
            int col = 1;
            while(col<=row){
                cout << num << " ";
                num++;
                col++;
            }
            
            cout << endl;
            row++;
            
        }
        
        return 0;
        
}