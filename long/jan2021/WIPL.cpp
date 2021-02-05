#include <bits/stdc++.h> 
using namespace std;


void doit() {
    long long n, k;
    cin >> n >> k;
    
    long long sum = 0;
    
    vector<int> a;
    for(int i = 0; i < n; i++) {
        int t;
        cin >> t;
        sum += t;
        a.push_back(t);
    }
    
    sort(a.begin(), a.end(), greater<int>());
    
    int xs = 0;
    int ys = 0;
    int b = 0;
    
    for(int i = 0; i < n; i++) {
        
        if(xs >= k && ys >= k) {
            break;
        }
        
        if(xs < k && ys >= k) {
            xs += a[i]; b++;
        }
        else if(ys < k && xs >= k) {
            ys += a[i]; b++;
        } 
        else {
            long long rs = sum - a[i];
            
            if(xs < k && (xs + a[i]) <= k) {
                xs += a[i]; b++;
            }
            else if(ys < k && (ys + a[i]) <= k) {
                ys += a[i]; b++;
            }
            else if(xs < k && rs >= (k - ys)) {
                xs += a[i]; b++;
            } else if(ys < k) {
                ys += a[i]; b++;
            }
        }
        
        sum -= a[i];
        
        cout << xs << " " << ys << " " << sum << endl;
    }
    
    // for(int i = 0; i < n; i++) {
    //     if(xs < k && (xs + a[i]) <= k) {
    //         xs = xs + a[i];
    //         b++;
    //     } 
    //     else if(ys < k && (ys + a[i]) <= k) {
    //         ys = ys + a[i];
    //         b++;
    //     }
    //     else if(xs >= k && ys < k) {
    //         ys = ys + a[i];
    //         b++;
    //     }
    //     else if(ys >= k && xs < k) {
    //         xs = xs + a[i];
    //         b++;
    //     } 
    //     else if(xs < k) {
    //         xs = xs + a[i];
    //         b++;
    //     } 
    //     else if(ys < k) {
    //         ys = ys + a[i];
    //         b++;
    //     } 
        
    //     if(xs >= k && ys >= k)
    //         break;

    //     sum -= a[i];
        
    //     cout << xs << " " << ys << endl;
    // }
    
    //cout << xs << " " << ys << endl;
    
    if(xs >= k && ys >= k) {
        cout << b << endl;
    } else {
        cout << -1 << endl;
    }
    
    //cout << b << endl;
}



int main() {
	int t;
	cin >> t;
	while(t--)
	    doit();
	return 0;
}