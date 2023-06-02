#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Figura
{
    public:
        virtual double calcularArea() =0;
};
    class Círculo: public Figura
    {
        protected:
            double radio;
            double Area1;
            double pi=3.14;
        public:
            Círculo (double radio)
            {
                this-> radio=radio;
            }
            double calcularArea() 
            {
                Area1=pi*radio*radio;
                cout<<"El area es: "<< Area1<<endl;
            }
            void cambioVariable(double x)
            {
                radio=x;
                
            }
    };
    class Rectángulo: public Figura {
    protected:
        double base;
        double altura;
        double Area2;
    public:
        Rectángulo(double base, double altura) 
        {
            this->base = base;
            this->altura = altura;
        }
        double calcularArea() 
        {
            Area2 = base * altura;
            cout<<"El area es: "<< Area2<<endl;
        }
        void cambioVariable(double x,double y)
        {
            base=x;
            altura=y;
        }
    };
    class Triángulo: public Figura
    {
        protected:
            double base;
            double altura;
            double Area3;
        public:
            Triángulo (double base, double altura)
            {
                this-> base=base;
                this-> altura=altura;
            }
            double calcularArea()
            {
                Area3= (base*altura)/2;
                cout<<"El area es: "<< Area3<<endl;
                
            }
            void cambioVariable(double x,double y)
            {
                base=x;
                altura=y;
            }
    };
int main() {
    int op;
    double radio, base, altura;
    Triángulo triágulo1(base,altura);
    Rectángulo rectángulo1(base,altura);
    Círculo círculo(radio);
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
                círculo.calcularArea();
                break;
            case 2:
                cout << "Ingrese valores:" << endl;
                cout << "Base: "; cin >> base;
                cout << "Altura: "; cin >> altura;
                rectángulo1.cambioVariable(base,altura);
                rectángulo1.calcularArea();
                break;
            case 3:
                cout << "Ingrese valores:" << endl;
                cout << "Base: "; cin >> base;
                cout << "Altura: "; cin >> altura;
                triágulo1.cambioVariable(base,altura);
                triágulo1.calcularArea();
                break;
            default:
                break;
        }
    }
    return 0;
}
