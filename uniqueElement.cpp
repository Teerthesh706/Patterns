#include<iostream>
#include<vector>
using namespace std;

int findUnique(vector<int> arr){
    int ans = 0;
    for(int j=0; j<arr.size(); j++){
    ans = ans ^ arr[j];
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"Enter the values:";  
    vector<int> arr(n);
    for(int i=0; i<arr.size();i++){
        cin>>arr[i];
    }
    int uniqueElement = findUnique(arr);
    cout<<"This is the unique element:"<<uniqueElement<<endl;

    return 0;

}