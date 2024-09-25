#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 10e8;
#define loop4(l, a, b) for (l = a; l <= b; l++)
#define nl '\n'
#define loop(n) for (int i = 0; i < n; i++)
#define loop2(n) for (int j = 0; j < n; j++)
#define loop3(a, b) for (int k = a; k <= b; k++)
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

// Template functions for input and output
template < typename T >
    void inputArray(vector < T > & arr, int n)
    {
        arr.resize(n);
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

void solve(){
    
}

int t;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> t;
    while (t--) {
        solve();    
    }
    return 0;
}
