#include<iostream>
#include<vector>
using namespace std;

vector<int> calculate_impact(vector<int>contirubutions){
    int n= contirubutions.size();
    vector<int>ans(n,1);
    vector<int>prefix(n,1);
    vector<int>suffix(n,1);

    for(int i = 1 ; i<n ; i++ ){
       prefix[i] = prefix[i-1] * contirubutions[i-1];
    }

    for(int i = n-2; i>=0 ; i--){
        suffix[i] = suffix[i+1] * contirubutions[i+1];
    }

    for(int i=0 ; i<n ; i++){
        ans[i] = prefix[i] * suffix[i];
}
return ans;
}

int main(){
    //vector<int>contributions = {1,2,3,4};
    vector<int>contributions = {-1,1,0,-3,3};
    vector<int>impact = calculate_impact(contributions);

    for(int i = 0; i < contributions.size() ;i++){
       cout << impact[i] << " ";
    }
    return 0;
}