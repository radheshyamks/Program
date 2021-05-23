#include<iostream>
#include "header.hpp"
void Input::setData(int x,int y)
{
     a = x;
     b = y;
}
int Input::showData()
{
	if(a>= 10){
		return a*5;
	}else{
		return b+5;
	}
}
