#include < #include < #include < #include <#include < #include <iostreamiostream iostreamiostream iostream >
using namespacenamespace namespace namespace namespacenamespacestd ;
class Pet Pet Pet {
protected protected protected protectedprotected :
string Name string Name string Name string Namestring Name string Name ;
public :
Pet (string n string nstring n string n string n){Name =n;}
void MakeSound MakeSound MakeSound MakeSound MakeSound(void ){
cout << Name Name Name << "the Pet says: "the Pet says: "the Pet says: "the Pet says: "the Pet says: "the Pet says: "the Pet says: "the Pet says: "the Pet says: Shh ! Shh !" << endl ;}
};
class Cat Cat Cat :public public public Pet Pet {
public :
Cat (string n string nstring n string n string n):Pet (n){}
void MakeSound MakeSound MakeSound MakeSound MakeSound(void ){
cout << Name Name Name << "the Cat says: Meow! "the Cat says: Meow! "the Cat says: Meow! "the Cat says: Meow! "the Cat says: Meow! "the Cat says: Meow! "the Cat says: Meow! "the Cat says: Meow! "the Cat says: Meow! "the Cat says: Meow! "the Cat says: Meow! "the Cat says: Meow! Meow!" << endlendl endl;
