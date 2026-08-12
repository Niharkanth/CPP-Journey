#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"ENTER HOW MANY NUMBERS : ";
    int n;
    cin>>n;
    vector<int> a;
    for(int i=1;i<=n;i++){
    cout<<"ENTER "<<i<<" NUMBER : ";
    int x;
    cin>>x;
    a.push_back(x);
    }
    cout<<"ENTER SEARCH NUMBER : ";
    int b;
    cin>>b;
    int low =0;
    int  high =n-1;
    bool found = false;
    int index;
    while(low<=high){
        
        int mid =(low+high)/2;
        if(b==a[mid]){
        found = true;
        index = mid;
        break;
        }
        else if(b<a[mid]){
            high = mid -1;            
        }
        else {
            low = mid + 1;
        }
        }
if(found){
    cout<<"FOUND BRO! AT INDEX : "<<index;
}
    else{
        cout<<"NOT FOUND BRO";
    }
return 0;
}
