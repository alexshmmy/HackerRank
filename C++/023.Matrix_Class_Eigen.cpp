#include <iostream>

// Linux installation: sudo apt-get install libeigen3-dev
#include <eigen3/Eigen/Dense>

using namespace Eigen;
using namespace std;

int main(void) {
    MatrixXd A(2,3);

    A(0,0) = 3;
    A(1,0) = 2.5;
    A(0,1) = -1;
    A(0,2) = -3;
    A(1,1) = A(1,0) + A(0,1);
    A(1,2) = A(1,0) + A(1,1);

    cout << "Here is the matrix A:\n" << A << endl;
    cout << "Number of columns in matrix A:\n" << A.cols() << endl;
    cout << "Number of rows in matrix A:\n" << A.rows() << endl;

    VectorXd v(2);
    v(0) = 4;
    v(1) = v(0) - 1;

    cout << "Here is the vector v:\n" << v << endl;

    // matrix initializatin with commas
    MatrixXd B(2,2);
    B << 0, 1, 2, 4;

    cout << "Here is the matrix B:\n" << B << endl;

    return 0;
}
