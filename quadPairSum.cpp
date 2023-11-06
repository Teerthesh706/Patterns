#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr{1,2,3,4,5,6,7,8,9,10};
    int sum = 37;
    for(int i=0; i<arr.size(); i++){
        int element1 = arr[i];
        for(int j=0; j<arr.size(); j++){
            int element2 = arr[j];
            for(int k=0; k<arr.size(); k++){
                int element3 = arr[k];
                for(int l=0; l<arr.size(); l++){
                    int element4 = arr[l];
                    if(element1 + element2 + element3 + element4 == sum){
                        cout<<element1<<"+"<<element2<<"+"<<element3<<"+"<<element4<<"="<<sum<<endl;
                    }
                }
            }
        }
    }
    return 0;
}

// The quad number sum:

// 7+10+10+10=37
// 8+9+10+10=37
// 8+10+9+10=37
// 8+10+10+9=37
// 9+8+10+10=37
// 9+9+9+10=37
// 9+9+10+9=37
// 9+10+8+10=37
// 9+10+9+9=37
// 9+10+10+8=37
// 10+7+10+10=37
// 10+8+9+10=37
// 10+8+10+9=37
// 10+9+8+10=37
// 10+9+9+9=37
// 10+9+10+8=37
// 10+10+7+10=37
// 10+10+8+9=37
// 10+10+9+8=37
// 10+10+10+7=37