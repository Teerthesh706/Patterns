#include<iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout<< "Enter the Number:";
    cin>>n;
    for(i=0;i<=n;i++){
        for (j=0;j<i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}