#include <iostream>
#include <algorithm>
using namespace std;
int xmax, ymax;
int xmid, ymid;
int xmin, ymin;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (a > b) swap(a, b);
    cout << a << " " << b << " " << c << endl;

    xmax = max({arr[0][0],arr[1][0],arr[2][0]});
    ymax = max({arr[0][1],arr[1][1],arr[2][1]});
        
    xmin = min({arr[0][0],arr[1][0],arr[2][0]});
    ymin = min({arr[0][1],arr[1][1],arr[2][1]});
        
    xmid = arr[0][0] + arr[1][0] + arr[2][0] - xmin - xmax;
    ymid = arr[0][1] + arr[1][1] + arr[2][1] - ymin - ymax;
        
    sort(arr, arr + 3, [](const int a[2], const int b[2]) {
        return a[0] < b[0];
    });

    return 0;
}
