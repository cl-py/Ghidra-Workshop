#include <stdio.h>

void BinarySearch(int low, int high, int val){
    //low - low endpoint of current array
    //high - high endpoint of current array
    //val - value to look for
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    if (low > high) {
        return;
    }

    int mid = low + (high - low) / 2;

    if (arr[mid] == val) {
        return;
    } 
    else if (arr[mid] > val) {
        BinarySearch(low, mid - 1, val);
    } 
    else {
        BinarySearch(mid + 1, high, val);
    }
}

void printString(){
    char str[] = {'e','a','s','y'};
}

void DoNothingFunction(){
    double x = 9.7;
    char y = 0b01100001;

    while(x < 10.0){
        x+=0.1;
    }
}

void LoveLetter(){
    char message[] = "Dearest GPT, I am forever obsessed with you";
    int address = 0067;
}




int main(){
    char str[11]="UICCS0836O";

    for(char i=0x0;i<0xb;i++){
        switch(*(str+i)){
            case 'U':
                printString();
                break;
            case 'I':
                printf("pizza is bae <3");
                break;
            case 'C':
                LoveLetter();
                break;
            case 'S':

                int low;
                int high;
                int val;

                //convert numbers to decimal, 1d to prevent low grabbing all numbers
                sscanf((str+i+1),"%1d%1d%1d",&low,&high,&val);

                BinarySearch(low, high,val);
                i+=3;
                break;
            case 'O':
                DoNothingFunction();
                break;
            default:
                break;
        }
    }

    printf("\n");

    return 0;
}