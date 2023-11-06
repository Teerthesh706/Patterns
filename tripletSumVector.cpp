#include<iostream>
#include<vector>
using namespace std;
int main()
{
    
    vector<int> arr{10, 20, 30, 40, 50};
    for(int i=0; i<arr.size(); i++){
        int element1= arr[i];
        for(int j=1; j<arr.size(); j++){
            int element2= arr[j];
                for(int k=1; k<arr.size(); k++){
                    int element3= arr[k];
                    if(element1 + element2 + element3 == 70){
                        cout<<element1<<"+"<<element2<<"+"<<element3<<"+ = "<<"70"<<endl;
                        // cout<<"("<<element1<<","<<element2<<","<<element3<<")"<<endl;
                    }
            }
        }

    }

}

// 10+20+40+ = 70
// 10+30+30+ = 70
// 10+40+20+ = 70
// 20+20+30+ = 70
// 20+30+20+ = 70
// 30+20+20+ = 70