/*
int min =*min_element(v.begin(),v.end());
int max =*max_element(v.begin(),v.end());
int sum=accumulate(v.begin(),v.end(),0);
int ct=count(v.begin(),v.end(),number);
reverse(v.begin(),v.end());
ios_base::sync_with_stdio(false);
cin.tie(NULL);
*/
bool isPrime(int n)
{
    static int i = 2;
 
    // corner cases
    if (n == 0 || n == 1) {
        return false;
    }
 
    // Checking Prime
    if (n == i)
        return true;
 
    // base cases
    if (n % i == 0) {
        return false;
    }
    i++;
    return isPrime(n);
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define MOD 1000000007
#define you_should_not_stalk_me ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
int main()
{
you_should_not_stalk_me;
ll t;
cin>>t;
while(t--)
{
ll n; cin>>n;
string s;cin>>s;

cout<<s[n-1]<<endl;
}
return 0;
}