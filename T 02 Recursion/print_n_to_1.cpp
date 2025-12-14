#include <bits/stdc++.h>
using namespace std;

void printNum(int i)
{
    if (i < 1)
    {
        return;
    }
    cout << i << endl;
    printNum(i -= 1);
}

int main()
{

    int n;
    cin >> n;

    printNum(n);

    return 0;
}