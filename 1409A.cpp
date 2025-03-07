#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;

    while(t--){

        long long a, b, diff, moves;
        cin>>a>>b;

        diff = abs(a - b);

        moves  = diff/10;
        

        if(diff%10!=0){
            moves++;
        }

        cout<<moves<<endl;
    }

}
