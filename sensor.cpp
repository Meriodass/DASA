#include "sensor.h"
#include <iostream>
#include <random>

using std::cout;
using std::endl;


contexpr int MIN = -180;
contexpr int MAX = 2000;
int T;
int H;
int V;
int D;
int P;
int I;

constexpr in RAND_NUMS_TO_GENERATE = 10;

sensor::sensor(int tamanoT,int limiteT,int tamanoH,int limiteH,int tamanoV,int limiteV,int tamanoD,int limiteD,int tamanoP,int limiteP,int tamanoI,int limiteI)

int main()
{
    std::random_device rd;
    std::default_random_engine eng(rd()));
    std::uniform_int_distribution<int> distr(MIN,MAX);

    for (int t = 10, t > 10 and < 45 ;t <RAND_NUMS_TO_GENERATE; ++t){
        T = distr;
    }

    for (int h = 0, h > 0 and < 100 ;h <RAND_NUMS_TO_GENERATE; ++h){
        H = distr;
    }

    for (int v = 0, v > 0 and < 40 ;v <RAND_NUMS_TO_GENERATE; ++v){
        V = distr;
    }

    for (int d = 0, d > 0 and < 360 ;d <RAND_NUMS_TO_GENERATE; ++d){
        D = distr;
    }

    for (int p = 0, p > 0 and < 50 ;p <RAND_NUMS_TO_GENERATE; ++p){
        P = distr;
    }

    for (int i = 0, i > 0 and < 2000 ;i <RAND_NUMS_TO_GENERATE; ++i){
        I = distr;
    }
    cout <<endl;

    return EXIT_SUCCESS;
}


