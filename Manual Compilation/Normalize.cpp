#include"Normalize.h"
#include<math.h>

Vector3 normalize(Vector3 v){
    if((v.x==0 && v.y==0 && v.z==0)){
        return v;
    }
    double length=sqrt(v.x*v.x+v.y*v.y+v.z*v.z);
    Vector3 w(v.x/length,v.y/length,v.z/length);
    return w;
}