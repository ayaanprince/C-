#include <iostream>
#include<conio.h>
using namespace std;
class Pet{
protected:
    string Name;
public:
    Pet(string n){Name=n;}
    virtual MakeSound(void){cout<<Name<<"the Pet says:shh! shh!"<<endl;}
};
class Cat:public Pet{
public:
    Cat(string n):Pet(n){}
    virtual MakeSound(void){cout<<Name<<"the Cat says:mew mew!!"<<endl;}
};
class Dog:public Pet{
public:
    Dog(string n):Pet(n){}
    virtual MakeSound(void){cout<<Name<<"the dog says:woof woof!!"<<endl;}
};
int main()
{
    Pet *a_pet1,*a_pet2;
    Cat *a_cat;
    Dog *a_dog;

    a_pet1=a_cat=new Cat("kitty ");
    a_pet2=a_dog=new Dog("Doggie ");
    a_pet1->MakeSound();
    a_cat->MakeSound();
    static_cast<Pet *>(a_cat)->MakeSound();
    a_pet2->MakeSound();
    a_dog->MakeSound();
    static_cast<Pet *>(a_dog)->MakeSound();
    getch ();
}
