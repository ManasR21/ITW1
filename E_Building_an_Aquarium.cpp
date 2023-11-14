/*
int min =*min_element(v.begin(),v.end());
int max =*max_element(v.begin(),v.end());
int sum=accumulate(v.begin(),v.end(),0);
int ct=count(v.begin(),v.end(),number);
reverse(v.begin(),v.end());
ios_base::sync_with_stdio(false);
cin.tie(NULL);
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define MOD 1000000007
#define you_should_not_stalk_me ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
int main()
{
you_should_not_stalk_me;
ll t;
cin >> t;
while (t--)
{
    ll n, x;
    cin >> n >> x;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) cin >> v[i];
    ll l = 0;
    ll r = 3e9;
    while (l+1<r)
    {
        ll sum = 0, mid = (l + r) / 2;
        for (auto it : v) sum += mid - min(it, mid);
        if (sum <= x) l = mid;
        else r = mid;
    }
    cout <<l<< endl;
}
return 0;
}