#include <iostream>
#include <vector>

using namespace std;

class Student{
public:

Student(string id , string name):id(id) , name(name){
    cout << "Etudiant " << id << " cree" << endl;

}

//Student() = default; // permet de creer un objet dans main sans parametres

Student(){
    id = "0000";
    name = "ABC";
}

void display(){ // das une classe les fcts sont accessibles a tous les data members de la classe
    cout << "Student : ID = " <<id << " Name = " << name << endl;
    if (!empty(grades)){
        cout << "Grades : " << endl;
        for (auto g : grades){
            cout << g << " ";
        }
    }cout << endl;
}


void addGrade(double grade){
    grades.push_back(grade);
}

void addGrade(double grade[] , int n){ // je peux faire surcharge
    for (int i = 0 ; i < n ; ++i){
        grades.push_back(grade[i]);
    }
}

/*Student(string s_id , string s_name){ // id ici est un parametre du constructeur de la fct
    s_id = id;
    s_name = name; 

}*/



private: // je mets les donnees
string id; //data member ou attribut
string name;
vector<double> grades;

};




int main(){
    Student s1("1111" , "Sami");
    s1.addGrade(12);
    double grade[] = {12,16,15,16};
    s1.addGrade(grade , 4);
    s1.display();
    Student s2;
    s2.display();

    return 0;
}


/*
git:
git switch -c grades : on cree une nouvelle branche si il n est pas cree w mnruh 3layaa w kl shi 3mltlo commit mn abel bikun 3laya
*/