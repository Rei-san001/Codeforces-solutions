#include <bits/stdc++.h>
using namespace std;
int main()
{
    string user;
    cin>>user;

    unordered_set<char> newchar; //stores distinct characters
    
    for(char c : user){
        newchar.insert(c);
    }

    // for(int i=0; i<user.lenght(); i++){  //using for loop
    //     newchar.insert(user[i]);
    // }



    if(newchar.size()%2==0){    //it doesn't have length function that's why "size"
        cout<<"CHAT WITH HER!";
    }
    else
        cout<<"IGNORE HIM!";
}
