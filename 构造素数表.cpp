# include <stdio.h>
int main(){
	const int max=100;
	int isprime[max]={1};
	int i;
	int x;
	for(x=2;x<max;x++){
		if(isprime[x]){
			for(i=2;i*x<max;i++){
				isprime[i*x]=0;
			}
		}
	}
	for(i=2;i<max;i++){
		if(isprime[i]=1){
			printf("%d\t",i);
		}
	}
	printf("\n");
}
	 

