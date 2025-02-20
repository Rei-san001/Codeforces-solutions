#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a, b, place=0;

    while(t--){

        cin>>a>>b;

        if(b-a>=2){
            place++;
        }
    }

    cout<<place;
}
