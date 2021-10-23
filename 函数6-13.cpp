# include <stdio.h>
 void add_(int num1[4][2][3],int sum[4][3]){
 	int i=0;
 	int j=0;
 	int k=0;
 	
 	printf("请依次输入考生3门成绩，用空格隔开\n");
 	for(i=0;i<4;i++){
 		printf("第%d号考生 ",i+1);
 		for(j=0;j<2;j++){
 			printf("第%d次:",j+1);
 			for(k=0;k<3;k++){
 				scanf("%d",&num1[i][j][k]);
			 }
		 }
		 
    }
    
	 for(i=0;i<4;i++){
	 	for(j=0;j<3;j++){
	 		for(k=0;k<2;k++){
	 			sum[i][j]+=num1[i][k][j];
			 }
		 }
	 }
	 
 }
 
 void print(int num[4][3]){
 	int i=0;
 	int j=0;
 	for(i=0;i<4;i++){
 		for(j=0;j<3;j++){
 			printf("%3d ",num[i][j]);
		 }
		 printf("\n");
	 }
 }
 
 int main (){
 	//int a[4][2][3]={{{91,63,78},{97,67,82}},{{67,72,46},{73,43,46}},{{89,34,53},{97,56,21}},{{32,54,34},{85,46,35}}};
 	int sum[4][3]={0};
    int a[4][2][3]={0};
 	add_(a,sum);
 	print(sum);
 	return 0;
 }
 
