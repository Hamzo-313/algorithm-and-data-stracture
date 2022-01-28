#include<iostream>
using namespace std;

int recursive(int N){
    if (N==0) return 0;
    return N+recursive(N-1);
}

int main(){

    cout <<recursive(6)<<endl;
}