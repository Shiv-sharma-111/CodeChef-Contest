#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

int main() {
    int n, h = 0;
    cin >> n;
    vector<int> a(n);
    for (int& x : a) {
        cin >> x;
        h = max(h, x);
    }
    h++;
    vector<ll> c(h), d(h);
    for (int x : a)
        c[x]++;

    for (int i=1; i<h; i++)
        for (int j=i; j<h; j+=i)
            d[i] += c[j];


    for (int i=1; i<h; i++)
        d[i] *= d[i];

    for (int i=h-1; i>0; i--)
        for (int j=2*i; j<h; j+=i)
            d[i] -= d[j];

    for (int i=1; i<h; i++) {
        if (d[i]) {
            cout << i << '\n';
            return 0;
        }
    }
}
