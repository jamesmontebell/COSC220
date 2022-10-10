#include <iostream>

using namespace std;

double mean(double list[], int length);
double mean2(double *list, int length);

int main(){
        int i;
        int n;
        
        cout << "Enter size of array ";
        cin >> n;
        
        double numbers[n];
        double *numbersptr = numbers;

        for(i = 0; i < n; i++){
                cout << "Enter numbers ";     
                cin >> numbers[i];
        }

        mean(numbers, n);
            
        mean2(numbersptr, n);
        
        return 0;
} 

double mean(double list[], int length){
    int x;
    double sum;
    double mean;
    for(x = 0; x < length; x++){
        sum = sum + list[x];
    }
    mean = sum / length;
    
    cout << mean << endl;
    
    return mean;
}

double mean2(double* list, int length){

    

    int x;
    double sum = 0;
    double mean;
    for(x = 0; x < length; x++){
        sum = sum + *list;
        list++;
    }
    mean = double(sum) / length;
    
    cout << mean << endl;
    
    return mean;
}
