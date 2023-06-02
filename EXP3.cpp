#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Animal
{
    public:
        virtual void hacersonido()=0;
};
class Perro : public Animal
{
    protected:
    public:
        Perro(){}
        void hacersonido() override
        {   
            cout<<"WAOS"<<endl;                
        }
        
};
class Gato : public Animal
{
    protected:
    public:
        Gato(){}
        void hacersonido() override
        {
            cout<<"MIAU"<<endl;
        }
};
class Vaca : public Animal
{
    protected:
    public:
        Vaca(){}
        void hacersonido() override
        {
            cout<<"MUUUU"<<endl;
        }
};
int main() {
    Perro perro;
    Gato gato;
    Vaca vaca;
    perro.hacersonido();
    gato.hacersonido();
    vaca.hacersonido();
    return 0;
}