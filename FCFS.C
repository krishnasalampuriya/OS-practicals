#include <stdio.h>
int N;   // Number of Processes
int At[100];  //Arrival timr array
int Bt[100];   //Burst Time Array
float Awt,Att;  //Average wating time and average turn around time 
int TypeOfAlgo;  // Type of Algoritm
void inputData();
void calculateFCFS();
void calculateRoundRobin();
void outputData();
void selectAlgo();
/// MAin Function
int main(){
    selectAlgo();
  //  inputData();
  //  calculateFCFS();
  //  outputData();
    return 0;
}

void inputData(){
    printf("Enter the NUmber of processes ");
    scanf("%d",&N);
    if(TypeOfAlgo ==1){
    for(int i=1;i<=N;i++){                                     // For FCFS
        printf("Enter the Arrival Time of Process P%d ",i);
        scanf("%d",&At[i]);
        printf("Enter the Burst Time of Process P%d ",i);
        scanf("%d",&Bt[i]);
      }
    }
    else if(TypeOfAlgo == 2){                                   // for SJF

    }
    else {                                                      // for RR
         for(int i=1;i<=N;i++){
        printf("Enter the Burst Time of Process P%d ",i);
        scanf("%d",&Bt[i]);
      }
    }
}
/*

void calculateFCFS(){
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
} */

void selectAlgo(){
    printf("Enter the type of Algorithm ");
    printf("Type 1 for FCFS\nType 2 for SJF\n Type 3 For Round Robin\n");
    scanf("%d",&TypeOfAlgo);
    if(!(TypeOfAlgo == 1 || TypeOfAlgo == 2 || TypeOfAlgo == 3)){
        printf("Select proper Algorithm\n");
        selectAlgo();
    }
    printf("Type = %d",TypeOfAlgo);
}