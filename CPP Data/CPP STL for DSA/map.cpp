#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Creating a map of string keys and int values
    map<string, int> ageMap;

    // Inserting elements
    ageMap["Alice"] = 25;
    ageMap["Bob"] = 30;
    ageMap.insert({"Charlie", 35});

    // Accessing elements
    cout << "Alice's age: " << ageMap["Alice"] << endl;

    // Iterating through the map
    for (const auto &pair : ageMap)
    {
        cout << pair.first << " is " << pair.second << " years old." << endl;
    }

    std::map<int, std::string> m;

    // Using [] operator
    m[1] = "one";

    // Using insert()
    m.insert({2, "two"});
    m.insert(std::make_pair(3, "three"));

    // Using emplace() (more efficient)
    m.emplace(4, "four");

    std::map<int, std::string> m = {{1, "one"}, {2, "two"}};

    // Using [] operator (creates element if not found)
    std::cout << m[1]; // "one"

    // Using at() (throws exception if not found)
    try
    {
        std::cout << m.at(2); // "two"
    }
    catch (const std::out_of_range &e)
    {
        std::cerr << "Key not found";
    }

    // Safe access with find()
    auto it = m.find(3);
    if (it != m.end())
    {
        std::cout << it->second;
    }

    std::map<int, std::string> m = {{1, "one"}, {2, "two"}, {3, "three"}};

    // Erase by key
    m.erase(2); // Removes key 2

    // Erase by iterator
    auto it = m.find(3);
    if (it != m.end())
    {
        m.erase(it);
    }

    // Erase a range
    m.erase(m.begin(), m.end()); // Clears the map

    std::map<int, int> m = {{1, 10}, {2, 20}};

    std::cout << m.size();  // Number of elements: 2
    std::cout << m.empty(); // Checks if empty: false
    m.clear();              // Removes all elements

    std::map<int, std::string> m = {{1, "one"}, {2, "two"}};

    // find() - returns iterator or end()
    auto it = m.find(1);
    if (it != m.end())
    {
        std::cout << "Found: " << it->second;
    }

    // count() - returns 0 or 1 (since keys are unique)
    if (m.count(2))
    {
        std::cout << "Key 2 exists";
    }

    // lower_bound() and upper_bound()
    auto lb = m.lower_bound(1); // First element not less than key
    auto ub = m.upper_bound(1); // First element greater than key

    std::map<int, std::string> m = {{1, "one"}, {2, "two"}, {3, "three"}};

    // Forward iteration
    for (auto it = m.begin(); it != m.end(); ++it)
    {
        std::cout << it->first << ": " << it->second << std::endl;
    }

    // Reverse iteration
    for (auto rit = m.rbegin(); rit != m.rend(); ++rit)
    {
        std::cout << rit->first << ": " << rit->second << std::endl;
    }

    return 0;
}