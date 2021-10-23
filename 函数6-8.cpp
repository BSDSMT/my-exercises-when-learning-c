# include <stdio.h>
# define h 8
int min_of(const int num[],int n){
	int i=0;
	int min=num[0];
	for(i=1;i<n;i++){
		if(num[i]<min){
			min = num[i];
		}
	}
	return min;
}
int main (){
	int a[h]={25,6,1,19,20,52,61,32};
	printf("%d",min_of(a,h));
	return 0;
}
