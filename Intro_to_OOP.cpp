#include <iostream>
using namespace std;

class student{
    string name;
    public:
    int age;
    bool gender;

    student(){
        cout<<"Default Constructor"<<endl;                           //Default Constructor
    }

    student(string s, int a, int g){
        cout<<"Paramaterised Constructor"<<endl;
        name = s;  
        age = a;                                                    // paramaterised Constructor
        gender = g;
    }

    student(student &a){
        cout<<"Copy Constructor"<<endl;
        name = a.name;                                              // Copy Constructor
        age = a.age;
        gender = a.gender;
    }

    ~student(){
        cout<<"Destructor Called"<<endl;                             //Destructor
    }

    void printInfo(){
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"Age = ";
        cout<<age<<endl;
        cout<<"Gender = ";
        cout<<gender<<endl;
    }

    bool operator == (student &a){
        if(name == a.name && age == a.age && gender == a.gender){       // Operator Overloading
            return true;
        }
        return false;
    }

    void setName(string s){
        name = s;
    }

    void getName(){
        cout<<name<<endl;
    }
};

int main(){
    // student a;
    // a.name = 'Urvi';
    // a.age = 20;
    // a.gender = 1;

    // student arr[3];
    // for(int i=0;i<3;i++){
    //     string s;
    //     cout<<"Name =";
    //     cin>>s;
    //     arr[i].setName(s);
    //     cout<<"Age =";
    //     cin>>arr[i].age;
    //     cout<<"Gender =";
    //     cin>>arr[i].gender;
    // }

    // for(int i=0;i<3;i++){
    //     arr[i].printInfo();
    // }

    student a("Urvi",20,1);
    // a.printInfo();
    student b("Rahul",22,0);
    // student c(a);  // Copy Constructors
    student c = a; // Copy Constructors
    // c.printInfo();

    if(b==a){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not Same"<<endl;
    }

    return 0;
}