#include<iostream>
using namespace std;
 
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main(void) {
    int n; cin>>n;
    int a[n]; for(int i=0; i<n; i++) cin>>a[i];
    int lcm = a[0];
    for(int i=1; i<n; i++) {
        lcm = (((a[i] * lcm)) / (gcd(a[i], lcm)));
    }
    cout << lcm << endl;
    return 0;
}