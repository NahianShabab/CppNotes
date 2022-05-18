#include<iostream>
#include"Vector3.h"
#include"Normalize.h"
using std::cout;
int main(){
    Vector3 v(1,1,1);
    v=normalize(v);
    cout<<"Normalized vector: ("<<v.x<<","<<v.y<<","<<v.z<<")\n";
    return 0;
}