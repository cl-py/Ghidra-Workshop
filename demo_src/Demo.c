#include <stdio.h>
#include <string.h>

void lastOne(){
    char flag[] = "ghidra{GE3DruuH}";
    printf("%s",flag);
}

void goForward(){
    printf("Okay...how about this one: ");
    char baseString[] = "daemon";
    int length = strlen(baseString);

    char userString[10];
    scanf("%s", userString);

    for(int i=0;i<length;i++){
        if(userString[i] != baseString[i]){
            FILE *print = fopen("fake.txt","wb");
            fwrite("MALWARE", sizeof(char), 7, print);
            return;
        }
    }
    lastOne();
}

int main(){
    printf("Please enter the number:");

    int num;
    scanf("%d", &num);
    printf("\n");

    if(num==67){
        goForward();
    }

    printf("Thank you for playing\n");
    return 0;
}