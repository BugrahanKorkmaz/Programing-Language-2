#include <stdio.h>
#include <stdlib.h>


int main() {
    int num1, num2, sum;
    int *ptr1, *ptr2, *ptrSum;

    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    ptr1 = &num1;
    ptr2 = &num2;
    ptrSum = &sum;

    *ptrSum = *ptr1 + *ptr2;

    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}

//---------------------------------------------------

int main(){
    int n;

    printf("kac tane element gireceksin:");
    scanf("%d",&n);
    
    int arr[n];

    for(int i=0;i<n;i++){
        printf("element - %d:",i);
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++){
        printf("element - %d:%d\n",j,*(&arr[j]));
    }
    return 0;
}

//---------------------------------------------------

int main() {
    char str[100];
    char *ptr = str;
    int length = 0;

    printf("Input a string: ");
    fgets(str, sizeof(str), stdin);

    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    printf("The length of the given string \"%s\" is: %d\n", str, length-1);

    return 0;
}

//---------------------------------------------------
void swap(int *nmb1,int *nmb2,int *nmb3){
    int temp1,temp2,temp3;

    temp1=*nmb1;
    temp2=*nmb2;
    temp3=*nmb3;

    *nmb2=temp1;
    *nmb3=temp2;
    *nmb1=temp3;

}

int main(){
    int n1,n2,n3;

    printf("input the value of 1st element:");
    scanf("%d",&n1);
    printf("input the value of 2st element:");
    scanf("%d",&n2);
    printf("input the value of 3st element:");
    scanf("%d",&n3);

    swap(&n1,&n2,&n3);

    printf("1st:%d\n2st:%d3st:%d",n1,n2,n3);

    return 0;

}

//---------------------------------------------------

int main(){
    int arr[10],i,sum=0;

    printf("Input the number of elements to store in the array:");
    scanf("%d",&i);

    for(int j=0;j<i;j++){
        printf("Input %d. number of elements in the array",j+1);
        scanf("%d",&arr[j]);
    }
    for(int a=0;a<i;a++){
        sum+=*(&arr[a]);
    }
    printf("sum of all:%d",sum);

    return 0;
}

//---------------------------------------------------

void printReverse(char *str) {
    while (*str != '\0') {
        str++;
    }
    
    str--;

    while (str >= 0) {
        printf("%c", *str);
        str--;
    }
    printf("\n");
}

int main() {
    char str[] = "Hello bugrahan!";
    
    printf("Original string: %s\n", str);
    printf("Reversed string: ");
    printReverse(str);
    
    return 0;
}