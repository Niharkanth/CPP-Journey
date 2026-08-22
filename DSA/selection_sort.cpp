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
        for(int j=0;j<n-1;j++){
            int min_idx = j;
            for(int i=j+1;i<n;i++){
                if(a[i]<a[min_idx]){
                    min_idx = i;
                }
            }
            swap(a[j],a[min_idx]);
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        return 0;
}
