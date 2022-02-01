#include<iostream>
#include<vector>
using namespace std;

bool sum_func(int i, int w, const vector<int> &a){

    if (i==0) {
        if (w==0) return true;
        else return false;
    }

    if (sum_func(i-1, w, a)) return true;
    if (sum_func(i-1, w-a[i-1], a)) return true;
    return false;

}

int main(){

    int N, w;
    vector<int> a(N);
    cin >> N >> w;
    for (int i=0; i<N; i++) cin >> a[i];

    for (int i=0; i<N; i++) {
        cout << a[i] << " ";
    }
    cout << "\n" << endl;
    if (sum_func(N, w, a)==true) cout << "Yes" << endl;
    else cout << "No" << endl;

}