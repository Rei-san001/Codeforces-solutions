#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int f;
    
    if(n%2==0){

        f = n / 2;
    }

    else{
        f = -(n+1)/2;
    }

    cout<<f;
}
