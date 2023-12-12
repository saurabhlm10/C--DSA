#include <iostream>
using namespace std;
int main()
{
    int *ptr; // A pointer to an integer
    int number = 10;
    int *ptr2 = &number;   // 'ptr' now holds the address of 'number'
    cout << *ptr2 << endl; // Outputs the value of 'number'

    return 0;
}
