#include<bits/stdc++.h>
using namespace std;

// 0      
// 1 0    
// 0 1 0  
// 1 0 1 0   
// 0 1 0 1 0 

void binaryNumberPyramidPattern(int n)
{
    int start = 1;

    for(int i = 1; i <= n; i++) {

        if(i % 2 == 0) start = 1;
        else start = 0;

        for(int j = 1; j <= i; j++){

            cout << start << " ";
            start = 1 - start;
        }

        cout << endl;
    }
}


int main(){

    int n;
    cout << "Enter the number of rows for the Binary Number pyramid pattern: ";
    cin >> n;

    binaryNumberPyramidPattern(n);
    
    return 0;
}