#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    cin>>n;
    vector <int>arr(n+1);
    for(int i=1;i<=n+1;i++)
       cin>>arr[i+1];
    for(int i=1;i<=n+1;i++)
    {
        if(arr[i]<=i)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    
    return 0;   
}
