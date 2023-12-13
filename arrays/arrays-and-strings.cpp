#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    // Array example
    // vector<int> numbers;
    vector<int> vec = {1, 2, 3, 4, 5}; // Declare the vector
    // numbers.push_back(1); // Add elements individually
    // numbers.push_back(2);
    // numbers.push_back(3);
    // numbers.push_back(4);
    // numbers.push_back(5);

    // Pre-C++11 way of iterating over the vector
    for (size_t i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }

    // String example
    string greeting = "Hello";
    string name = "Wold";
    string message = greeting + ", " + name + "!";
    cout << "\n"
         << message << endl;

    return 0;
}
