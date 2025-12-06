#include <iostream>
int main(){
    int n;
    std::cin>>n;
    int arr1[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            std::cin>>arr1[i][j];
        }
    }
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        std::cout<<arr1[i][j]<<" ";
        }
        std::cout<<"\n";
    }
    int arr2[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            std::cin>>arr2[i][j];
        }
    }
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        std::cout<<arr2[i][j]<<" ";
        }
        std::cout<<"\n";
    }    
    int arr3[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr3[i][j]=arr1[i][j]+arr2[i][j];
            }
        }
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        std::cout<<arr3[i][j]<<" ";
        }
        std::cout<<"\n";
    }   
    return 0;
}
