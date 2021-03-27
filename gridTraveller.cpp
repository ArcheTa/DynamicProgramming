/* Say that you are a traveller on a 2D grid. 
You begin in the top-left corner and your
goal is to travel to the bottom-right corner.
You may only move down or right.

In How many ways can you travel to the goal
on a grid with dimensions m*n 

Write a function 'gridTraveler(m,n) */
#include<bits/stdc++.h>
using namespace std;
unordered_map<string, int> memo;
int gridTraveler(int m, int n){
    string key = to_string(m) + ',' + to_string(n);
    if( m == 1 &&  n == 1) return 1;
    if(m == 0 || n==0) return 0;
    
    if(memo[key] != 0) return memo[key];
    memo[key] = gridTraveler(m-1, n) + gridTraveler(m, n-1);
    return memo[key];
}
int main(){
    int m, n;
    cin>>m>>n;
    cout<<gridTraveler(m,n);
    return 0;
}

//(1,1) 1
//(2, 3) 3
//(3, 2) 3
//(3, 3) 6
//(18, 18) 2333606220