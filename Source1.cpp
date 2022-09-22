#include <iostream>
#include <climits>
using namespace std;


int nod(int n, int m)
{
    if (m == 0)
        return n;
    if (n > m)
        return nod(m, n - m);
    else
        return nod(n, m - n);
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    int* arr;
    int nod_;
    cout << "Введите количество чисел" << endl;
    cin >> n;
    arr = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "Введите " << i + 1 << " число" << endl;
        cin >> arr[i];
    }
    if (n >= 2) {
        nod_ = nod(arr[0], arr[1]);
    }
    else {
        nod_ = arr[0];
    }
    for (int i = 2; i < n; i++) {
        nod_ = nod(nod_, arr[i]);
    }
    cout << "НОД " << nod_ << endl;
    return 0;
}