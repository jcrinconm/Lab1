#include <iostream>

//Ejemplo Estructura y puntero

struct struct1
{
    int arg1 = 100;
    char arg2 = 'b';
    float arg3 = 1.2587;
    char arg4 = 'c';
    double arg5 = 1.2;
    int arg6 = 200;
};

struct struct2
{
    int arg12 = 1000;
    int arg22 = 5000;
    float arg32 = 189;
    char arg42 = 'z';
    char arg52 = 'X';
    double arg62 = 45.489;
};

int main()
{
    struct1 mi_struct;

    struct1 *mi_puntero = &mi_struct;

    //std::cout<<mi_struct.arg1<<std::endl;

    std::cout<<"El valor del arg1 es :"<<(mi_puntero)->arg1<<std::endl;
    std::cout<<"El valor del arg2 es :"<<((mi_puntero))->arg2<<std::endl;
    std::cout<<"El valor del arg3 es :"<<((mi_puntero)+2)->arg1<<std::endl;
    std::cout<<"El valor del arg4 es :"<<((mi_puntero))->arg4<<std::endl;
    std::cout<<"El valor del arg5 es :"<<((mi_puntero))->arg5<<std::endl;
    std::cout<<"El valor del arg6 es :"<<((mi_puntero))->arg6<<std::endl;
    std::cout<<"_____________________________"<<std::endl;
    std::cout<<std::endl;

    //std::cout<<*(((char*)mi_puntero)+1)<<std::endl;


    //__________________________________________________

    struct2 mi_struct2;

    struct2 *mi_puntero2 = &mi_struct2;

    //std::cout<<mi_struct.arg1<<std::endl;

    std::cout<<"El valor del arg12 es: "<<(mi_puntero2)->arg12<<std::endl;
    std::cout<<"El valor del arg22 es: "<<((mi_puntero2))->arg22<<std::endl;
    std::cout<<"El valor del arg32 es: "<<((mi_puntero2)+2)->arg12<<std::endl;
    std::cout<<"El valor del arg42 es: "<<((mi_puntero2))->arg42<<std::endl;
    std::cout<<"El valor del arg52 es: "<<((mi_puntero2))->arg52<<std::endl;
    std::cout<<"El valor del arg62 es: "<<((mi_puntero2))->arg62<<std::endl;

    //std::cout<<*(((char*)mi_puntero)+1)<<std::endl;

        return 0;
}









/*/Ejemplo punteros a funciones

void func1(int arg);
void func2(int arg);
int func3(int arg1, float arg2);

void (*puntero_a_funcion)(int);

int (*puntero2)(int, float);

int main()
{
    puntero_a_funcion = &func1;
    (*puntero_a_funcion)(1);
*/
