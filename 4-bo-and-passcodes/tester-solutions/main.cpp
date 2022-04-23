#include<iostream>
using namespace std;
int main(void) {
    int t; cin>>t;
    while(t--) {
        int c[10]; for(int i=0; i<10; i++) cin>>c[i];
        int n; string en; cin>>n>>en;
        for(int k=0; k<10; k++) {
            for(int i=0; i<10; i++) {
                for(int j=0; j<10; j++) {
                    int nc = c[i] + c[j];
                    int ni = (i+j)%10;
                    if (nc < c[ni]) c[ni] = nc;
                }
            }
        }
        int cc = 0;
        for(int i=0; i<n; i++) {
            cc += c[en[i]-'0'];
        }
        cout << cc << endl;
    }
    return 0;
}