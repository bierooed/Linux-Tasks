#include <iostream>

class Complex {
    private:
        double real, imag;

    public:
        Complex() {
            real = imag = 0;
        }
    
        Complex(double r) {
            real = r;
            imag = 0;
        }

        Complex(double r, double i) {
            real = r;
            imag = i;
        }

        Complex(Complex &obj) {
            real = obj.real;
            imag = obj.imag;
        }


         Complex add(Complex c) {
            Complex Add;

            Add.real = real + c.real;
            Add.imag = imag + c.imag;

            return Add;
        }

        Complex sub(Complex c){
            Complex Sub;
           
            Sub.real = real - c.real;
            Sub.imag = imag - c.imag;
            return Sub;
        }

        Complex mult(Complex c){
            Complex Mult;
           
            Mult.real = real*c.real - imag*c.imag;
            Mult.imag = real*c.imag - c.real*imag;
            return Mult;
        }

        Complex div(Complex c){
             Complex Div;
       
             Div.real = (real*c.real + imag*c.imag)/(c.real*c.real + c.imag*c.imag);
             Div.imag = (imag*c.real + real*c.imag)/(c.real*c.real + c.imag*c.imag);
             return Div;
         }

        void print()    {
            std::cout << real << "+" << imag << "i" << std::endl;
        }

        double getReal() const{
            return real;
        }
        
        double getImag() const{
            return imag;
        }
        
        void setReal(double re){
            real = re;
        }
 
        void setImag(double im){
            imag = im;
        }
};

int main() {
    double f_real, f_imag, s_real, s_imag;
    
    std:: cout << "First number REAL PART" << std::endl;
    std:: cin >> f_real;

    std:: cout << "First number IMAGINARY PART" << std::endl;
    std:: cin >> f_imag;

    std:: cout << "Second number REAL PART" << std::endl;
    std:: cin >> s_real;

    std:: cout << "Second number IMAGINARY PART" << std::endl;
    std:: cin >> s_imag;    

    Complex obj1(f_real, f_imag);
    obj1.print();

    Complex obj2(s_real, s_imag);
    obj2.print();

    Complex c;
    c = obj1.add(obj2);

    std::cout << std::endl;
    std::cout << "Sum is: " << c.getReal() << " + " << c.getImag() << "i" << std::endl;
    
    c = obj1.sub(obj2);
    std::cout << "Subtraction is: " << c.getReal() << " + " << c.getImag() << "i" << std::endl;

    c = obj1.mult(obj2);
    std::cout << "Multiple is: " << c.getReal() << " + " << c.getImag() << "i" << std::endl;

    c = obj1.div(obj2);
    std::cout << "Division is: " << c.getReal() << " + " << c.getImag() << "i" << std::endl;
}