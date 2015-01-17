//
//  LoadingSaving.h
//  PointPairFeatures
//
//  Created by Adrian Haarbach on 27.06.14.
//  Copyright (c) 2014 Adrian Haarbach. All rights reserved.
//

#ifndef __PointPairFeatures__LoadingSaving__
#define __PointPairFeatures__LoadingSaving__

#include <iostream>
#include <eigen3/Eigen/Dense>
#include <vector>
#include "Constants.h"

namespace LoadingSaving {
    using namespace Eigen;
    using namespace std;

    PointCloud loadPLY(const std::string filename, bool withNormals=true);
    void savePLY(const std::string filename, PointCloud PC);

    MatrixXi loadMatrixXi(std::string filename);
    MatrixXf loadMatrixXf(std::string filename);
    MatrixXd loadMatrixXd(std::string filename);

    //load exr depth map produced by blender / or png depth map from kinect and project it to 3d pts
    PointCloud loadPointCloudFromDepthMap(const std::string filename, Matrix3f K, bool show=false);
    PointCloud loadPointCloud(std::string filename, int ptLimit=-1);
    void writePointCloud(std::string filename, PointCloud C);


    Matrix4f loadMatrix4f(std::string filename);
    Matrix3f loadMatrix3f(std::string filename);
    Vector3f loadVector3f(std::string filename);



    void saveMatrixXi(std::string filename, MatrixXi mat);
    void saveMatrixXf(std::string filename, MatrixXf mat);
    void saveMatrixXd(std::string filename, MatrixXd mat);

    void saveMatrix4f(std::string filename, Matrix4f mat);
    void saveMatrix3f(std::string filename, Matrix3f mat);


    void saveVector(std::string filename, vector<double> vec);

    vector<string> getAllImagesFromFolder(string dirStr, string prefix);
    vector<string> getAllTextFilesFromFolder(string dirStr, string prefix);
}

#endif /* defined(__PointPairFeatures__LoadingSaving__) */
