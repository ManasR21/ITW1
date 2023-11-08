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
#define endl "\n"
int main()
{
you_should_not_stalk_me;
    string s;
    cin>>s;
    ll count=0;
        for(int i=0;i<s.size();i++) if(s[i]=='4'||s[i]=='7') count++;
        if(count==7 || count==4) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    
 return 0;
}