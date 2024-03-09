#include<bits/stdc++.h>
#include <iostream>
#include <map>
using namespace  std;
int cnt = 0;
void print(){
    //if(cnt  == 3) return;
    cout << cnt << endl;
    cnt++;
    print();
}

int print1(int n){
    if (n==0) return 0;
    return(n + print1(n-1));
}

int print2(int n){
    if (n == 0) return 1;
    return (n*print2(n - 1));
}

void print3(int i, int arr[], int n){
    if(i >= n/2) return;
    swap(arr[i], arr[n-i-1]);
    print3(i+1,arr,n);
}

int main(){
    /*
    int n;
    int hash[100000] = {0};
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin  >> arr[i];
    }

    //precompute
    
    for (int i = 0; i < n; ++i) {
        hash[arr[i]] += 1;
    }

    int q; 
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        //getch
        cout << hash[number] << endl;

    }
    
    string s;
    cin  >> s;

    //precompute
    int hash[256] = {0};
    for  (int i = 0; i < s.size(); i++){
        //cout << s.size() << endl;
        hash[s[i]]++;
    }


    int q;
    cin  >> q;
    while(q--){
        char c;
        cin  >> c;
        cout << hash[c] << endl;
    }
    */

   int n;
   cin >> n;
   int arr[n];
   for  (int i=0; i<n; i++) {
       cin >> arr[i];
   }
   // pre compute
    map<int, int> mpp;
   for (int  i=0;i<n; i++){
    mpp[arr[i]]++;
   }

    int q;
    cin >> q;
    while (q--){
        int num;
        cin  >> num;
        
        cout << mpp[num] <<endl;
    }

    return 0;
}