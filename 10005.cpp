#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    
    cin>>s;
    string y=s;
    n=s.size();
    if(s[0]>='A'&& s[0]<='Z'){
        cout<<s[0];
    }
    else{
        char c=s[0];
        cout<<(c-'a'+'A');
    }
    
    for(int i=1;i<n;i++){
        if(s[i]>='a'&& s[i]<='z'){

            cout<<s[i];

        }
        else{
            char b=s[i];
            cout<<(b+32);
        }
    }

    


}