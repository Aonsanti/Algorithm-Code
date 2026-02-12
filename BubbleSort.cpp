#include <iostream>
#include <vector>
//BigO(n**2)
using namespace std;
void bubblesort(vector<int>&arr){
    for(int i = 0 ; i < arr.size() ; i++){
        for(int j = 0 ;  j < arr.size() - i - 1  ;  j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void print(vector<int>&arr){
    for(int i = 0 ; i < arr.size() ; i++){
        cout << arr[i] << " ";
    }
}
int main(){
    vector<int> arr = {8,83,10,21,25,41,52,46,49,17,30,58,33,4,86};
    bubblesort(arr);
    print(arr);
}