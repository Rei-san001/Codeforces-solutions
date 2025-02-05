#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    vector<char> s1;

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    for(int i=0; i<s.size(); i++){
        if(s[i]!='a' && s[i]!='o' && s[i]!='y' && s[i]!='e' && s[i]!='u' && s[i]!='i'){
            s1.push_back(s[i]);
        }
            
    }
    // for(int i=0; i<s1.size(); i++){
    //     cout<<"."<<s1[i];
    // }
    for(auto it:s1)
        cout<<"."<<it;

}
