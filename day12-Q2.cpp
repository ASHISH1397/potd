#include<iostream>
#include<vector>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        string g,r;
        int k,i=0,n;
        cin>>n;
        cin>>k;
        cin>>g;
        int st=g[0]-'0';
        while(st>=k && i<g.size()) 
        {
            r+=g[i];
            i++;
            st=g[i]-'0';
        }
        char ch=k+'0';
        r+=ch;
        while(i<g.size())
        {r+=g[i];
        i++;
        }
        cout<<r<<endl;

    }
}