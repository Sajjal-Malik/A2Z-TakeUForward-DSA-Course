#include<bits/stdc++.h>
using namespace std;

// Recursion using the Functional Approach
int sumOfNNumbersFunctional(int n) {
    int sum = 0;
    if(n <= 0) {
        return 0;
    }
    return n + sumOfNNumbersFunctional(n - 1);
}

// Recursion using Parameterized Way
int sumOfNNumbersParameterized(int i, int sum) {
    if(i < 1) {
        return sum;
    }
    sumOfNNumbersParameterized(i - 1, sum + i);
}

int main(){

    int n;
    cin >> n;
    
    cout << sumOfNNumbersFunctional(n) << endl;

    cout << sumOfNNumbersParameterized(n, 0) << endl;

    return 0;
}