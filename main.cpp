#include <iostream>

using namespace std;

class Student{
public:

Student(string id , string name):id(id) , name(name){
    cout << "Etudiant " << id << " cree" << endl;

}

//Student() = default; // permet de creer un objet dans main sans parametres

Student(){
    id = " 0000 ";
    name = "ABC";
}

/*Student(string s_id , string s_name){ // id ici est un parametre du constructeur de la fct
    s_id = id;
    s_name = name; 

}*/



private: // je mets les donnees
string id; //data member ou attribut
string name;

};




int main(){
    Student s1("1111" , "Sami");
    Student s2;


    return 0;
}