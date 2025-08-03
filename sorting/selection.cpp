#include <bits/stdc++.h>
using namespace std;

// void selection_sort(int arr[], int n)
// {
//   for (int i = 0; i <= n - 2; i++)
//   {
//     int mini = i;
//     for (int j = i; j <= n - 1; j++)
//     {
//       if (arr[j] < arr[mini])
//       {
//         mini = j;
//       }
//     }
//     // swap
//     int temp = arr[mini];
//     arr[mini] = arr[i];
//     arr[i] = temp;
//   }
// }

// void bubble_sort(int arr[], int n)
// {

//   for (int i = n - 1; i >= 1; i--)
//   {
//     int didswap = 0;
//     for (int j = 0; j <= i - 1; j++)
//     {
//       if (arr[j] > arr[j + 1])
//       {
//         // swap
//         int temp = arr[j];
//         arr[j] = arr[j + 1];
//         arr[j + 1] = temp;
//         didswap = 1; // we did a swap
//       }
//     }
//     if (didswap == 0)
//     {
//       // no swap means array is sorted
//       break;
//     }
//   }
// }

// void insertion_sort(int arr[], int n){

//   for(int i=0; i<=n-1; i++){
//     int j=i;
//      while(j>0 && arr[j-1]>arr[j]){
//       int temp = arr[j-1];
//       arr[j-1] = arr[j];
//       arr[j] = temp;
//       j--;
//      }
//   }
// }

// int main()
// {
//   int n;
//   cin >> n;
//   int arr[n];
//   for (int i = 0; i < n; i++)
//   {
//     cin >> arr[i];
//   }

//   // before sorting

//   for (int i = 0; i < n; i++)
//   {
//     cout << arr[i] << " ";
//   }
//   cout << endl;

//   // selection_sort(arr, n);
//   // bubble_sort(arr, n);
//   //  insertion_sort(arr, n);

//   // after sorting
//   for (int i = 0; i < n; i++)
//   {
//     cout << arr[i] << " ";
//   }
//   return 0;
// }

// for merge sort

// void merge(vector<int> &arr, int low, int mid, int high){
//   vector<int> temp;
//   int left = low;
//   int right = mid+1;

//   while(left<=mid && right<=high){
//     if(arr[left] <= arr[right]){
//       temp.push_back(arr[left]);
//       left++;
//     }
//     else{
//       temp.push_back(arr[right]);
//       right++;
//     }
//   }

//   while(left<=mid){
//     temp.push_back(arr[left]);
//     left++;
//   }

//   while(right<=high){
//     temp.push_back(arr[right]);
//     right++;
//   }

//   //copying back to original array
//   for(int i=low; i<=high; i++){
//     arr[i] = temp[i-low];
//   }

// }

// void ms(vector<int> &arr, int low, int high){

//   if(low >= high) return;

//   int mid = (low+high)/2;
//   ms(arr, low, mid);
//   ms(arr, mid+1, high);
//   merge(arr, low, mid, high);

// }

// quick sort

int partition(vector<int> &arr, int low, int high)
{
  int pivot = arr[low];
  int i = low;
  int j = high;

  while (i < j)
  {

    while (arr[i] <= pivot && i <= high - 1)
    {
      i++;
    }

    while (arr[j] > pivot && j >= low + 1)
    {
      j--;
    }

    if (i < j)
      swap(arr[i], arr[j]);
  }

  swap(arr[low], arr[j]);
  return j; // returning the pivot index
}

void qs(vector<int> &arr, int low, int high)
{
  if (low < high)
  {
    int pindex = partition(arr, low, high);
    qs(arr, low, pindex - 1);
    qs(arr, pindex + 1, high);
  }
}

int main()
{

  vector<int> arr = {5, 2, 9, 1, 15, 6};
  int n = arr.size();

  cout << "Before Sorting Array: " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  // ms(arr, 0, n-1);
  qs(arr, 0, n - 1);

  cout << "After Sorting Array: " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
