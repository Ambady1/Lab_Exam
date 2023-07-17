#include<iostream>
using namespace std;

class float_numbers{
    protected:
        float num3, num4;
        void GetFloat(){
            cout<<"Enter 2 numbers\n";
            cin>>num3>>num4;
        }
};

class multiplication : virtual protected float_numbers {
    public:
        float product;
        float multi(){
            product = num3 * num4;
            return product;
        }
};

class division : virtual protected float_numbers{
    public:
        float quotient;
        float divi(){
            quotient = num3 / num4;
            return quotient;
        }
};

class arithmetic : public multiplication, public division {
    public:
        void display(){
            GetFloat();
            multi();
            divi();
            cout<<"\nProduct = "<<product<<endl;
            cout<<"\nQuotient = "<<quotient<<endl;
        }
};

int main() {
    arithmetic obj;
   obj.display();

    return 0;
}
