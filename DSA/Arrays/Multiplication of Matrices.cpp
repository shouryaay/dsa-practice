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
    int product[n][n];
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                sum=sum+arr1[i][k]*arr2[k][j];
            }
            product[i][j]=sum;
            sum=0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        std::cout<<product[i][j]<<" ";
        }
        std::cout<<"\n";
    }
    return 0;
}
