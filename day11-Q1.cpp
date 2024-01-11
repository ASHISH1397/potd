#include<iostream>

using namespace std;

int  main(){

    int n;
    cin>>n;


    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<n;i++){
        
        if(s[i]=='x' && s[i+1]=='x' && s[i+2]=='x'){
            count++;
        }
    }
     cout<<count<<endl;
}