#include<bits/stdc++.h>
using namespace std;

bool pallindromeCheck(int i, string &str, int size) {

    if(i >= size / 2) {
        return true;
    }
    
    if(str[i] != str[size - i - 1]) {
        return false;
    }

    swap(str[i], str[size - i - 1]);

    pallindromeCheck(i + 1, str, size);
}

int main(){

    string str = "madam";
    int size = str.size();

    if(pallindromeCheck(0, str, size)) {
        cout << "This is string is Pallindrome" << endl;
    }
    else {
        cout << "This string is not a Pallindrome" << endl;
    }

    return 0;
}