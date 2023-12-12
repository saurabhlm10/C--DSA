#include <iostream>
#include <string>

using namespace std;

class Car
{
public:
    string brand;
    void honk()
    {
        cout << "HONK HONK" << endl;
    }
};

int main()
{
    Car myCar;
    myCar.brand = "Ford";
    cout << myCar.brand << endl;
    myCar.honk();
    return 0;
}