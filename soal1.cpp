#include <iostream>

using namespace std;

int main()
{

    int x;

    cout << "Input nilai : ";
    cin >> x;

    if (x % 3 == 0)
    {
        cout << "x + (5 * 5) : " << x * (5 * 5) << endl;
    }
    else
    {
        cout << "x - (6 * 2 + x) : " << x - (6 * 2 + x) << endl;
    }

    return 0;
}