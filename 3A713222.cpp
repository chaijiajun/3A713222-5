#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,d;
	printf("�п�J�Ĥ@�Ӭ��:");
	scanf("%d",&a);
	printf("�п�J�ĤG�Ӭ��:");
	scanf("%d",&b);
	c=a-b;
	d=abs(c);
	printf("�ɶ��ۮt%d�p��%d��%d��:\n",d/3600,d/60%60,d%60);
	system("pause");
	return 0;
}
