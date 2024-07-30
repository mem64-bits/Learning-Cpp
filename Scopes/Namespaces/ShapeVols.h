#ifndef SHAPE_VOLUME_FORMULAS // Header Guard 
#define SHAPE_VOLUME_FORMULAS

// Puts forward definitions in the namespace ShapeFormulas
namespace ShapeFormulas{
double SphereVol(double radius);
double coneVol(double radius, double height);
double pyth(double a, double b, double c); 
double cylinVol(double radius, double height);
double hemiVol(double radius);
}

#endif