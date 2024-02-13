#include<iostream>
#include<cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect a,Rect b){
    double width = max(0.0, min(a.x + a.w, b.x + b.w) - max(a.x, b.x));
    double height = max(0.0, min(a.y, b.y) - max(a.y - a.h, b.y - b.h));
    return width * height;

}