#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (a > b) swap(a, b);
    cout << a << " " << b << " " << c << endl;

    sort(arr, arr + 3, [](const int a[2], const int b[2]) {
        return a[0] < b[0];
    });

    return 0;
}
