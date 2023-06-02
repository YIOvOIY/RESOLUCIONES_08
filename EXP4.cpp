#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Vehículo
{
    public:
        virtual void acelerar()
        {
            cout<<"Acelerando el vehículo."<<endl;
        }
};
class Coche : public Vehículo
{
    public:
        Coche(){}
        void acelerar() override
        {
            Coche :: encenderLuces();
            cout<<"Acelerar coche."<<endl;
        }
        void encenderLuces()
        {
            cout<<"Luces del coche encendidas."<<endl;
        }
};
class Motocicleta : public Vehículo
{
    public:
        Motocicleta(){}
        void acelerar() override
        {
            cout<<"Acelerando la motocicleta"<<endl;
        }
};
int main()
{
    Coche coche1;
    coche1.acelerar();
    Motocicleta motocicleta1;
    motocicleta1.acelerar();
    //motocicleta1.encenderLuces(); NO FUNCIONA
};