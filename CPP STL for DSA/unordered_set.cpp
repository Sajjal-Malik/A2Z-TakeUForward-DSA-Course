#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    // Declare an unordered_set of integers
    unordered_set<int> numbers = {1, 2, 3, 4, 5};

    // Insert elements
    numbers.insert(6);
    numbers.insert(2); // Won't insert as 2 already exists

    // Check if element exists
    if (numbers.find(3) != numbers.end())
    {
        cout << "3 is in the set\n";
    }

    // Iterate through the set
    cout << "Elements: ";
    for (const auto &num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;

    // Remove an element
    numbers.erase(4);

    // Check size
    cout << "Size: " << numbers.size() << endl;

    unordered_set<int> s;
    s.insert(10);           // Insert single element
    s.insert({20, 30, 40}); // Insert multiple elements

    if (s.find(20) != s.end())
    {
        // Element found
    }

    s.erase(20); // Erase by value
    auto it = s.find(30);
    if (it != s.end())
    {
        s.erase(it); // Erase by iterator
    }

    int size = s.size();      // Number of elements
    bool isEmpty = s.empty(); // Check if set is empty

    int bucket_count = s.bucket_count(); // Total buckets
    int bucket = s.bucket(10);           // Which bucket contains 10

    s.clear(); // Remove all elements
    return 0;
}