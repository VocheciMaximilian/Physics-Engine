#include "vec2d"
enum ShapeType{
    Circle=0,
    box;
}
typedef struct{
    vect2d position;
    vect2d liniarVelocity;
    float rotation;
    float rotationVelocity;

    float density;
    float mass;
    float restitution;
    float area;
    
    bool isStatic;

    float radius;
    float width;
    float height;
    ShapeType shapeType;
}