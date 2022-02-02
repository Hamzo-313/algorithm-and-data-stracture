#include<iostream>
#include<vector>
using namespace std;

template<class X> void chmin(X &n, X m) {
    if (n>m) n = m;
}

const long long INF = 100000000;
vector<int> a;
vector<long long> dp;

long long func(int n){

    long long res = INF;

    if (dp[n]<INF) return dp[n];

    if (n==0) res = 0;
    else if (n==1) chmin(res, func(n-1)+abs(a[n]-a[n-1]));
    else {
        chmin(res, func(n-2)+abs(a[n]-a[n-2]));
        chmin(res, func(n-1)+abs(a[n]-a[n-1]));
    }
    
    cout << n << res << endl;

    return dp[n] = res;
}

int main(){
    
    int N;
    cin >> N;
    a.resize(N);
    dp.assign(N, INF);
    for (int i=0; i<N; i++) cin >> a[i];

    cout << func(N-1) << endl;
}