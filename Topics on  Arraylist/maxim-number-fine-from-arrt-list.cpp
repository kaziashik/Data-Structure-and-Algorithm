#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1,200,100,56};
    int maxNumber=arr[0];
    for(int i=1; i<5;  i++){
        if(maxNumber<arr[i]){
            maxNumber = arr[i];
        }
    }

cout<< "max number is"  <<maxNumber;
return 0;
}