# include <stdio.h>
int main(){
	int a,b,c;
	int sum;
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	while(scanf("%d/%d/%d",&a,&b,&c)!=EOF){
		sum=0;
		month[1]=28;
		if((a%4==0&&a%100!=0)||a%400==0){
			month[1]=29;
		}
		int i;
		for(i=0;i<b-1;i++){
			sum+=month[i]; 
		}
		printf("%d\n",sum+c);
	}
	return 0;
} 
