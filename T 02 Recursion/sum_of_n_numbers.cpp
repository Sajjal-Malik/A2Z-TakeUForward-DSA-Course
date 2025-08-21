#include<bits/stdc++.h>
using namespace std;

// Recursion using Parameterized Way
int sumOfNNumbersParameterized(int i, int sum) {
    if(i < 1) {
        return sum;
    }
    sumOfNNumbersParameterized(i - 1, sum + i);
}

// Recursion using the Functional Approach
int sumOfNNumbersFunctional(int n) {
    if(n <= 0) {
        return 0;
    }
    return n + sumOfNNumbersFunctional(n - 1);
}


int main(){

    int n;
    cin >> n;

    cout << sumOfNNumbersParameterized(n, 0) << endl;
    
    cout << sumOfNNumbersFunctional(n) << endl;

    return 0;
}