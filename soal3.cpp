#include <iostream>

using namespace std;

int main()
{

    int total;
    cout << "Masukan Total Pembelian : ";
    cin >> total;

    if (total >= 1000000)
    {
        total = total - (total * 15 / 100);
        cout << "Diskon 15% : " << (total * 15 / 100) << endl;
    }
    if (total >= 600000)
    {
        total = total - (total * 10 / 100);
        cout << "Diskon 10% : " << (total * 10 / 100) << endl;
    }
    if (total >= 200000)
    {
        total = total - (total * 5 / 100);
        cout << "Diskon 15% : " << (total * 5 / 100) << endl;
    }

    cout << "Total Yang Harus Di Bayar : " << total << endl;

    return 0;
}