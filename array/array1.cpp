#include <bits/stdc++.h>
using namespace std;

// finding ma element in array bruteforce approach
//  findmax(vector<int> &arr){
//    sort(arr.begin(), arr.end());
//    return arr[arr.size()-1];
//  }

// int main(){
//   vector<int> arr= {1,4,2,8,12,5};
//   int n = sizeof(arr)/sizeof(arr[0]);

//   cout << "max element is" << findmax(arr) <<endl;

//   return 0;
// }

// finding max element in array using optimal approach, max element approach

// int findmax(int arr[], int n){
//   int max = arr[0];
//   for(int i=0; i<n; i++){
//     if(arr[i]>max){
//       max = arr[i];
//     }
//   }
//   return max;
// }

// int main()
// {
//  int arr[] = {1, 4, 2, 8, 12, 65, 34};
//   int n = sizeof(arr) / sizeof(arr[0]);

//   cout << "max element is" << findmax(arr, n) << endl;

//   return 0;
// }

// to find second largest element without using sorting

// using sorting approach, but this will work if there is no duplicates

// int findseclar(int arr[], int n){

//   if(n==1 || n==0){
//     return -1;
//   }
//   sort(arr, arr+n);
//   return arr[n-2];
// }

// sorting approach when there is duplicates

// int findseclar(int arr[], int n)
// {

//   if (n == 1 || n == 0)
//   {
//     return -1;
//   }
//   sort(arr, arr + n);
//   for(int i=n-2; i>=0; i--){
//     if(arr[i] != arr[n-1]){
//       return arr[i];
//     }
//   }
// }

// better appraoch to find second largest or second smallest using 2 loops, first for finding largest , after that find second largest

int findseclar(int arr[], int n)
{

  int lar = arr[0];
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > lar)
    {
      lar = arr[i];
    }
  }

  int slar = -1;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > slar && arr[i] != lar)
    {
      slar = arr[i];
    }
  }

  return slar;
}

// optimal approach to find second largest element in array

// int findseclar(int arr[], int n)
// {

//   int lar = arr[0], slar = -1;

//   for (int i = 0; i < n; i++)
//   {
//     if (arr[i] > lar)
//     {
//       slar = lar;
//       lar = arr[i];
//     }
//     else if (arr[i] < lar && arr[i] > slar)
//     {
//       slar = arr[i];
//     }
//   }

//   return slar;
// }

// int main()
// {
//   int arr[] = {1, 4, 4, 8, 20, 65, 65};
//   int n = sizeof(arr) / sizeof(arr[0]);

//   cout << "second largest element is" << findseclar(arr, n) << endl;

//   return 0;
// }

// Q.3 to check is if the array is sorted or not

// bool issorted(int arr[], int n)
// {

//   for (int i = 0; i < n - 1; i++)
//   {

//     if (arr[i] > arr[i + 1])
//     {
//       return false;
//     }
//   }

//   return true;
// }

// int main()
// {
//   int arr[] = {1, 4, 4, 8, 20, 65, 35};
//   int n = sizeof(arr) / sizeof(arr[0]);

//   printf("%s", issorted(arr, n) ? "True" : "False");

//   return 0;
// }

// Q.4 remove dupliacts from sorted array

// bruteforce approach
int removeDuplicates(int arr[], int n)
{

  set<int> set;

  for (int i = 0; i < n; i++)
  {
    set.insert(arr[i]);
  }

  int k = set.size();
  int j = 0;
  for (int x : set)
  {
    arr[j++] = x;
  }

  return k;
}

// optimal approach, two pointer approach

// int removeDuplicates(int arr[], int n){

//   // sort(arr, arr + n); // sorting the array first

//   int i=0;
//   for(int j=1; j<n; j++){
//     if(arr[i]!=arr[j]){
//       i++;
//       arr[i]=arr[j];
//     }
//   }

//   return i+1; // returning the new length of the array after removing duplicates

// }

// int main()
// {
//   int arr[] = {1, 4, 4, 8, 8, 6, 5};
//   int n = sizeof(arr) / sizeof(arr[0]);

//   int k = removeDuplicates(arr, n);

//   cout<<"after duplicate removal"<<endl;

//   for(int i = 0; i < k; i++)
//   {
//     cout << arr[i] << " ";
//   }

//   return 0;
// }

// Q.5 to left rotate array by 1 place
// bruteforce approach

// void leftrotate(int arr[], int n){
//   int temp[n];

//   for(int i=1; i<n; i++){
//     temp[i-1] = arr[i];

//   }

//   temp[n-1] = arr[0]; // last element will be first element

//   for(int i=0; i<n; i++){
//     cout<<temp[i]<<endl;
//   }
// }

// optimal approach, not using another new array

// void leftrotate(int arr[], int n){
//   int temp = arr[0];

//   for(int i=0; i<n-1; i++){
//     arr[i] = arr[i+1];
//   }

//   arr[n-1] = temp; // last element will be first element

//   for(int i=0; i<n; i++){
//     cout << arr[i] << endl;
//   }
// }

// int main(){
//   int n= 7;
//   int arr[]=  {1, 2, 3, 4, 5, 12, 8};

//   leftrotate(arr, n);

//   return 0;
// }

// Q. no 6, rotate array by k places
// bruteforce approach

// void leftrotate(int arr[], int n, int k)
// {

//   k = k%n; // to handle cases where k is greater than n
//   if (k == 0)
//   {
//     return; // no rotation needed
//   }
//   int temp[k];

//   for (int i = 0; i < k; i++)
//   {
//     temp[i] = arr[i];
//   }

//   for (int i = k; i < n; i++)
//   {
//     arr[i - k] = arr[i];
//   }

//   for (int i = n - k; i < n; i++)
//   {
//     arr[i] = temp[i - (n - k)];
//   }
// }

// int main()
// {
//   int n = 7;
//   int arr[] = {1, 2, 3, 4, 5, 12, 8};
//   int k = 2;

//   leftrotate(arr, n, k);

//   cout << "after left rotation by " << k << " places" << endl;
//   for (int i = 0; i < n; i++)
//   {
//     cout << arr[i] << " ";
//   }

//   return 0;
// }

// optimal approach

// shortcut way using reverse function of c++
// void leftrotate(int arr[], int n, int k)
// {
//   k = k%n;
//   if(k==0){
//     return;
//   }

//   reverse(arr, arr+k);

//   reverse(arr+k,arr+n);

//   reverse(arr, arr+n);

// }

// using our own reverse function
//  void Reverse(int arr[], int start, int end)
//  {

//   while(start<=end){
//     int temp = arr[start];
//     arr[start] = arr[end];
//     arr[end] = temp;
//     start++;
//     end--;
//   }

// }
// void leftrotate(int arr[], int n, int k)
// {
//   k = k % n;
//   if (k == 0)
//   {
//     return;
//   }

//   Reverse(arr, 0, k-1);

//   Reverse(arr, k, n-1);

//   Reverse(arr,0, n-1);
// }

// int main()
// {
//   int n = 7;
//   int arr[] = {1, 2, 3, 14, 5, 123, 8};
//   int k = 2;

//   leftrotate(arr, n, k);

//   cout << "after left rotation by " << k << " places" << endl;
//   for (int i = 0; i < n; i++)
//   {
//     cout << arr[i] << " ";
//   }

//   return 0;
// }

// Qno.7 , move zeros to the end
// bruteforce method, tc= O(2n)

// void moveZero(int arr[], int n)
// {
//   vector<int> vec;
//   for (int i = 0; i < n; i++)
//   {
//     if (arr[i] != 0)
//     {
//       vec.push_back(arr[i]);
//     }
//   }

//   int k = vec.size();
//   int j = 0;

//   for (int x : vec)
//   {
//     arr[j++] = x;
//   }

//   for (int i = k; i < n; i++)
//   {
//     arr[i] = 0;
//   }
// }

// optimal approach, using two pointers

// void moveZero(int arr[], int n)
// {
//   int j = -1;

//   for (int i = 0; i < n; i++)
//   {
//     if (arr[i] == 0)
//     {
//       j = i;
//       break;
//     }
//   }

//   if (j == -1)
//     return;

//   // increase i and j and swap accordingly
//   for (int i = j + 1; i < n; i++)
//   {
//     if (arr[i] != 0)
//     {
//       swap(arr[i], arr[j]);
//       j++;
//     }
//   }
// }

// int main()
// {
//   int n = 6;
//   int arr[] = {1, 0, 2, 3, 0, 51};

//   moveZero(arr, n);

//   cout << "zero to end" << endl;
//   for (int i = 0; i < n; i++)
//   {
//     cout << arr[i] << " ";
//   }

//   return 0;
// }

// qno.8 Linear search
// given an int num, find its first position when it occur, if not occur return -1

// int search(int arr[], int n, int num){
//   for(int i=0; i<n; i++){
//     if(arr[i]==num){
//       return i;
//     }
//   }

//   return -1;
// }

// int main()
// {
//   int n = 6;
//   int arr[] = {1, 0, 2, 3, 0, 51};
//   int num =3;

//   int index = search(arr, n, num);

//   cout<< "my index is"<<index<<endl;

//   return 0;
// }

// Q.no. 9 find the unionArr of two sorted arrays

// bruteforce approach, using set

// vector<int> setunionArr(vector<int> v1, vector<int> v2)
// {
//   set<int> st;
//   int n1 = v1.size();
//   int n2 = v2.size();

//   for (int i = 0; i < n1; i++)
//   {
//     st.insert(v1[i]);
//   }

//   for (int i = 0; i < n2; i++)
//   {
//     st.insert(v2[i]);
//   }

//   vector<int> temp;

//   for (auto it : st)
//   {
//     temp.push_back(it);
//   }

//   return temp;
// }

// optimal appraoch using two pointer, optimal appraoch only work for sorted, but bruteforce uses set , so it can work for unsorted aray as well as set can automatically sort them while storing

// vector<int> setunionArr(vector<int> a, vector<int> b){
//   int n1= a.size();
//   int n2= b.size();

//   int i=0;
//   int j=0;
//   vector<int> unionArr;

//   while(i<n1 && j<n2){
//     if(a[i]<=b[j]){
//       if(unionArr.size()==0 || unionArr.back()!=a[i]){
//         unionArr.push_back(a[i]);
//       }
//       i++;
//     }else{
//       if(unionArr.size()==0 || unionArr.back()!=b[j]){
//         unionArr.push_back(b[j]);
//       }
//       j++;
//     }
//   }

//   while(i<n1){
//     if(unionArr.back()!=a[i]){
//       unionArr.push_back(a[i]);
//     }
//     i++;
//   }

//   while(j < n2)
//   {
//     if (unionArr.back() != b[j])
//     {
//       unionArr.push_back(b[j]);
//     }
//     j++;
//   }
//   return unionArr;
// }

// int main()
// {

//   vector<int> v1 = {1, 6, 8, 11, 12, 24};
//   vector<int> v2 = {6, 8, 11, 22, 24};

//   // int num = 3;
//   vector<int> v3;

//   v3 = setunionArr(v1, v2);

//   int n = v3.size();
//   for (int i = 0; i < n; i++)
//   {
//     cout << v3[i] << endl;
//   }

//   return 0;
// }

// qno.10 find the missing number

// bruteforce appraoch

int missingNumber(vector<int> &a, int N)
{

  for (int i = 1; i <= N; i++)
  {

    int flag = 0;

    for (int j = 0; j < N - 1; j++)
    {
      if (a[j] == i)
      {
        flag = -1;
        break;
      }
    }

    if (flag == 0)
      return i;
  }

  return -1;
}

int main()
{
  int N = 5;
  vector<int> a = {1, 2, 3, 5};
  int ans = missingNumber(a, N);
  cout << "misssing number" << ans << endl;
  return 0;
}
