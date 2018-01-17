#include<iostream>
#include<iomanip>
using namespace std;
bool isCollinear(int x1,int y1,int x2,int y2,int x3,int y3);
int main(){
	int x1, x2, x3, y1, y2, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if(isCollinear(x1, y1, x2, y2, x3, y3)){
        cout << "Collinear.";
    } else {
       cout << "Not collinear.";
}
return 0;
}
bool isCollinear(int x1,int y1,int x2,int y2,int x3,int y3){
    double a,b;
    if((x3-x1)>(x2-x1)){
        a= (x3-x1)/(x2-x1);
        if((y3-y1)>(y2-y1)){
            b = (y3-y1)/a;
        }
        if(b==(y2-y1))
        return true;
    }
    else return false;
}
