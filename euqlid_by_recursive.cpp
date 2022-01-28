#include<iostream>
using namespace std;

int GCD(int n,int m){
    if (m==0) return n;
    int r = n%m;
    return GCD(m,r);
}

int main(){
    cout<<GCD(45,36)<<endl;
}