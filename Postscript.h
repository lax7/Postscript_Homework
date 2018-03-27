//
// Created by LN on 3/27/2018.
//

#ifndef POSTSCRIPT_POSTSCRIPT_H
#define POSTSCRIPT_POSTSCRIPT_H

#include <iostream>
#include <fstream>


class Postscript{
private:
     char *file;
public:
    Postscript( char *);
    void line (int, int, int, int);
    void setColor(int, int, int);
    void drawRect(int, int, int,int);
    void fillRect(int ,int,int,int);
    void setFillColor(int, int,int);
    void setStrokeColor(int,int,int);
    void drawTriangle(int,int,int,int,int,int);
    void fillTriangle(int,int,int,int,int,int);
    void drawCircle(int,int,int);
    void text(int, int,  char*);
    void grid(int,int,int,int,int,int);


};

#endif //POSTSCRIPT_POSTSCRIPT_H
