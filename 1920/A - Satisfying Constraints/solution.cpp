#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> not_equal;
        int mn = 0;
        int mx = 1000000004;
        for (int i = 0; i < n; i++)
        {
            int a, x;
            cin >> a >> x;
            if (a == 1)
            {
                mn = max(mn, x);
            }
            else if (a == 2)
            {
                mx = min(mx, x);
            }
            else
            {
                not_equal.push_back(x);
            }
        }
        if (mx < mn)
        {
            cout << 0 << "\n";
            continue;
        }
        int count = mx - mn + 1;
        for (int i = 0; i < not_equal.size(); i++)
        {
            if (not_equal[i] >= mn && not_equal[i] <= mx)
            {
                count--;
            }
        }
        cout << count << "\n";
    }
    return 0;
}