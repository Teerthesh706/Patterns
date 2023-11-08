#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the capacity of vector:";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the 0, 1 & 2 only =";
    for(int l=0; l<arr.size(); l++){
        cin>>arr[l];
    }

    int start=0;
    int m=0;
    int end = arr.size()-1;
    for(int i=0; i<arr.size(); i++){
    if(arr[m]==0){
        swap(arr[m],arr[start]);
        m++;
        start++;
    }
    else if(arr[m]==1){
        swap(arr[start],arr[m]);
        m++;
        
    }
    else {
        swap(arr[m],arr[end]);
        end--;
    }
    }
    for(int j=0; j<arr.size(); j++){
            cout<<arr[j]<<" ";
    }

    return 0;
    
    
    // int count0 = 0;
    // int count1 = 0;
    // int count2 = 0;
    // for(int i=0; i<arr.size(); i++){
    //   if(arr[i]==0){
    //     count0++;
    //   }
    //   else if(arr[i]==1){
    //     count1++;
    //   } 
    //   else if(arr[i]==2){
    //     count2++;
    //   } 
    //   else{
    //     cout<<"Element is not in vector"<<endl;
    //   }
      
    // }
    // cout<<count0<<","<<count1<<","<<count2<<endl;        
}

