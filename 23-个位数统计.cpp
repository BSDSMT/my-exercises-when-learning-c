# include <stdio.h>
int main(){
	int n,i,a;
	scanf("%d",&n);
	int num[10]={0};
	for( ;n>0;n/=10){
		a=n%10;
		switch(a){
			case 0:num[0]++;break;
			case 1:num[1]++;break;
			case 2:num[2]++;break;
			case 3:num[3]++;break;
			case 4:num[4]++;break;
			case 5:num[5]++;break;
			case 6:num[6]++;break;
			case 7:num[7]++;break;
			case 8:num[8]++;break;
			case 9:num[9]++;break;
		}
	}
	int cnt=0;
	int b=0;
	for(i=0;i<10;i++){
		if(num[i]!=0){
			cnt++;
		}
	}
	for(i=0;i<10;i++){
		if(num[i]!=0){
			printf("%d:%d",i,num[i]);
			b++;
			if(b<cnt){
				printf("\n");
			}
		}
	}
	return 0;
}
