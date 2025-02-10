#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m[5][5];
    int x, y;

    for(int i=0; i<5; i++){

        for(int j=0; j<5; j++){
            cin>>m[i][j];

            if(m[i][j]==1){
                
                x=i;
                y=j;
            }
        }
    }

    int move = abs(x-2) + abs(y-2);

    cout<<move;
}
