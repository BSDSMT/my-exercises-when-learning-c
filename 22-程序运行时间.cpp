# include <stdio.h>
int main(){
    double c1,c2;
	scanf("%lf %lf",&c1,&c2);
	double a=(c2-c1)/100;
	int t=(int)(a+0.5);//�����������ȡС��������int��ȡ������ 
	int h,m,s;
	h=t/3600;
	t%=3600; 
	m=t/60;
	s=t%60;
	printf("%02d:%02d:%02d",h,m,s);
	return 0;
}
