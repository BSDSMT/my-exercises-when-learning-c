# include <stdio.h>
//返回无符号整数x的第pos位到第pos+n-1位设为1后的值 
unsigned set1(unsigned x,int pos,int n){
	int i=0;
	for(i=0;i<=n-1;i++){
		unsigned a=(1u<<pos+i);
	    x=(a|x);
	}

	return x;
}
//返回无符号整数x的第pos位到第pos+n-1位设为0后的值 
unsigned set2(unsigned x,int pos,int n){
	int i=0;
	for(i=0;i<=n-1;i++){
		unsigned a=~(1u<<pos+i);
	    x=(a&x);
	}
	return x;
}
//返回无符号整数x的第pos位到第pos+n-1位取反后的值 
unsigned set3(unsigned x,int pos,int n){
		int i=0;
	for(i=0;i<=n-1;i++){
		unsigned a=(1u<<pos+i);
	    x=(a^x);
	}
	return x;
} 
int main (){
	unsigned x;
	int n,pos;
	scanf("%u %d %d",&x,&pos,&n);
	printf("%u\n",set1(x,pos,n));
	printf("%u\n",set2(x,pos,n));
	printf("%u\n",set3(x,pos,n));
	return 0;
}
