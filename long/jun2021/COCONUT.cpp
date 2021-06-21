#include<iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int xa, xb;
        int A, B;
        cin >> xa >> xb >> A >> B;
        cout << ((A / xa) + (B / xb)) << endl;
    }
}