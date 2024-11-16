#include <iostream>

using namespace std;

int main()
{
    int m, jumlah = 0, j = 0;
    cout << "Masukan Nilai Akhir : ";
    cin >> m;

    for (int i = 0; i < m; i = i + 4)
    {
        cout << i << " ";
        if (i % 4 == 0)
        {
            jumlah += j * i;
            j = i;
        }
    }

    cout << endl;
    cout << "Total Jumlah : " << jumlah << endl;

    return 0;
}