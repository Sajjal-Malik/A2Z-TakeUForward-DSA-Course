#include <bits/stdc++.h>
using namespace std;

// Brute Force Method
// void gcd_or_hcf(int n1, int n2)
// {
//     int gcd_or_hcf = 1;
//     for (int i = 1; i <= min(n1, n2); i++)
//     {   
//         if(n1 % i == 0 && n2 % i == 0) {
//             gcd_or_hcf = i;
//         }
//     }
//     cout << gcd_or_hcf ;
// }

// Optimal Approach using (Euclidean Algorithm)
void gcd_or_hcf(int n1, int n2)
{
    while(n1 > 0 && n2 > 0){
        if(n1 > n2)
            n1 = n1 % n2;
        else
            n2 = n2 % n1;
    }
    if(n1 == 0)
        cout << n2;
    else
        cout << n1;
}

int main()
{

    int n1, n2;
    cout << "Enter number n1: ";
    cin >> n1;
    cout << "Enter number n2: ";
    cin >> n2;

    gcd_or_hcf(n1, n2);

    return 0;
}