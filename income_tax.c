#include <stdio.h>
int main(){
	int salary,married,tax=0;	
    printf("Enter your annual salary: ");
    scanf("%d", &salary);
    printf("Are you married? (1 for married, 2 for unmarried): ");
    scanf("%d", &married);
    if(married==1) {
    	if (salary<=600000){
    		printf("%d",tax=salary*0.01);
			}
    		else if(salary>=600000 && salary<=800000){
    		printf("%d",tax=600000*0.01+(salary-600000)*0.1);
		}
		else if(salary>=800000 && salary<=1100000){
			printf("%d",tax=600000*0.01+200000*0.1+(salary-800000)*0.2);
		}
		else if(salary>=1100000 && salary<=2000000){
		    printf("%d",tax=600000*0.01+200000*0.1+300000*0.2+(salary-1100000)*0.3);
		}
		    else {
		    	printf("%d",tax=600000*0.01+200000*0.1+300000*0.2+1000000*0.3+(salary-2000000)*0.36);
		    	
			}
	
}
    else{
    	if(salary<=500000){
    		printf("%d",tax=salary*0.01);
		}
		else if(salary>=500000 && salary<=700000){
		printf("%d",tax=500000*0.01+(salary-500000)*0.1);
		}
		else if(salary>=700000 && salary<=1000000){
			printf("%d",tax=500000*0.01+200000*0.1+(salary-700000)*0.2);
		}
		else if(salary>=1000000 && salary<=2000000){
		    printf("%d",tax=500000*0.01+200000*0.1+300000*0.2+(salary-1000000)*0.3);
		}
		else{
			printf("%d",tax=500000*0.01+200000*0.1+300000*0.2+1000000*0.3+(salary-2000000)*0.36);
		    	
		}
    	
	}
	return  0;
}
