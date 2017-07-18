#include <stdio.h>

int linearSearch(int num[]);
int BinarySearch(int num1[]);
    int main (){

        int number[10],i, m =10;

        printf("Enter 10 numbers: ");

        for (i=0; i<10; i++){
            scanf("%d",&number[i]);
        }

        linearSearch(number);
        BinarySearch(number);

    }


int linearSearch(int num[]){

    int j=0;

      if(num[j] > 0){
            printf("None\n");
            return j;
      }

    for (j = 0; j<10; j++){
           if (num[j]==j){
            printf("Linear Search: %d index %d \n", j, j);
            break;
            }
    }

    return j;

}

int BinarySearch(int num1[]){

    int first = 0, last =9;
    int index= (first+last)/2;

    while(first <=last){
        if(num1[index] < index)
            first = index + 1;
        else if (num1[index]==index){
            printf("Binary Search: %d index %d \n", index, index);
            break;
        }
        else
            last = index - 1;
            index = (first + last)/2;
    }
        if(first > last)
            printf("None\n");

}


