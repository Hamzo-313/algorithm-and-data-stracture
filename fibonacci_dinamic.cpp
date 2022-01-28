#include<iostream>
#include<vector>
using namespace std;

vector<long long> memo;
long long fibo(int N){
    if (N==0) return memo[N] = 0;
    else if (N==1) return memo[N] = 1 + fibo(N-1);
    if (memo[N]!=-1) return memo[N];
    return memo[N] = fibo(N-1)+fibo(N-2);
}

int main(){
    memo.assign(50, -1);
    cout << fibo(49) << endl;
}
