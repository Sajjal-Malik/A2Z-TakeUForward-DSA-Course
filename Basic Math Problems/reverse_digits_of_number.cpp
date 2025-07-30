#include<bits/stdc++.h>
using namespace std;

void reverseDigitsOfNumber(int n) {

    int reverseNumber = 0;

    while(n > 0) {
        int lastDigit = n % 10;
        n /= 10;
        reverseNumber = (reverseNumber * 10) + lastDigit;
    }
    cout << "The reverse of the given number is: " << reverseNumber << endl;

}

int main(){

    int n;
    cout << "Enter a number: ";
    cin >> n;

    reverseDigitsOfNumber(n);
    

    return 0;
}