# include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	long A,B,C;
	int i=0;
	for(i=0;i<t;i++){
		scanf("%ld %ld %ld",&A,&B,&C);
		if(A+B>C){
			printf("Case #%d: true",i+1);
		}else{
			printf("Case #%d: false",i+1);
		}
		if(i<t-1){
			printf("\n");
		}
	}
	return 0;
}
