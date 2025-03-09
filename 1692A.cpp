#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    

    while(t--){

        int a, b, c, d;
        cin>>a>>b>>c>>d;
        int front=0;

        if(b>a){
            front++;
        }
        if(c>a){
            front++;
        }
        if(d>a){
            front++;
        }

        cout<<front<<endl;
    }
}
