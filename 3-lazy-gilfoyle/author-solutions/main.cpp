#include<iostream>
#include<vector>
using namespace std;
int main(void) {
    int n; cin>>n;
    int a[n]; for(int i=0; i<n; i++) cin>>a[i];
    long long reward = 0;
    vector<int> s;
    for(int i=0; i<n; i++) {
        while (!s.empty() && a[s.back()] < a[i]) s.pop_back();
        int prev = -1;
        if (!s.empty()) prev = s.back();
        long long count = i-prev;
        reward += count * a[i];
        s.push_back(i); 
    }
    cout << reward << endl;
    return 0;
}