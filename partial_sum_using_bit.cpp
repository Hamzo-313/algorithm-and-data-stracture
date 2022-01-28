#include <iostream>
#include <vector>
using namespace std;

int main(){

    int N, W;
    cin >> N >> W;
    vector<int> a(N);
    for (int i=0; i < N; ++i )  cin >> a[i];
    bool flag = false;
    vector<vector<int> > b;
    for (int bit=0; bit<(1<<N); ++bit) {
        vector<int> c;
        int sum = 0;
        for (int i=0; i<N; ++i) {
            if (bit&(1<<i)) {
                sum += a[i];
                c.push_back(a[i]);
            }
        }
        if (sum==W){
            flag = true;
            b.push_back(c);
        }
    }

    cout << "結果出力" <<endl;
    if (flag==true) {
        for (int i = 0; i < b.size(); i++){
        for (int j = 0; j < b[i].size(); j++){
            std::cout << b[i][j] << " ";
        }
        std::cout << "\n";
        }
    }
    else cout << "no" << endl;
    return 0;
}