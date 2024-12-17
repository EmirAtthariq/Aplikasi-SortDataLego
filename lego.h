#ifndef LEGO_H_INCLUDED
#define LEGO_H_INCLUDED
using namespace std;
struct detail{
    int ID;
    string title;
    int pcs;
};
typedef struct detail infotype;
struct lego{
    infotype info[1000];
};
void insertData(lego &L, int x);
void showData(lego L, int x);
void insertionSortID(lego &L, int n);
void insertionSortIDRecursive(lego &L, int n);
void insertionSortPcs(lego &L, int n);
void insertionSortPcsRecursive(lego &L, int n);
#endif // LEGO_H_INCLUDED
