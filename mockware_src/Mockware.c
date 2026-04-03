#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <string.h>

int write_script();
int next();

int main(){
	printf("enter a number:");
	int num;
	int num2 = 10;
	scanf("%d", &num);
	printf("\n");

	num = num * 5;

	if (num + num2 == 35){
		next();
	}

	printf("incorrect :(");

	return 0;

}

int next(){
	printf("next stage! enter a string:");
	char reversed[10] = "desrever";
	char userString[10];
	scanf("%s", userString);
	int length = strlen(userString);
	for (int i = 0; i < length; i++){
		if (userString[i] != reversed[7-i]){
			return 0;
		}
	}
	write_script();
}

int write_script(){
	const char *filename = "mockware_script.sh";
	int fd = open (filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	const char *script = 
		"#!/bin/bash\n"
		"echo \"Solved!\"\n";
	write(fd, script, sizeof(char) * strlen(script));
	close (fd);

	chmod(filename, 0755);

	execl("/bin/bash", "bash", filename, NULL);
	return 0;

}
