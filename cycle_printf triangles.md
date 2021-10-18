# cycle_printf triangles

```c
# include <stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	int i,j; 
	for(i=1;i<=a;i++){
		for(j=a+1-i;j>0;j--){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
```

```c
# include <stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	int i,j;
	for(i=1;i<=a;i++){
		for(j=1;j<=i-1;j++){
			printf(" ");
		}
		for(j=1;j<=a+1-i;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
```

```c
# include <stdio.h>
int main (){
	int a;
	scanf("%d",&a);
	int i=1;
	for(i=1;i<=a;i++){
	 int j=1;
	 for(j=1;j<=a-i;j++){
	 	printf(" ");
	 }
	 for(j=1;j<=(i-1)*2+1;j++){
	 	printf("*");
	 }
	 for(j=1;j<=a-i;j++){
	 	printf(" ");
	 }
	 printf("\n");
	}
	return 0;
} 
```

```c
# include <stdio.h>
int main (){
	int a;
	scanf("%d",&a);
	int i=1;
	for(i=1;i<=a;i++){
		int j=1;
		for(j=1;j<=i-1;j++){
			printf(" ");
		}
		for(j=1;j<=2*(a-i)+1;j++){
			printf("%d",i%10);
		}
		for(j=1;j<=i-1;j++){
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
```

