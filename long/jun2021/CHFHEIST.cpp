#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   


    int t;
    cin >> t;

    while(t--) {

        ll D, d, P, Q;
        cin >> D >> d >> P  >> Q;
        ll tot = 0;

        tot = 0;

        tot = P * D;
        ll n = D / d;
        n = n - 1;

        //cout << "n: " << n << endl;

        //cout << tot << "\n";

        ll a = Q * d;
        ll b = Q * n * d;
        
        tot += (n * (a + b)) / 2;

        //cout << tot << "\n";

        //if(d > )
        ll remDays = D % d;
        tot = tot + remDays * (Q * (n + 1));


        //cout << n << "\n";
        cout << tot << "\n";
    }

    return 0;
}

/*

1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
0 0 1 1 2 2 3 3 4 4  5  5  6  6  7

1 2 3 4 5 6
0 0 0 1 1

D, d, P, Q

total = P * D;
n = D / d;
n = n - 1;

1000 * 555 = 55000

1250 * 5


250 * 10 + 500 * 10 + 750 * 10 + 1000 * 10

2500 + 5000 + 7500 + 10000
2500

4*(2500+10000)
-----------------
        2



1 + 2 + 3 + 4 + ... N

n * (n + 1)
-----------
    2



55000 + 250 * 10 + 500 * 10 + 750 * 10 + 1000 * 10 + 1250 * 5


*/