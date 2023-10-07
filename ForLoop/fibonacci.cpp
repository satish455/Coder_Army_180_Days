#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int last=0;
    int prev=1;
    int current=0;

    for(int i=1;i<=n;i++){

        if(i==1){
            cout<<last;
            continue;
        }

        if(i==2){
            cout<<prev;
            continue;
        }

        current=last+prev;
        prev=current;
        last=prev;

        cout<<current;
        cout<<" ";
    }
    
}