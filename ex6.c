#include <stdio.h> 

int main(){
int a,b,c;
int max,min;
float avg;

printf("Enter three number: ");
scanf("%d%d%d", &a,&b,&c);

max = min= a;

for (int i =1; i < 3; i++) { 
int num;
scanf("%d",&num);

if (num > max) {
	max = num;
}
if (num > min){
	min = num;
}
}
avg = (float)(a +b+c)/3;

printf("max: %d\n",max);
printf("min: %d\n",min);
printf("average: %.2f\n",avg);

return 0;


}
