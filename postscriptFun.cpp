//
// Created by LN on 3/27/2018.
//

#include <iostream>
#include <fstream>
#include "Postscript.h"
#include <string>
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
    //R G B values will be from 0 - 255 (per color)
    //Postscript only takes in values from 0 - 1 (per color)
    ofstream fout;

    fout.open(file,ios::app);
    fout<<r<<" "<<g<<" "<< b<<" "<<"setrgbcolor"<<endl;
    fout.close();
}
void Postscript::drawCircle(int, int, int) {
    //x y r 0 360 arc closepath stroke/fill
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
    //Note that this function and the function below are similar except last line
    //^ take advantage of that
}
void Postscript::fillTriangle(int, int, int, int, int, int) {

}
void Postscript::fillRect(int, int, int, int) {
    //note that this function is similar to the earlier function
}
void Postscript::setFillColor(int, int, int) {
    // Takes in values 0 - 1
    //I think this is similar to setColor <- take advantage of that
}
void Postscript::setStrokeColor(int, int, int) {
    // Takes in values 0 - 1
    //I think this is similar to setColor <- take advantage of that

}
void Postscript::text(int, int, char *) {
    /* Here's what I found (in Postscript) for printing text
     * If you find something different you can try that too
     * 
     * /Times-Roman findfont
     * 20 scalefont
     * setfont
     * newpath
     * x y moveto
     * (text here) show
     * 
     */
}
void Postscript::grid(int, int, int, int, int, int) {
    /* Draw the lines in a loop --> draw all the horizontal lines then all the vertical lines
     * Parameters (int xStart, int xStep, int xEnd, int yStart, int yStep, int yEnd)
     * 
     *  xEnd                   |______________|__________________|___________________________|
     *  ...                    |______________|__________________|___________________________|
     *  xStart+xStep+xStep     |______________|__________________|___________________________|
     *  xStart+xStep           |______________|__________________|___________________________|
     *  xStart                 |______________|__________________|___________________________|
     * 
     *                         yStart   yStart+yStep        yStart+yStep+yStep      ...     yEnd
     */
}
