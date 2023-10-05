# include <stdio.h>

int main () {

	char fullname[40];
	int age;
	char address[30];

	printf("Enter your fullname: ");
	fgets(fullname,sizeof(fullname), stdin );

	printf("Enter your age: ");
	scanf("%d",&age);
	getchar();

	printf("Enter you address: ");

	fgets(address,sizeof(address), stdin);

	printf("\n\nfullname: %s", fullname);
	printf("Age: %d\n",age);

	printf("Address: %s\n", address);


return 0;
}

