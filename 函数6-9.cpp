# include <stdio.h>
# define h 5
void rev_intary(int a[],int n){
	int i=0;
	for(i=0;i<n/2;i++){
		int m;
		m=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=m;
	}
	for(i=0;i<n;i++){
	    printf("%d ",a[i]);
	}
}
int main (){
	int num[h]={5,8,3,23,987};
	rev_intary(num,h);
	return 0;
} 
