/*

123
456
789

*/

#include <iostream>
using namespace std;

int main (){

    int n;
    cin >> n;

    int row = 1;
    int toPrint = 1;

    while(row<=n){

        int col = 1;
        while(col<=n){
            cout << toPrint << " ";
            col++;
            toPrint++;
        }
        cout << endl;
        row++;
    }

    return 0;


}