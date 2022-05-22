#ifndef SENSOR_H
#define SENSOR_H

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

class Sensor{

private:
    double *_datoT;
    double *_datoH;
    double *_datoV;
    double *_datoD;
    double *_datoP;
    double *_datoI;
    int _tamanoT;
    int _limiteT;
    int _tamanoH;
    int _limiteH;
    int _tamanoV;
    int _limiteV;
    int _tamanoD;
    int _limiteD;
    int _tamanoP;
    int _limiteP;
    int _tamanoI;
    int _limiteI;

public:
    Sensor(int tamanoT = 1, int limiteT = 45,int tamanoH =1, int limiteH = 101, int tamanoV = 1, int limiteV = 41, int tamanoD = 1, int limiteD = 360, int tamanoP = 1, int limiteP = 51, int tamanoI = 1, int limiteI = 20001 ){

        _datoT = new double[tamanoT];
        _tamanoT = tamanoT;
        _limiteT = limiteT;
        for (int i = 0 ; i < _tamanoT; i++) _datoT[i] = 0. ;

        _datoH = new double[tamanoH];
        _tamanoH = tamanoH;
        _limiteH = limiteH;
        for (int i = 0 ; i < _tamanoH; i++) _datoH[i] = 0. ;

        _datoV = new double[tamanoV];
        _tamanoV = tamanoV;
        _limiteV = limiteV;
        for (int i = 0 ; i < _tamanoV; i++) _datoV[i] = 0. ;

        _datoD = new double[tamanoD];
        _tamanoD = tamanoD;
        _limiteD = limiteD;
        for (int i = 0 ; i < _tamanoD; i++) _datoD[i] = 0. ;

        _datoP = new double[tamanoP];
        _tamanoP = tamanoP;
        _limiteP = limiteP;
        for (int i = 0 ; i < _tamanoP; i++) _datoP[i] = 0. ;

        _datoI = new double[tamanoI];
        _tamanoI = tamanoI;
        _limiteI = limiteI;
        for (int i = 0 ; i < _tamanoI; i++) _datoI[i] = 0. ;
    }
    ~Sensor(){ delete []_dato; }
    double leerDato(int i = 0){ if(i<_tamanoT) return _dato[i]; else return 0 ; }
    void actualizar(){
        for(int i=0; i < _tamanoT; i++)
            _dato[i] = ( rand() % _limiteT * 10 ) / 10.;
    }
    std::string mostrarDatos(){
        std::stringstream a;
        for(int i =0; i< _tamanoT; i++)
            a << _datoT[i] << "; ";

        a << std::endl;
        return a.str();

    std::string mostrarDatos(){
        std::stringstream a;
        for(int i =0; i< _tamanoH; i++)
           a << _datoH[i] << "; ";

        a << std::endl;
        return a.str();

    std::string mostrarDatos(){
        std::stringstream a;
        for(int i =0; i< _tamanoV; i++)
           a << _datoV[i] << "; ";

        a << std::endl;
        return a.str();

    std::string mostrarDatos(){
        std::stringstream a;
        for(int i =0; i< _tamanoD; i++)
           a << _datoD[i] << "; ";

        a << std::endl;
        return a.str();

    std::string mostrarDatos(){
        std::stringstream a;
        for(int i =0; i< _tamanoP; i++)
           a << _datoP[i] << "; ";

        a << std::endl;
        return a.str();

    std::string mostrarDatos(){
        std::stringstream a;
        for(int i =0; i< _tamanoI; i++)
           a << _datoI[i] << "; ";

        a << std::endl;
        return a.str();

    }
    }
    }
    }
    }
    }
    void acumularEn( int i = 0, double d ){ _datoT[i] += d;}
    double promediarEntre( int i = 0, double n ){ return _datoT[i] / n ;}

    void acumularEn( int i = 0, double d ){ _datoH[i] += d;}
    double promediarEntre( int i = 0, double n ){ return _datoH[i] / n ;}

    void acumularEn( int i = 0, double d ){ _datoV[i] += d;}
    double promediarEntre( int i = 0, double n ){ return _datoV[i] / n ;}

    void acumularEn( int i = 0, double d ){ _datoD[i] += d;}
    double promediarEntre( int i = 0, double n ){ return _datoD[i] / n ;}

    void acumularEn( int i = 0, double d ){ _datoP[i] += d;}
    double promediarEntre( int i = 0, double n ){ return _datoP[i] / n ;}

    void acumularEn( int i = 0, double d ){ _datoI[i] += d;}
    double promediarEntre( int i = 0, double n ){ return _datoI[i] / n ;}
};



#endif // SENSOR_H
