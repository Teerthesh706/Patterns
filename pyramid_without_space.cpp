#include<iostream>
using namespace std;
int main()
{
    int n, i, j, k, l;
    cout<< "Enter the Number:";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=n;j>i;j--){
            cout<<" ";
        }
        for(k=0;k<i;k++){
                cout<<"*";
            }
            for(l=1;l<i;l++){
                cout<<"*";
            }    
        cout<<endl;
    }
}