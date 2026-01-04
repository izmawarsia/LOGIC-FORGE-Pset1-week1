#include<iostream>
#include<vector>
using namespace std;

double findMedian(vector<int>scoresA, vector<int>scoresB){
int m = scoresA.size();
int n = scoresB.size();
int i = 0,j = 0;
int count = 0;
int curr = 0, prev = 0;

while(count <= (m + n)/2){
    prev = curr;
    if(i<m && scoresA[i] < scoresB[j] ){
        curr = scoresA[i++];
    }else{
        curr = scoresB[j++];
    }
    count++;
}
if((m+n) % 2 == 1){
    return (double)curr;
}else{
    return(prev + curr) / 2.0;
}
}

int main(){
    // example 1
    // vector<int>scoresA = {1,3};
    // vector<int>scoresB = {2};
    
    // example 2 
    vector<int>scoresA = {1,2};
    vector<int>scoresB = {3,4};
    double median = findMedian(scoresA, scoresB);
    //cout << "For scoresA = {1,3} and scoresB = {2} , Median is: " << median;
    cout << "For scoresA = {1,2} and scoresB = {3,4} , Median is: " << median;

    return 0;
}