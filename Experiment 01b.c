
#include<stdio.h>

struct student_record{
    char student_name[50];
    int roll_no;
    int marks[5];
};

int aggregate_marks(int marks[]){
    int i = 0;
    int sum = 0;
    while(i < 5){
        sum += marks[i];
        i++;
    }
    return sum;
}

void passGrade(int per){
    printf(" Your grade is ");
    if(per>=35){
        if(per>=55){
            if(per>=75){
                if(per>=90){
                    printf("Distinction\n");
                } else{
                    printf("First Class.\n");
                }
            } else {
                printf("Second Class.\n\n\n");
            }
        } else {
            printf("Pass.\n");
        }
    } else {
        printf("Fail.\n");
    }
}

int main(){
    int number_of_students;
    printf("Enter the number of students : ");
    scanf("%d", &number_of_students);
    struct student_record students[number_of_students];
    int sum[number_of_students];
    float percentages[number_of_students];

    int i = 0;
    for(;i<number_of_students;i++){
        printf("Enter details for student no.%d.\n ", i+1);
        printf("Name : ");
        scanf("%s", &(students[i].student_name[0]));
        printf("Roll No. : ");
        scanf("%d", &students[i].roll_no);
        printf("Enter marks for \n");
        int j = 0;
        while(j<5){
            printf("Subject %d : ", j+1);
            scanf("%d", &students[i].marks[j]); 
            j++;           
        }
    sum[i] = aggregate_marks(students[i].marks);
    percentages[i] = sum[i]/5;
    i++;
    }
    i = 0;
    for(;i<number_of_students;i++){
        printf("\n\nName : %s\n", students[i].student_name);
        printf("Roll No.: %d\n", students[i].roll_no);
        printf("Marks For Subject 1 : %d\n", students[i].marks[0]);
        printf("Marks For Subject 2 : %d\n", students[i].marks[1]);
        printf("Marks For Subject 3 : %d\n", students[i].marks[2]);
        printf("Marks For Subject 4 : %d\n", students[i].marks[3]);
        printf("Marks For Subject 5 : %d\n", students[i].marks[4]);
        printf("Total : %d\n", sum[i]);
        printf("Percentage : %.2f\n\n", percentages[i]);
        passGrade(percentages[i]);
        i++;

    }

    return 0;
}