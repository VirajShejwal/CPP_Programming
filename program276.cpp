#include<iostream>
using namespace std;

//specific code

class Arithematic
{
    public:
        double No1;
        double No2;

        Arithematic(double A, double B)
        {
            No1 = A;
            No2 = B;
        }

        double Addition()
        {
            double Ans;
            Ans = No1 +No2;
            return Ans;
        }

};

int main()
{
    Arithematic aobj1(9.2,11.2);
    Arithematic aobj2(10.1,21.2);

    cout<<aobj1.Addition()<<"\n";
    cout<<aobj2.Addition()<<"\n";

    return EXIT_SUCCESS;
}