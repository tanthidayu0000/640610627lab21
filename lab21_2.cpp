#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *a,Rect *b){
	double w=0;
	double h=0;
	if(a->w + a->x > b->x)
	{
		if(a->x + a->w < b->x+b->w)
			w=a->w - abs(b->x - a->x);
		else
			w=b->w;
		if(a->y + a->h < b->y + b->h)
			h=b->h - abs(b->y - a->y);
		else
			h=b->h;
	}
	return w*h;
}
