#include <iostream>
using namespace std;
int main()
{
    int count=0;
    int n,k,t;
    cin>>n;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        if(t%k==0)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
