#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin>>s;
    n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y'||s[i]=='y'){
            cout<<"";
            
        }
        else{
        if(s[i]>='a'&&s[i]<='z'){
            cout<<"."<<s[i];
        }
        else{
            s[i]=s[i]+32;
            cout<<"."<<s[i];
        }
        }
    }
    


}