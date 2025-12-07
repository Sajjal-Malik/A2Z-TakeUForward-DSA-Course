#include <iostream>
using namespace std;

// 4 4 4 4 4 4 4 
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4 
// 4 4 4 4 4 4 4

void theNumberPattern(int n)
{
    int size = 2 * n - 1;  // Total number of rows and columns

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {

            // Calculate the minimum distance from any edge
            int top = i;
            int left = j;
            int right = size - 1 - j;
            int bottom = size - 1 - i;

            int minDistance = min(min(top, bottom), min(left, right));

            cout << n - minDistance << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows for the Number Pattern: ";
    cin >> n;

    theNumberPattern(n);

    return 0;
}
