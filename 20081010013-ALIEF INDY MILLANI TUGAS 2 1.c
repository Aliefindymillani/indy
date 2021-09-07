#include <stdio.h>

int main() {
	
	printf ("NAMA  : ALIEF INDY MILLANI\n");
	printf ("KELAS : E081\n");
	printf ("NPM   : 20081010013\n\n");
	
	printf ("Program  yang mengimplementasikan syntax (Printf Scanf)\n\n");
	
	int umur;	
	char nama [10];
	printf ("nama :");
	scanf ("%s",&nama);
	printf ("umur :");
	scanf ("%d",&umur);
	printf ("%s , kamu cantik diumur %d tahun ini\n", nama, umur);
	
	return 0;
}
