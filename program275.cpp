#include<iostream>
using namespace std;

//specific code

class Arithematic
{
    public:
        float No1;
        float No2;

        Arithematic(float A, float B)
        {
            No1 = A;
            No2 = B;
        }

        float Addition()
        {
            float Ans;
            Ans = No1 +No2;
            return Ans;
        }

};

int main()
{
    Arithematic aobj1(9.2f,11.1f);
    Arithematic aobj2(10.1f,21.2f);

    cout<<aobj1.Addition()<<"\n";
    cout<<aobj2.Addition()<<"\n";

    return EXIT_SUCCESS;
}