#include <bits/stdc++.h>
using namespace std;

pair<int, int> findMinMax(vector<int> &arr)
{
    int min = INT_MAX, max = INT_MIN;
    for (int num : arr)
    {
        if (num < min)
            min = num;
        if (num > max)
            max = num;
    }
    return {min, max};
}

int main()
{
    // Creating a pair
    pair<int, string> p1 = {1, "apple"};

    // Accessing elements
    cout << p1.first << " " << p1.second << endl; // Output: 1 apple

    // Different ways to create pairs
    pair<int, int> p1;                    // Default constructor (0, 0)
    pair<int, char> p2(1, 'a');           // Initialized constructor
    pair<int, string> p3 = {2, "banana"}; // Using curly braces
    pair<int, int> p4 = make_pair(3, 4);  // Using make_pair function

    pair<string, double> product("Laptop", 999.99);
    cout << product.first;  // Output: Laptop
    cout << product.second; // Output: 999.99

    pair<int, int> coordinates(10, 20);
    coordinates.first = 15;  // Modify first element
    coordinates.second = 25; // Modify second element

    pair<int, char> pair1 = {1, 'A'};
    pair<int, char> pair2 = {2, 'B'};
    pair1.swap(pair2); // Swaps contents of pair1 and pair2

    pair<int, int> a = {1, 2};
    pair<int, int> b = {1, 3};
    pair<int, int> c = {2, 1};

    cout << (a < b); // true (1==1, then 2<3)
    cout << (a < c); // true (1<2)
    cout << (b < c); // true (1<2)

    auto p = make_pair(42, "hello"); // Deduces types automatically

    pair<int, string> p = {1, "one"};
    int num;
    string word;
    tie(num, word) = p; // unpacks the pair

    vector<pair<int, int>> edges = {{1, 2}, {2, 3}, {3, 4}};

    vector<pair<string, int>> studentGrades = {{"Alice", 90}, {"Bob", 85}};

    vector<pair<int, int>> tasks = {{3, 5}, {1, 2}, {2, 1}};
    sort(tasks.begin(), tasks.end()); // Sorts by first element

    priority_queue<pair<int, int>> pq; // max-heap based on first element
    pq.push({3, 10});
    pq.push({1, 20});

    return 0;
}