#include <iostream>

using namespace std;

int main()
{
    int masa_kerja, gaji;

    cout << "Input masa kerja : ";
    cin >> masa_kerja;

    if (masa_kerja > 3)
    {
        gaji = (650000 * 4);
        gaji = gaji - (gaji * 11 / 100);
    }
    else
    {
        gaji = (550000 * 4);
        gaji = gaji - (gaji * 11 / 100);
    }

    cout << "Total gaji Bersih Perbulan : " << gaji << endl;

    return 0;
}