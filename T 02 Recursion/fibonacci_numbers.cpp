#include<bits/stdc++.h>
using namespace std;

int fibonacciNumber(int n) {
    if(n <= 1) {
        return n;
    }
    int firstValue = fibonacciNumber(n - 1);
    int secondValue = fibonacciNumber(n - 2);
    return firstValue + secondValue;
}

int main(){

    int n;
    cin >> n;
    
    cout << fibonacciNumber(n);

    return 0;
}