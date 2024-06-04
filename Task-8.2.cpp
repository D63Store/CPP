#include <iostream>

using namespace std;
using degrees_t = double;
using radians_t = double;



namespace Constants
{
    inline constexpr double pi{ 3.14159 };
}

radians_t convertToRadians(degrees_t degrees)
{
    return degrees * Constants::pi / 180;
}

int main()
{
    cout << "Enter a number of degrees: ";
    degrees_t degrees{};
    cin >> degrees;

    radians_t radians{ convertToRadians(degrees) };
    cout << degrees << " degrees is " << radians << " radians.\n";

}
