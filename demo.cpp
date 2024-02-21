#include<bits/stdc++.h>
#include <iostream>
using namespace std;

// void functions
// non parameterised
// parameterised
// return

//pass by value

// pass by reference

/*void print1(int a){
  for (int i=0 ;i<a;i++){
    for (int j = 0;j<a;j++){
      cout << "*" << " ";
  }
  cout << endl;
 }

}*/

void print2(int n){
  for (int i= 0 ;i<n;i++){
    for  (int j = 0;j<i;j++){
      cout << " ";
    }
    for  (int j = 0;j<2*n -(2*i +1);j++) {
      cout << "*";
    }
    for  (int j = 0;j< i;j++){
      cout << " ";
    }
    cout << endl;
 }

}

void print3(int n){
  for (int i =1; i <= 2 * n - 1; i++) {
    int stars = i;
    if(i>n) stars = 2*n - i;
    for  (int j = 1; j <= stars; j++){
      cout  << "*";
    }
    cout  << endl;
  }
}

void print4(int n){
  int start =1;
  for (int  i = 0; i < n; i++) {
    if(i % 2 ==0) start =1;
    else start =0;
    for (int j = 0;j<=i;j++){
      cout <<start;
      start = 1 - start;
    }
      cout << endl;
  }
}

void print5(int n){
  int space = 2*(n-1);
  for  (int i=1; i<=n; i++ ) {
    // numbers
    for   (int j=1; j<=i; j++){
      cout  << j;
    }
    // space
    for(int j=1; j<=space; j++){
      cout   <<" ";
    }
    //number
    for   (int j=i; j>=1; j--){
      cout  << j;
    }
    cout <<endl;
    space -=2;

}
}

void print6(int n){
  int numb =1;
  for  (int i = 1; i <= n; i++) {
    for   (int j = 1; j <= i; j++){
      cout  << numb << " ";
      numb ++ ;
    }
    cout << endl;
  }
}

void print7(int n){
  for   (int i = 0; i < n; i++) {
    for  (char ch ='A'; ch<='A' + i; ch++) {
          cout << ch << " ";
    }
    cout << endl;
  }
}

void print10(int n){
  for    (int i = 0; i < n; i++) {
    for   (char ch='A'; ch <= 'A' + (n-i-1); ch++ ) {
       cout << ch << " ";

    }
    cout << endl;
  }
}

void print11(int n){
   for (int i = 0; i < n; i++){
      char ch = 'A' + i;
      for (int j=0; j<=i;j++){
            cout <<ch<<" ";
            
      }
      cout<<endl;
   }
}

void print12(int n){
  
  for  (int i = 0; i < n; i++) {
    for   (int j = 0; j < n-i-1; j++){
      cout << " ";
    }
    char ch = 'A';
    int breakpoint = (2*i+1)/2;
    for   (int j = 1; j <=2*i + 1; j++){
      cout << ch;
      if (j <= breakpoint) ch++;
      else ch--;  
    }

    for   (int j = 0; j < n-i-1; j++){
      cout << " ";
    }
    cout << endl;
  }
}

void print13(int n){
   for (int i  = 0; i < n; i++) {
      for (char ch = 'E' - i; ch <= 'E';ch++){
        cout  << ch << " ";
      }
      cout  << endl;
   }
}

void print14(int n){
  int spaces = 0;
  for  (int i = 0; i < n; i++) {
      for  (int j = 1; j <=n - i; j++){
          cout << "*";
      }
      for  (int j = 0; j < spaces; j++){
          cout << " ";
      }
      for  (int j = 1; j <=n- i; j++){
          cout << "*";
      }
      spaces += 2;
      cout  << endl;
  }
  spaces = 2*n - 2;
  for  (int i = 1; i <= n; i++) {
      for  (int j = 1; j <=i; j++){
          cout << "*";
      }
      for  (int j = 0; j <spaces; j++){
          cout << " ";
      }
      for  (int j = 1; j <=i; j++){
          cout << "*";
      }
      spaces -= 2;
      cout  << endl;
  }
}

void print15(int n){
   int space = 2*n -2;
  for  (int i=1; i<=2*n - 1; i++){
    int stars = i;
    if (i>n) stars = 2*n -i;
    // stars 
    for  (int j=1;j<=stars;j++){
      cout<<"*";
    }
    for  (int j=1;j<=space;j++){
      cout<<" ";
    }
    for  (int j=1;j<=stars;j++){
      cout<<"*";
    }
    cout<<endl;
    if(i <n) space -=2;
    else space +=2;
  }
}

void print16(int n){
  for (int i =0; i<n; i++) {
    for (int j =0; j<n;j++){
        if (i==0 || j ==0 || i == n-1 || j== n-1){
          cout << "*";
        }
        else cout  << " ";
    }
    cout << endl;
  }
}

void print17(int n){
  for (int i =0; i<2*n -1; i++) {
    for (int j =0; j<2*n -1;j++){
      int top = i;
      int  left = j;
      int right = (2*n - 2) - i;
      int down =  (2*n - 2) - j;
      cout << (n - min(min(top,down),min(left,right)));
    }
    cout << endl;
}
}

int main(){
  int n;
  cin >> n;
  print17(n);
  
 return 0;
}
