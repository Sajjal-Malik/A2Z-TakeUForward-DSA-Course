#include<bits/stdc++.h>
using namespace std;

// Brute Force Approach
// void printAllDivisors(int n){

//     for(int i = 1; i <= n; i++){
//         if(n % i == 0)
//             cout << i << " ";
//     }
// }
                               
// Optimal Approach using -> SQRT(n)
void printAllDivisors(int n){

    vector<int> v;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0)
            v.push_back(i);
            if(n / i != i)
                v.push_back(n / i);
    }
    sort(v.begin(), v.end());
    for(auto it: v)
        cout << it << " ";
}

int main(){

    int n;
    cout << "Enter a number: ";
    cin >> n;

    printAllDivisors(n);
    

    return 0;
}