#include<bits/stdc++.h>
using namespace std;

void checkPallindromeNumber(int n) {

    int reverseNumber = 0;
    int number = n;
    while(n > 0) {
        int lastDigit = n % 10;
        n /= 10;
        reverseNumber = (reverseNumber * 10) + lastDigit;
    }

    if(reverseNumber == number)
        cout << "It is a Pallindrome number" << endl;
    else
        cout << "It is not a Pallindrome number" << endl;
}

int main(){

    int n;
    cout << "Enter a number: ";
    cin >> n;

    checkPallindromeNumber(n);
    

    return 0;
}