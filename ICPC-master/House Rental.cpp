/*
#include<iostream>
#include <algorithm>
#include<vector>

 using namespace std;
 
 struct facil {
 int point;
 int kind;
 };
 
 bool CompareObj(facil first, facil second) {
 return first.point < second.point;
 }

 int main() {
 
     int n,k;
     cin >> k>>n;
     int count=0;
     vector<facil> arr;
     facil a;
     int left = 0;
     int right = -1;
     int res_L = 0;
     int res_R = 0;
     int dist=1000000000;
 
     for (int i = 0; i < n; i++) {
        cin >> a.point>>a.kind;
        arr.push_back(a);
     }
     arr.resize(n);
 
 sort(arr.begin(),arr.end(),CompareObj);
    
 int *facility = new int[k+1];
 
 for (int i = 0; i < k + 1; i++)
     facility[i] = 0;
    
while(right<n){

 if (count == k) {
     int mid=(arr[right].point+arr[left].point)/2;
     if(max(mid-arr[left].point , arr[right].point-mid)< dist){
         res_L = left;
         res_R = right;
         dist=max(mid-arr[left].point,arr[right].point-mid);
     }
     facility[arr[left].kind]--;
 
     if (facility[arr[left].kind] == 0)
         count--;
     
     left++;
 }// end of if
 else{
     
     
     
    right++;
    if(right==n) break;
    facility[arr[right].kind]++;
    if (facility[arr[right].kind] == 1)
        count++;
 } //end of else
} //end of while
     cout<<arr[res_L].point+(arr[res_R].point-arr[res_L].point)/2<<endl;
   
     return 0;
 }

*/
