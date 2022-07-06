/*

987
654
321



*/

#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int row = 1;
    int toPrint = 9;

    while(row<=n){

        int col = 1;
        while(col<=n){
            cout << toPrint << " ";
            toPrint = toPrint - 1;
            col++;
        }

        

        cout<<endl;
        row++;

    }

}


