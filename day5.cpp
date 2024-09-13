#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 10e8;
#define loop3(i, a, b) for (i = a; i <= b; i++)
#define nl '\n'
#define loop(n) for (int i = 0; i < n; i++)
#define loop2(n) for (int j = 0; j < n; j++)
#define py cout << "YES" << nl
#define pn cout << "NO" << nl
#define print(ans) cout << ans << nl
#define isEven(n) if (n % 2 == 0)
typedef long long ll;
typedef vector < ll > vll;
typedef vector < int > vi;
typedef vector < char > vch;
template < typename T1, typename T2 >
using vpp = vector < pair < T1, T2 >> ;

template < typename T >
    void inputArray(vector < T > & arr, int n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }

template < typename T >
    void outputArray(vector < T > & arr, int n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << nl;
        }
    }

int t;

vector < vector < int >> arr(3, vector < int > (2));

int main()
{
    cin >> t;
    while (t--) {
        loop(3){
            loop2(2){
                cin>>arr[i][j];
            }
        }
        if((arr[0][0]!=arr[1][0] && arr[1][0]!=arr[2][0] && arr[2][0]!=arr[0][0])
        || (arr[0][1]!=arr[1][1] && arr[1][1]!=arr[2][1] && arr[2][1]!=arr[0][1])){
            py;
        }
        else{
            pn;
        }
    }
    return 0;
}
