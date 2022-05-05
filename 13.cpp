#include <iostream>

using namespace std;

void main() {
    setlocale(LC_ALL, "rus");
    const int a =4;
    int mass[a][a];
    int d;
    cout << "Хочешь ввести вручную или авто? 1- ручная.2-авто" << endl;
    cin >> d;
    switch (d)
    {
    case 1:
    {
        for(int i = 0; i < a; i++) {
            for (int j = 0; j < a; j++) {
                cout << "Введите графы a[" << i << "][" << j << "] ";
                cin >> mass[i][j];
            }
        }
        break;
    }
    case 2:
    {
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < a; j++) {
                mass[i][j]=rand() % 10;
            }
        }
        break;
    }
    }
   
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cout << mass[i][j] << " ";
        }
        cout << endl;
    }
    int n = 7;
    bool* to_sto_posetili = new bool[n];
    memset(to_sto_posetili, false, sizeof(bool) * n);
    to_sto_posetili[0] = true;
    for (int l = 0; l < n - 1; l++) {
        int minx = -1, miny = -1;
        for (int i = 0; i < n; i++)
            if (to_sto_posetili[i])
                for (int j = 0; j < n; j++)
                    if (!to_sto_posetili[j] && mass[i][j] > 0 && (miny == -1 || mass[i][j] < mass[miny][minx]))
                        miny = i, minx = j;
        to_sto_posetili[minx] = true;
        cout << miny << "->" << minx << endl;
    }

    system("pause");
}