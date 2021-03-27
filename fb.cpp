#include<bits/stdc++.h>
using namespace std;
vector<long long int> memo;
int fib(int n){
    if(n== 0) return 0;
    if(n == 1 || n == 2) return 1;
    if(n >= memo.size())
       memo.resize(n+1);
    if(memo[n] != 0)
       return memo[n];
    //else
    memo[n] = fib(n-1) + fib(n-2);
    return memo[n];      
}
int main(){
    int n;
    cin>>n;
    cout<<fib(n);
}