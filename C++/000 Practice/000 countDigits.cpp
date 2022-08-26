// Given a number N. Count the number of digits in N which evenly divides N.

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int evenlyDivides(int N){
        int digit=0, count=0, X=N;
        while(N!=0){
            digit=N%10;
            if(digit!=0){
                if(X%digit==0){
                    count++;
                }
            }
            N=N/10;
        }
        return count;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0;
}


/* Approach:
-> Store the integer in a variable X and initialize a counter variable to count the number of digits.
-> We know that in programming languages when we divide X by Y it will result in an integer (given both the variables are integers). 
    For example, 133/10 will result in 13 similarly 1/10 will result in 0.
-> Using a for loop and above observation keep on dividing X by 10 and increment the count in every iteration when X equals 0 terminate
   the loop and the count will have the number of digits in N.

int count_digits( int n )
{
   int x = n; int count =0;
   while( x !=0 ) 
   {
       x = x / 10;
       count++;
   }
   return count;
}

int count_digits( int n )
{
  string x = to_string(n);
  return x.length(); 
}

int count_digits( int n )
{
  int digits = floor(log10(n) + 1);
  return digits;
}
 */