#include <bits/stdc++.h>
#define ll long long
#define mod 100000
#define fr(i, a, n) for (int i = (a); i <= (n); i++)
#define s(n) scanf("%d", &(n))
#define sl(n) scanf("%lld", &(n))
#define pii pair<ll, int>
using namespace std;
ll a[1005];

int main()
{
    int t;
    s(t);
    while (t--)
    {
        int cost[10];
        char S[1003];

        fr(i, 0, 9)
        {
            s(cost[i]);
        }
        int dis[10];
        fr(i, 0, 9)
            dis[i] = cost[i];

        int len;
        s(len);
        cin >> S;

        int flag = 1;
        while (flag)
        {
            flag = 0;
            for (int i = 0; i < 10; ++i)
            {
                for (int j = 0; j < 10; ++j)
                {
                    if (dis[(i + j) % 10] > dis[i] + dis[j])
                    {
                        dis[(i + j) % 10] = dis[i] + dis[j];
                        flag = 1;
                    }
                }
            }
        }

        ll Cost = 0;

        fr(i, 0, len - 1)
        {

            Cost += dis[S[i] - '0'];
        }

        cout << Cost << endl;
    }
    return 0;
}