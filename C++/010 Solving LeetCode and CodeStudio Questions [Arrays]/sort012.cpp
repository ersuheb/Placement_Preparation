// https://www.codingninjas.com/codestudio/problems/sort-0-1-2_631055

#include <bits/stdc++.h>
using namespace std;
void sort012(int *arr, int n)
{
   int i = 0, j=0,k=n-1;
   while(j<=k){
       if(arr[j]==0){
           swap(arr[i],arr[j]);
           i++;
           j++;
       } else if (arr[j] == 1){
           j++;
       } else {
           swap(arr[j], arr[k]);
           k--;
       }
   }
}

/* 
 vector<int> a(arr+0,arr+n);
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        arr[i]=a[i]; */