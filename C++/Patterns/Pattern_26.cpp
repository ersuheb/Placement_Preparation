/*

   1
  121
 12321
1234321

*/

#include <iostream>
using namespace std;

int main(){
        
        int n;
        cin >> n;
        
        int row = 1;
        
        while(row<=n){

            int col = 1, space = 1;
            while(space<=n-row){
                cout<<"  ";       //Notice two spaces
                space++;
            }
            
            while(col<=row){
                cout << col << " ";
                col++;
            }

            col=row-1;
            while(col>=1){
                cout << col << " ";
                col--;
            }
            
            cout << endl;
            row++;
            
        }
        
        return 0;

}