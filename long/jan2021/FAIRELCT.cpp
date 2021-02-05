#include <bits/stdc++.h> 

using namespace std;

void doit() {
    int n, m;
    cin >> n >> m;
    vector<int> a;
    vector<int> b;
    
    long long sa = 0, sb = 0;
    int t; 
    
    for(int i = 0; i < n; i++) {
        cin >> t;
        sa += t;
        a.push_back(t);
    }
    
    for(int i = 0; i < m; i++) {
        cin >> t;
        sb += t;
        b.push_back(t);
    }
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());
    
    int nr_swaps = 0;

    if(sa <= sb) {
        for(int i = 0; i < min(m, n); i++) {
            //cout << a[i] << " " << b[i] << endl;
            if(a[i] < b[i]) {
                swap(a[i], b[i]);
                sa = sa - b[i] + a[i];
                sb = sb - a[i] + b[i];
                nr_swaps++;
                //cout << a[i] << " " << b[i] << endl;
            }
            if(sa > sb) {
                break;
            }
        }
    }

    if(sa <= sb)
        cout << -1 << endl;
    else 
        cout << nr_swaps << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--)
	    doit();
	return 0;
}



