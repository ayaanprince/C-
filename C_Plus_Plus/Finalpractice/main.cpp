#include <iostream>
using namespace std;
class pet{
protected:
    string Name;
public:
    pet(string n){Name=n;}
    void MakeSound(void){
    cout<<Name<<"the pet says:shh!SHH!"<<endl;
    }
};
class Cat:public Pet{
public:
    Cat(string n):Pet (n){}
    void MakeSound(void){
    cout <<Name<<"the cat says:mew mew"<<endl;
    }
};
class Dog:public Pet{
public:
    Dog (string n);Pet(n){}
    void MakeSound(void){
    cout<<Name<<"the Dog says"woof !WOOF!<<endl;
    }
};
int main(void)
{
    Cat *a_cat;
    Dog *a_dog;
    a_cat =new Cat("kitty");
    a_dog= new Dog("Doggie");
    a_cat ->MakeSound();
    static_cast <Pet *>(a_cat)->MakeSound();
    a_dog ->MakeSound();
    static_cast<Pet *>(a_dog)->MakeSound();
    return 0;
}
