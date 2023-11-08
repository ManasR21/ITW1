#include <bits/stdc++.h>
using namespace std;
int main()
{
   
    int t;
    cin>>t;
    while(t--)
    {   
        int a,b;
        cin>>a>>b;
        if(a > b){
            int x=b;
            b=a;
            a=x;
        }
        if(a*2 <= b){
            cout<<a<<endl;
        }
        else if(a==0 || b==0){
            cout<<"0\n";
        }
        else{
            cout<<(a+b)/3<<endl;
        }
    }
 
    return 0;
}
