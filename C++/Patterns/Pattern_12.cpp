/*

AAA
BBB
CCC

*/

#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    
    int row = 1;
    
    while(row<=n){
        
        int col = 1;
        
        while(col<=n){
            //can also print 'A' + row - 1
            //'A' will get typecasted to 65
            cout << (char) (65 + row - 1) << " ";
            col++;
        }
        
        cout << endl;
        row++;
        
    }
    

}