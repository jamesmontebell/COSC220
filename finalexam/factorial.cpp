#include <iostream>
using namespace std;

void iter(int n){
    int i = n, sum = 1;
    while(i != 0){
        sum = sum * i;
        i--;
    }
    cout << " " << sum << endl;
}

int main(){
    iter(5);
}