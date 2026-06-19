#include<stdio.h>
#include<stdbool.h>

typedef struct{
    float x;
    float y;
}vect2d;

vect2d createVect2d(float x, float y){
    return (vect2d){ .x = x, .y = y };
}

vect2d addVect2d(vect2d a, vect2d b){
    return (vect2d){ .x = a.x+b.x, .y = a.y+b.y };
}
vect2d subVect2d(vect2d a, vect2d b){
    return (vect2d){ .x = a.x-b.x, .y = a.y-b.y };
}
vect2d scalarMultVect2d(vect2d a, float scalar){
    return (vect2d){ .x = a.x*scalar, .y = a.y*scalar };
}
vect2d scalarDivVect2d(vect2d a, float scalar){
    return (vect2d){ .x = a.x/scalar, .y = a.y/scalar };
}
bool equalVect2d(vect2d a, vect2d b){
    return (a.x == b.x && a.y == b.y);
}
int getHashVect2d(vect2d a){
    int hashX=*(int*)&a.x;
    int hashY=*(int*)&a.y;
    int hash = 17; // trb nr prim
    hash = hash * 31 + hashX;
    hash = hash * 31 + hashY;
    return hash;
}
