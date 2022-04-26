// krestiki_i_noliki.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
    return 0;
}

int z1()   
{
    bool A = true;
    char B = 'B';
    short int C = 32'767;
    int D = 88'888;
    long long E = 356'489'756'789;
    float F = 35.48f;
    double G = 789.5963f;
    return 0;
}

int z2_3()
{
    enum game
    {
        nameP1,
        nameP2,
        vinP1,
        vinP2
    };
    {
        game name[2] = { nameP1, nameP2 };
        game schet[2] = { vinP1, vinP2 };
    }
    return 0;
}
int z4()
{
    struct pole
    {
        char lv;     //левая верхняя клетка
        char cv;     //центральня верхняя клетка
        char pv;     //правая верхняя клетка
        char lc;     //левая центральня клетка
        char cc;     //центральня клетка
        char pc;     //правая центральня клетка
        char ln;     //левая нижняя клетка
        char cn;     //центральня нижняя клетка
        char pn;     //правая нижняя клетка
        bool prv;    //считает верхнюю ряд
        bool prc;    //считает центральный ряд
        bool prn;    //считает нижний ряд
        bool diag1;  //считате слева-вех направо-низ диагональ
        bool diag2;  //считает справа-верх на лево-низ диагональ
        bool verl;   //считает левый столбец
        bool verc;   //считает центральй столбец
        bool verp;   //считате правый столбец
    };
    return 0;
}
int z5()
{
    union MyData
    {
        int isInt;
        float isFloat;
        char isChar;
    };
    struct MyVariant
    {
        unsigned isInt : 5;
        unsigned isFloat : 4;
        unsigned isChar : 7;
    };
    MyVariant date1 = { 31, 01, 20 };
    std::cout << sizeof(date1);
    return 0;
}
