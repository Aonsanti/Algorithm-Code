#include <iostream>

int main(){
    int n;
    std::cin >> n; 

    int arr[n] = {}; //give arr size of n

    //get input and store to arr[i]
    for(int i = 0 ; i < n ; i++){
        std::cin >> arr[i];
    }

    //bubble sort
    for (int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(arr[j] > arr[j+1]){
                //swap
                int temp = arr[j+1];
                arr[j+1] = arr[j]; 
                arr[j] = temp;
            }
        }
    }
    for (int i = 0 ; i < n ; i++){
        std::cout << arr[i] << " ";
    }
}