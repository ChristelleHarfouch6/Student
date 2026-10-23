#include <iostream>

using namespace std;

class Student{
public:

Student(string id , string name , int age):id(id) , name(name) , age(age){
    cout << "Etudiant " << id << " cree" << endl; 

}

//Student() = default; // permet de creer un objet dans main sans parametres

Student(){
    id = "0000";
    name = "ABC";
    cout << "Etudiant " << id << " cree" << endl;
}

void display(){ // das une classe les fcts sont accessibles a tous les data members de la classe
    cout << "Student : ID = " <<id << " Name = " << name << "Age = " << age << endl;
}

/*Student(string s_id , string s_name){ // id ici est un parametre du constructeur de la fct
    s_id = id;
    s_name = name; 

}*/



private: // je mets les donnees
string id; //data member ou attribut
string name;
int age;

};




int main(){
    Student s1("1111" , "Sami",23);
    s1.display();
    Student s2;
    s2.display();

    return 0;
}