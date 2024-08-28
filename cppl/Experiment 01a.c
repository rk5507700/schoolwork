#include<stdio.h>

void fibonnacci_series(int n){
    int first_term = 1;
    int second_term = 2;
    printf("The first %d terms of fibonacci series are : ", n);
    for (int i = 0; i<n; i++){
        int j = (first_term+second_term);
        printf("%d  \n", j);
        first_term = second_term;
        second_term = j;
    }
    printf("\n \n \n ");
}

int main(){
    int n; // Number of terms in series entered by user
    printf("\n \nEnter the number of terms you want for fibonnacci series : ");
    scanf("%d", &n);
    fibonnacci_series(n);
    return 0;
}