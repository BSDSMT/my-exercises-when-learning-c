# include <stdio.h>
//�����޷�������x�ĵ�posλ����pos+n-1λ��Ϊ1���ֵ 
unsigned set1(unsigned x,int pos,int n){
	int i=0;
	for(i=0;i<=n-1;i++){
		unsigned a=(1u<<pos+i);
	    x=(a|x);
	}

	return x;
}
//�����޷�������x�ĵ�posλ����pos+n-1λ��Ϊ0���ֵ 
unsigned set2(unsigned x,int pos,int n){
	int i=0;
	for(i=0;i<=n-1;i++){
		unsigned a=~(1u<<pos+i);
	    x=(a&x);
	}
	return x;
}
//�����޷�������x�ĵ�posλ����pos+n-1λȡ�����ֵ 
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
