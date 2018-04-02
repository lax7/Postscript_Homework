//
// Created by LN on 3/27/2018.
//

#include <iostream>
#include <fstream>
#include "Postscript.h"
using namespace std;


Postscript::Postscript(char *c):file(c){

}
void Postscript::line(int x, int y, int w, int h) {
    ofstream fout;
    fout.open(file);
    fout<<x<<" "<<y<<" "<< "moveto"<<" " <<w<<" "<< h<<" "<<"lineto stroke"<<endl;
    fout.close();

}
void Postscript::setColor(int r, int g, int b) {
    ofstream fout;

    fout.open(file,ios::app);
    fout<<r<<" "<<g<<" "<< b<<" "<<"setrgbcolor"<<endl;
    fout.close();
}
void Postscript::drawCircle(int, int, int) {

}
void Postscript::drawRect(int a , int b , int c, int d) {
    ofstream fout;
    fout.open(file,ios::app);
    fout<<a<<" "<<b<<" "<<"moveto"<<endl;
    fout<<a+c<<" "<<b<<" "<<"lineto"<<endl;
    fout<<a+c<<" "<<b+d<<" "<<"lineto"<<endl;
    fout<<a<<" "<<b+d<<" "<<"lineto"<<endl;
    fout<<"closepath stroke"<<endl;
    fout.close();
}
void Postscript::drawTriangle(int, int, int, int, int, int) {

}
void Postscript::fillTriangle(int, int, int, int, int, int) {

}
void Postscript::fillRect(int, int, int, int) {

}
void Postscript::setFillColor(int, int, int) {

}
void Postscript::setStrokeColor(int, int, int) {

}
void Postscript::text(int, int, char *) {

}
void Postscript::grid(int, int, int, int, int, int) {

}
