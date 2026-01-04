#include<iostream>
#include<vector>
using namespace std;

vector<int> calculate_impact(vector<int> contributions){
    int n=  contributions.size();
    vector<int>ans(n,1);
    

    for(int i = 1 ; i<n ; i++ ){
       ans[i] = ans[i-1] *  contributions[i-1];
    }
    int suffix = 1;
    for(int i = n-2; i>=0 ; i--){
        suffix *= contributions[i+1];
        ans[i] *= suffix;
    }
return ans;
}

int main(){
    vector<int>contributions = {1,2,3,4};
    //vector<int>contributions = {-1,1,0,-3,3};
    vector<int>impact = calculate_impact(contributions);

    for(int i = 0; i < contributions.size() ;i++){
       cout << impact[i] << " ";
    }
    return 0;
}