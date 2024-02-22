#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int main() {
    // pairs and can be any pair of data types 
    // can be array as well
    pair <int, int> arr[] = {{1,3},{2,4},{5,6}};  
    cout << arr[2].second;

    //vectors
    /* Array size cannot be incresed once it is declared*/
    vector<pair<int, int>> vec;
    /*push_back usually - needs to use curly braces around to push such data
    but in the case of emplace_back it automatically assumes it to be a pair
    and pushes it*/
    vec.push_back({1,2});
    vec.emplace_back(1,2);
    cout <<  vec[0]<<" "<< vec[1];
    /* one of the way to access the vector is by index numeber like array
    and the other way is by iterator.*/

    vector<int>::iterator it = v.begin();
    

    return 0;
} 