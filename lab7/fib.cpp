#include <iostream>
#include <ctime>

using namespace std;

void iter(){
    int num = 50;
    long long x = 0, y = 1, z = 0;
    for (int i = 0; i < num; i++) {
      cout << x << " " << endl;
      z = x + y;
      x = y;
      y = z;
   }
}

long long binary(long long n){
    if((n==1)||(n==0)){
        return(n);
    }
    else{
        return(binary(n-1)+binary(n-2));
    }
}
long long linear(int n, long long a = 0, long long b = 1){
    if (n == 0){
        return a;
    }
    if (n == 1)
        return b;
    return linear(n - 1, b, a + b);
}

template <typename T>
int binSearch_iterative( const T arr[], int first, int last, const T& target){
    while(first <= last){
        int mid = (first + last)/2;
        if(target == arr[mid]){
            return mid;
        }
        else if(target < arr[mid]){
            last = mid - 1;
        }
        else{
            first = mid + 1;
        }
    }
    return -1;
}

template <typename T>
int binSearch_recursive( const T arr[], int first, int last, const T& target){
    if(first > last){
        return -1;
    }
    int mid = (last + first)/2;
    if(target == arr[mid]){
        return mid;
    }
    else if(target < arr[mid]){
        return binSearch_recursive(arr, first, mid-1, target);
    }
    else{
        return binSearch_recursive(arr, mid + 1, last, target);
    }
}

int main(){

    double start = double(clock()) / CLOCKS_PER_SEC;  
    iter();
    double finish = double(clock()) / CLOCKS_PER_SEC;
    double elapsed = finish - start;
    cout << elapsed << endl;

    int i = 0;

    start = double(clock()) / CLOCKS_PER_SEC;  
    while(i <= 50){
        cout << i << ". " << " " << binary(i) << endl;
        i++; 
    } 
    finish = double(clock()) / CLOCKS_PER_SEC;
    elapsed = finish - start;
    cout << elapsed << endl;

    i = 0;
    start = double(clock()) / CLOCKS_PER_SEC;
    while(i <= 50){
        cout << i << ". " << " " << linear(i) << endl;
        i++;
    } 
    finish = double(clock()) / CLOCKS_PER_SEC;
    elapsed = finish - start;
    cout << elapsed << endl;

    int arr[] ={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int first = 0;
    int last = sizeof(arr)/sizeof(arr[0]) - 1;
    cout << " " << binSearch_iterative(arr, first, last, 5) << endl;
    cout << " " << binSearch_recursive(arr, first, last, 5) << endl;

    return 0;
}
