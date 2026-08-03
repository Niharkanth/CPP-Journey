#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> a;
    int n;
    cout<<"HOW MANY NUMBER YOU WOULD LIKE TO ENTER : ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cout<<"ENTER "<<i+1<<" NUMBER : ";
        cin>>x;
        a.push_back(x);
    }
    int b;
    cout<<"ENTER SEARCH NUMBER : ";
    cin>>b;
    bool found=false;
    int c;
    for(int i=0;i<n;i++){
        if(b==a[i]){
            found = true;
            c=i;
            break;
        }
    }
    if (found){
        cout<<"FOUND IN POSITION NO : "<<c+1;
    }
    else{
        cout<<"NOT FOUND BRO!";
    }
    return 0;
}
