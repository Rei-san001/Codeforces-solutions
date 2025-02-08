#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, y, z, count=0;
    cin>>n;

    while(n--){
        cin>>x>>y>>z;

        if(x+y+z>=2){
            count++;
        }
    }
    cout<<count;
}
