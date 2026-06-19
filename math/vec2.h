#pragma once
#include<math.h>
#include<stdbool.h>

typedef struct{
    float x;
    float y;
}vect2d;

static inline vect2d createVect2d(float x, float y){
    return (vect2d){ .x = x, .y = y };
}

static inline vect2d addVect2d(vect2d a, vect2d b){
    return (vect2d){ .x = a.x+b.x, .y = a.y+b.y };
}
static inline vect2d subVect2d(vect2d a, vect2d b){
    return (vect2d){ .x = a.x-b.x, .y = a.y-b.y };
}
static inline vect2d scalarMultVect2d(vect2d a, float scalar){
    return (vect2d){ .x = a.x*scalar, .y = a.y*scalar };
}
static inline vect2d scalarDivVect2d(vect2d a, float scalar){
    return (vect2d){ .x = a.x/scalar, .y = a.y/scalar };
}
static inline bool equalVect2d(vect2d a, vect2d b){
    return (a.x == b.x && a.y == b.y);
}
static inline int getHashVect2d(vect2d a){
    int hashX=*(int*)&a.x;
    int hashY=*(int*)&a.y;
    int hash = 17; // trb nr prim
    hash = hash * 31 + hashX;
    hash = hash * 31 + hashY;
    return hash;
}

static inline float lengthVect2d(vect2d a){
    return sqrt(a.x*a.x + a.y*a.y);
}

static inline float distanceVect2d(vect2d a, vect2d b){
    return sqrt((b.x-a.x)*(b.x-a.x) + (b.y-a.y)*(b.y-a.y));
}

static inline vect2d normalizeVect2d(vect2d a){
    return scalarDivVect2d(a, lengthVect2d(a));
}

static inline float dotProductVect2d(vect2d a, vect2d b){
    return a.x*b.x + a.y*b.y;
}
static inline float crossProductVect2d(vect2d a, vect2d b){
    return a.x*b.y - a.y*b.x;
}