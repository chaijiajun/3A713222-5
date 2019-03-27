#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,d;
	printf("請輸入第一個秒數:");
	scanf("%d",&a);
	printf("請輸入第二個秒數:");
	scanf("%d",&b);
	c=a-b;
	d=abs(c);
	printf("時間相差%d小時%d分%d秒:\n",d/3600,d/60%60,d%60);
	system("pause");
	return 0;
}
