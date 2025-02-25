#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w;
    cin>>k>>n>>w;
    int total=0, needed=0;

    for(int i=1; i<=w; i++){
        
        total += k*i;

        if(n<total){
            needed = (total - n);
        }
    }

    cout<<needed;
}
