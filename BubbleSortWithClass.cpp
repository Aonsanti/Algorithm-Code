#include <iostream>
//Big O(n**2)
int BubbleSort(int n , int arr[]){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
//Big O(n)
int PrintArray(int arr[] , int n){
    for(int i = 0 ; i < n ; i++){
        std::cout << arr[i] << " ";
    }
}

int main(){
    int n;
    std::cin >> n;

    int arr[n] = {};

    for(int i = 0 ; i < n ; i++){
        std::cin >> arr[i];
    }

    BubbleSort(n , arr);
    PrintArray(arr , n);
}