# include <stdio.h>
# define h 8
void rev_intary(int v1[],const int v2[],int n){
	int i=0;
	for(i=0;i<n;i++){
		v1[i]=v2[i];
	}
	for(i=0;i<n/2;i++){
		int m;
		m=v1[i];
		v1[i]=v1[n-1-i];
		v1[n-1-i]=m;
	}
}

void print(int num[],int n,int c){
	int i=0;
	printf("Êı×éa%dÎª:\n",c);
	for(i=0;i<n;i++){
		printf("%d ",num[i]);
	}
	printf("\n");
}
int main (){
	int v1[h]={0};
	int v2[h]={24,36,87,32,15,96,78,32};
	rev_intary(v1,v2,h);
	print(v1,h,1);
	print(v2,h,2);
	return 0;
	
} 
