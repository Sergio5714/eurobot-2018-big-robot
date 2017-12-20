#include "Kinematics.h"
//This document includes the forward and reverse kinematics of a robot with 4 omni wheels
//Full explanation is here: ( https://docs.google.com/document/d/1IShP9O5Ke3e50hDjm0TVveUJd4YA53RzAsRMRkQrHEM/edit )
//For the first picture in the solution part

// Note : matrix of forward kinematics already takes into account 2 cylindrical transmissions (wheels 2 and 4)

float MLineSpeed[4][3] = { 47.14,  -47.14,  0.0,  // forward linear matrix
                           47.14,   47.14,  0.0,
                           47.14,   47.14,  0.0,
                           47.14,  -47.14,  0.0};


float MRotSpeed[4][3] = { 0.0,  0.0,  -6.85,  // forward rotation matrix
                          0.0,  0.0,   6.85,
                          0.0,  0.0,  -6.85,
                          0.0,  0.0,   6.85};


//For the third picture in the solution part



float InverseKinematics[3][4] = { 0.0212,  0.0212,  -0.0212,  -0.0212,  // inverse matrix
                                 -0.0212,  0.0212,   0.0212,  -0.0212,     
                                 -0.1459,  0.1459,  -0.1459,   0.1459 };



