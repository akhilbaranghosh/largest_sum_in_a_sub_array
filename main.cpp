#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int largest_sum=arr[0];
    int till_largest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]+till_largest>till_largest){
            till_largest=arr[i]+till_largest;
        }
        else{
            till_largest=arr[i];
        }
        if(till_largest>largest_sum)largest_sum=till_largest;
    }
    cout << largest_sum;
}