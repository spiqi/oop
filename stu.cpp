#pragma warning(disable:4996)
#include<cstdio>
typedef struct {
	char num[5];
	char name[5];
	int a;
	int b;
	int c;

}stu;
stu da[16];

int main() {
	int qii;// the number of the stu;
	FILE * qc;
	qc = fopen("data.txt", "r");
	fscanf(qc,"%d", &qii);
	for (int i = 1; i <= qii; i++) {
		fscanf(qc, "%s %s %d %d %d\n",da[i].num, da[i].name,& da[i].a, &da[i].b, &da[i].c);

	}
	fclose(qc);
	printf("%d\n", da[2].b);
	printf("%s\n", da[3].num);
	printf("%s\n", da[3].name);
	scanf("%d", &qii);
 }
