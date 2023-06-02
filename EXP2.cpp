#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Forma
{
    public:
        virtual void calcularperimetro()=0;
};
class Círculo : public Forma
{
    protected:
        double pi;
        double radio;
    public:
        Círculo(double radio)
        {
            this-> radio =radio;
            pi=3.14;
        }
        void calcularperimetro() override
        {   
            cout<<"El perímetro es :"<<2*radio*pi<<endl;                
        }
        void cambioVariable(double x)
        {
            radio=x;
        }
};
class Rectángulo : public Forma
{
    protected:
        double base,altura;
    public:
        Rectángulo(double base, double altura)
        {
            this->altura=altura;
            this->base=base;
        }
        void calcularperimetro() override
        {
            cout<<"El perímetro es: "<<base+altura+base+altura<<endl;
        }
        void cambioVariable(double x,double y)
        {
            base=x;
            altura=y;
        }
};
class Triángulo: public Forma
    {
        protected:
            double lado1;
            double lado2;
            double lado3;
        public:
        Triángulo (double lado1, double lado2, double lado3)
        {
            this-> lado1=lado1;
            this-> lado2=lado2;
            this-> lado3=lado3;
        }
        void cambioVariable(double x,double y,double z)
        {
            lado1=x;
            lado2=y;
            lado3=z;
        }
        void calcularperimetro() override
        {
            cout<<"El perímetro es: "<<lado1+lado2+lado3<<endl;
        }

    };
int main() {
    int op;
    double radio, base, altura,lado1,lado2,lado3;
    Rectángulo rectángulo1(base,altura);
    Círculo círculo(radio);
    Triángulo triángulo(lado1,lado2,lado3);
    while (op != 10) {
        cout << "De cuál figura quiere obtener su area?" << endl;
        cout << "1. Circulo" << endl;
        cout << "2. Rectangulo" << endl;
        cout << "3. Triangulo" << endl;
        cout << "10. Salir" << endl;
        cout << "Elija: "; cin >> op;
        
        switch (op) {
            case 1:
                cout << "Ingrese valores:" << endl;
                cout << "Radio: "; cin >> radio;
                círculo.cambioVariable(radio);
                círculo.calcularperimetro();
                break;
            case 2:
                cout << "Ingrese valores:" << endl;
                cout << "Base: "; cin >> base;
                cout << "Altura: "; cin >> altura;
                rectángulo1.cambioVariable(base,altura);
                rectángulo1.calcularperimetro();
                break;
            case 3:
                cout << "Ingrese valores:" << endl;
                cout << "Lado1: "; cin >> lado1;
                cout << "Lado2: "; cin >> lado2;
                cout << "Lado3: "; cin >> lado3;
                triángulo.cambioVariable(lado1,lado2,lado3);
                triángulo.calcularperimetro();
                break;
            default:
                break;
        }
    }
    return 0;
}