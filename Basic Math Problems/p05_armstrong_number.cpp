#include<bits/stdc++.h>
using namespace std;

void armstrongNumber(int n) {

    int number = n;
    int sum = 0;
    while(n > 0) {
        int lastDigit = n % 10;
        n /= 10;
        sum = sum + (lastDigit * lastDigit * lastDigit);
    }

    if(sum == number)
        cout << "It is an Armstrong number" << endl;
    else
        cout << "It is not an Armstrong number" << endl;

}

int main(){

    int n;
    cout << "Enter a number: ";
    cin >> n;

    armstrongNumber(n);
    

    return 0;
}