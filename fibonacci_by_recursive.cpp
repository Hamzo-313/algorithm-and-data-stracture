#include<iostream>
using namespace std;

int fibo(int N){
    if (N==0) return 0;
    if (N==1) return 1 + fibo(0);
    return fibo(N-1)+fibo(N-2);
}

int main(){
    for (int i=0; i<=10; i++) cout<<fibo(i)<<" ";
    cout << "\n";
}