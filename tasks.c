#include <stdio.h>
#include "tasks.h"
#define NUM_TASK 4
#define PRMT 3 // defines the number of columns of the matrix relating , deadline, time of processing and period

int **tasks(char adress[1000]){

	FILE *fp;
	int num,i=0,j=0,vet[NUM_TASK][PRMT];
	char c[5];
	fp = fopen(adress,"r");
	if(fp==NULL){
		printf("Could not read the file .txt  \n");	
	}
	
	while((fscanf(fp,"%s",c)) ==1 && c!='\0') // skip one line
	
	while((fscanf(fp,"%d",&num))==1){

		vet[i][j] = num;
		
		if(j==0){
		 j ++;
		}else if(j==1){
		 j ++;
		}else if(j==2){
		 i++;
		 j = 0;
		}
	
		    fflush(stdin);
	}
	
       for(i=0;i<NUM_TASK;i++){
       	   for(j=0;j<PRMT;j++){
       	       printf("%d ",vet[i][j]);
       	       if(j==PRMT-1){
		 printf("\n");
		}
       	   }
        }
        
        fclose(fp);
        return vet;
}
