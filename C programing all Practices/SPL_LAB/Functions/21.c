#include<stdio.h>
#include<math.h>

float CalcMean(int arr[],int n){
    float sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    float mean = sum/n;
    return mean;
}

float std_deviation(int arr[],int n){
    float sum=0;
    // Calc Mean():
    float mean = CalcMean(arr,n);
    for(int i=0;i<n;i++){
        sum += ((arr[i] - mean)*(arr[i] - mean));
    }
    float shy = sqrt(sum/n);
    return shy;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    // Take input():
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // Calc_Std_deviation:
    float Deviation = std_deviation(arr,n);
    printf("%.2f",Deviation);
    return 0;
}