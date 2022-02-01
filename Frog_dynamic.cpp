#include<iostream>
#include<vector>
using namespace std;

template<class X> void chmin(X &n, X m){

    if (n>m) n = m;

}

int main(){

    int N;
    const long long INF = 100000;
    vector<int> a(N);
    vector<long long> dp(N, INF);
    cin >> N;
    for (int i=0; i<N; i++) cin >> a[i];

    for (int i; i<N; i++) {
        if (i==0) dp[0] = 0;
        else if (i==1) chmin(dp[i], dp[i-1]+abs(a[i]-a[i-1]));
        else {
            chmin(dp[i], dp[i-1]+abs(a[i]-a[i-1]));
            chmin(dp[i], dp[i-2]+abs(a[i]-a[i-2]));
        }
    }

    cout << dp[N-1] << endl;
}