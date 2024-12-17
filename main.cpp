#include <algorithm>
#include <chrono>
#include <iostream>
#include<vector>
#include "lego.h"

using namespace std;
using namespace std::chrono;
int main()
{
    int n;
    int i;
    lego L;
     cout << "Masukkan Jumlah data yang akan di input (max 1000): ";
    cin >>  n;
    insertData(L, n);
    cout << endl;
    cout << "=========================================================================================================" << endl;
    cout << "Data ingin di sort berdasarkan ID/PCS? (I/P): ";
    string s;
    cin >> s;
    if (s == "I"){
        cout << "Data ingin di sort secara rekursif atau iteratif? (R/I): ";
        string y;
        cin >> y;
        if (y == "R"){
        auto start = high_resolution_clock::now();
        insertionSortIDRecursive(L, n);
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);

        cout << "Waktu Running time algoritma sort: "
         << duration.count() << " microseconds" << endl;
        cout << endl;
        }else if (y == "I"){
            auto start = high_resolution_clock::now();
            insertionSortID(L, n);
            auto stop = high_resolution_clock::now();
            auto duration = duration_cast<microseconds>(stop - start);

            cout << "Waktu Running time algoritma sort: "
            << duration.count() << " microseconds" << endl;
            cout << endl;
        }
    }else if (s == "P"){
        cout << "Data ingin di sort secara rekursif atau iteratif? (R/I): ";
        string p;
        cin >> p;
        if (p == "R"){
            auto start = high_resolution_clock::now();
            insertionSortPcsRecursive(L, n);
            auto stop = high_resolution_clock::now();
            auto duration = duration_cast<microseconds>(stop - start);

            cout << "Waktu Running time algoritma sort: "
            << duration.count() << " microseconds" << endl;
            cout << endl;
        }else if(p == "I"){
            auto start = high_resolution_clock::now();
            insertionSortPcs(L, n);
            auto stop = high_resolution_clock::now();
            auto duration = duration_cast<microseconds>(stop - start);

            cout << "Waktu Running time algoritma sort: "
            << duration.count() << " microseconds" << endl;
            cout << endl;
        }
    }

    cout << endl;
    showData(L, n);
    return 0;
}
