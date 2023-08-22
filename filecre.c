#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("abc.txt","w+");

	fprintf(fp,"Welcome to India...\n");
	fprintf(fp,"your are entering tara shing area..\n");
	fprintf(fp,"pakistan ka jamai aa raha hai,nariyal do tika lagao orr jane do,varana iss baar dahej mai pura lahor leke jayega...");
	fclose(fp);

}