#include <iostream>

using namespace std;




bool passOrFail()
{
    static int count = 0;
    ++count;
    return count <= 3;
}

int main()
{
    cout << "User #1: " << (passOrFail() ? "Pass" : "Fail") << '\n';
    cout << "User #2: " << (passOrFail() ? "Pass" : "Fail") << '\n';
    cout << "User #3: " << (passOrFail() ? "Pass" : "Fail") << '\n';
    cout << "User #4: " << (passOrFail() ? "Pass" : "Fail") << '\n';
    cout << "User #5: " << (passOrFail() ? "Pass" : "Fail") << '\n';

}
