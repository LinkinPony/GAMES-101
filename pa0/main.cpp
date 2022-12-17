#include<cmath>
#include<eigen3/Eigen/Core>
#include<iostream>

int main(){
    using std::cout;
    using std::cin;
    using Eigen::Vector3f;
    using Eigen::Matrix3f;
    float x = 2,y = 1;
    Vector3f P(x,y,1);
    Matrix3f aff_mat;
    const double PI = acos(-1);
    aff_mat << cos(PI/4),-sin(PI/4),1
               ,sin(PI/4),cos(PI/4),2,
               0,0,1;
    P = aff_mat * P;
    cout << P.x() / P.z() << " " << P.y() / P.z();
    return 0;
}