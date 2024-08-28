#include<iostream>

using namespace std;

void print(int i){
    cout<<"This prints an integer value.\n"<<endl;
    cout<<"Your integer is :"<<i<<endl;
}
void print(float i){
    cout<<"This prints a float value.\n"<<endl;
    cout<<"Your number is: "<<i<<endl;

}
void print(char i){
    cout<<"This prints a character value.\n"<<endl;
    cout<<"Your character is : "<<i<<endl;
}

int main(int argc, char const *argv[])
{
    int n;
    float p;
    char g;
    cout<<"Enter your integer: "<<endl;
    cin>>n;
    cout<<"Enter your float: "<<endl;
    cin>>p;
    cout<<"Enter your character: "<<endl;
    cin>>g;
    print(n);
    print(p);
    print(g);
    return 0;
}
