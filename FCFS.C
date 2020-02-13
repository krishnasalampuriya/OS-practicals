#include <stdio.h>
int N;   // Number of Processes
int At[100];  //Arrival timr array
int Bt[100];   //Burst Time Array
float Awt,Att;   //Average wating time and average turn around time
void inputData();
void calculate();
void outputData();
/// MAin Function
int main(){
    inputData();
    calculate();
    outputData();
    return 0;
}

void inputData(){
    printf("Enter the NUmber of processes ");
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        printf("Enter the Arrival Time of Process P%d ",i);
        scanf("%d",&At[i]);
        printf("Enter the Burst Time of Process P%d ",i);
        scanf("%d",&Bt[i]);
    }
}

void calculate(){
    int Ttt=0,Twt=0; //Total turnaround and wating time
    int Tt=0,Wt=0;   // Turn around Time And Wating Time
    for(int i=1;i<=N;i++){
        Wt = Tt - At[i];
        Tt = Tt + Bt[i];
        Ttt = Ttt + Tt; 
        Twt = Wt + Twt;  
    }
    Att = Ttt/N;
    Awt = Twt/N;
}

void outputData(){
    printf("Average Wating Time is %f ",Awt);
    printf("\nAverage Turn Around Time is %f ", Att);
}