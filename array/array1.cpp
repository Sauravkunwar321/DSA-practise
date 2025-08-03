#include <bits/stdc++.h>
using namespace std;




//finding ma element in array bruteforce approach 
// findmax(vector<int> &arr){
//   sort(arr.begin(), arr.end());
//   return arr[arr.size()-1];
// }


// int main(){
//   vector<int> arr= {1,4,2,8,12,5};
//   int n = sizeof(arr)/sizeof(arr[0]);

//   cout << "max element is" << findmax(arr) <<endl;

//   return 0;
// }



//finding max element in array using optimal approach, max element approach


int findmax(int arr[], int n){
  int max = arr[0];
  for(int i=0; i<n; i++){
    if(arr[i]>max){
      max = arr[i];
    }
  }
  return max;
}

int main()
{
 int arr[] = {1, 4, 2, 8, 12, 65, 34};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "max element is" << findmax(arr, n) << endl;

  return 0;
}