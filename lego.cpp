#include <iostream>
#include "lego.h"
using namespace std;

void insertData(lego &L, int x){
    cout << "Masukkan ID, Title, pcs" << endl;
    int i;
    for(i=0;i<x;i++){
        cin >> L.info[i].ID;
        cin >> L.info[i].title;
        cin >> L.info[i].pcs;
    }
}
void showData(lego L, int x){
    int i;
    cout << "Data yang ada didalam array: " << endl;
    for(i=0;i<x;i++){
        cout << L.info[i].ID << " ";
        cout << L.info[i].title << " ";
        cout << L.info[i].pcs << endl;
    }
}
// Fungsi Insertion Sort Iteratif berdasarkan ID
void insertionSortID(lego &L, int n) {
    for (int i = 1; i < n; i++) {
        infotype key = L.info[i];
        int j = i - 1;

        // Pindahkan elemen yang ID-nya lebih besar ke posisi berikutnya
        while (j >= 0 && L.info[j].ID > key.ID) {
            L.info[j + 1] = L.info[j];
            j--;
        }
        L.info[j + 1] = key;
    }
}
void insertionSortIDRecursive(lego &L, int n) {
    // Basis: Jika hanya ada 1 elemen, maka sudah terurut
    if (n <= 1) {
        return;
    }

    // Urutkan n-1 elemen pertama secara rekursif
    insertionSortIDRecursive(L, n - 1);

    infotype last = L.info[n-1];
    int j = n-2;
    while (j >= 0 && L.info[j].ID > last.ID)
    {
        L.info[j+1] = L.info[j];
        j--;
    }
    L.info[j+1] = last;
}
void insertionSortPcs(lego &L, int n) {
    for (int i = 1; i < n; i++) {
        infotype key = L.info[i];
        int j = i - 1;

        // Pindahkan elemen yang pcs-nya lebih besar ke posisi berikutnya
        while (j >= 0 && L.info[j].pcs > key.pcs) {
            L.info[j + 1] = L.info[j];
            j--;
        }
        L.info[j + 1] = key;
    }
}
// Fungsi Rekursif untuk Insertion Sort berdasarkan pcs
void insertionSortPcsRecursive(lego &L, int n) {
    // Basis: Jika hanya 1 elemen, maka sudah terurut
    if (n <= 1) {
        return;
    }

    // Urutkan n-1 elemen pertama secara rekursif
    insertionSortPcsRecursive(L, n - 1);

    // Sisipkan elemen ke-n di posisi yang tepat
    infotype last = L.info[n - 1];
    int j = n - 2;

    // Pindahkan elemen yang pcs lebih besar ke posisi berikutnya
    while (j >= 0 && L.info[j].pcs > last.pcs) {
        L.info[j + 1] = L.info[j];
        j--;
    }
    L.info[j + 1] = last;
}
