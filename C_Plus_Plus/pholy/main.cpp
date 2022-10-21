#include <iostream>
#include<string>
using namespace std;
class Pet{
protected:
    string name;
public:
    void NameMe(string name){this->name=name;}
    void MakeSound(void){cout<<name<<"says:no comments"<<endl;}
};
void NamePetByvalue(string name,Pet pet){
pet.NameMe(name);
}
void NamePetByPointer(string name,Pet *pet){
pet->NameMe(name);
}
void NamePetByRaference(string name,Pet&pet){
pet.NameMe(name);
}
int main(void)
{
    Pet pet;
    pet.NameMe("no_name");
    NamePetByvalue("Alpha",pet);
    pet.MakeSound();
    NamePetByPointer("Beta",&pet);
    pet.MakeSound();
    NamePetByRaference("Gamma",pet);
    pet.MakeSound();
    return 0;
}
