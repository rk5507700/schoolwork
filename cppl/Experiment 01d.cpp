#include<iostream>

using namespace std;

struct student{
    int roll_no;
    char name[50];
    float marks[5];
    float total_marks;
    float percentage;
};

void userInput(float* marks){
    for(int i = 0; i < 5; i++){
        cout<<"Enter subject "<<i+1<<" marks." <<endl;
        cin>>marks[i];
    }
}

float totalMarks(float* marks){
    float sum = 0;
    for(int i = 0 ; i < 5 ; i++){
        sum += marks[i];
    }
    return sum;
}

void studentDetails(struct student* student){
    cout<<"Enter your name: ";
    cin>>student->name;
    cout<<"Enter your roll_no: ";
    cin>>student->roll_no;
    userInput(student->marks);
}

void displayStudentRecord(struct student* student){
    cout<<"Name : "<<student->name<<endl;
    cout<<"Roll No. : "<<student->roll_no<<endl;
    cout<<"Subject 1 marks: "<<student->marks[0]<<endl;
    cout<<"Subject 2 marks: "<<student->marks[1]<<endl;
    cout<<"Subject 3 marks: "<<student->marks[2]<<endl;
    cout<<"Subject 4 marks: "<<student->marks[3]<<endl;
    cout<<"Subject 5 marks: "<<student->marks[4]<<endl;
    cout<<"Total marks : "<<student->total_marks<<endl;
    cout<<"Percentage  : "<<student->percentage<<endl;

}

int main(int argc, char const *argv[])
{   
    struct student studentInfo;
    studentDetails(&studentInfo);

    studentInfo.total_marks = totalMarks(studentInfo.marks);
    studentInfo.percentage = studentInfo.total_marks/5 ;

    displayStudentRecord(&studentInfo);

    if(studentInfo.percentage > 35){
        if (studentInfo.percentage > 55){
            if(studentInfo.percentage > 75){
                if(studentInfo.percentage > 85){
                    cout<<"DISTINCTION"<<endl;
                } else {
                    cout<<"FIRST CLASS"<<endl;
                }

            } else {
                cout<<"SECOND CLASS"<<endl;
            }

        } else {
            cout<<"PASS"<<endl;
        }
    } else {
        cout<<"FAIL"<<endl;
    }

    return 0;
}
