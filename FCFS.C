#include <stdio.h>
int N;   // Number of Processes
int At[100];  //Arrival timr array
int Bt[100];   //Burst Time Array
void inputData();
void calculate();
int main(){
    printf(" Hello ");
    return 0;
}

void inputData(){
    printf("Enter the NUmber of processes ");
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        printf("Enter the Arrival Time of Process P%d",i);
        scanf("%d",&At[i]);
        printf("Enter the Burst Time of Process P%d",i);
        scanf("%d",&Bt[i]);
    }
}