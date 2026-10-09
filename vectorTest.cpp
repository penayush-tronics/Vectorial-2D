#include <iostream> //io header
#include <string> //stringg datatype 
#include <cmath> //math
//#include <random> //random

using namespace std;


void printNum(string text, double nums){
    cout << text << " " << nums << endl;

}

void print(string text){
    cout << text << endl;

}

double enterNum(string text){
    double num;
    cout << text;
    cin >> num;
    return num;
}

class vector{
    private:
     int i;
     int j;
     string vform;
    public:
     vector(int x, int y){
        i=x;
        j=y;
        vform=to_string(i)+"i + ("+to_string(j)+")"+"j";

     }
     int getI(){
        return i;
     }
     int getJ(){
        return j;
     }
     void showVect(){
        print(vform);
     }

};

vector vectAdd(vector v1, vector v2){
    int newi;
    int newj;
    newi=v1.getI()+v2.getI();
    newj=v1.getJ()+v2.getJ();
    return vector(newi,newj);

}

vector vectSub(vector v1, vector v2){
    int newi;
    int newj;
    newi=v1.getI()-v2.getI();
    newj=v1.getJ()-v2.getJ();
    return vector(newi,newj);

}

int vectDot(vector v1, vector v2){
    int dot=v1.getJ()*v2.getJ()+v1.getI()*v2.getI();
    return dot;

}

int main(){
    vector a(enterNum("Enter x-coord "),enterNum("Enter y-coord "));
    a.showVect();
    vector b(enterNum("Enter x-coord "),enterNum("Enter y-coord "));
    b.showVect();
    vector c=vectAdd(a,b);
    c.showVect();
    vector d=vectSub(a,b);
    d.showVect();
    printNum("Dot product is: ",vectDot(a,b));



    return 0;
}
