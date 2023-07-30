//// Define the input and output file paths
//std::string inputFilePath = "D:\\poorvik\\dentalMould.txt";
//
//std::string outputFilePath = "D:\\poorvik\\dentalMould_ply.ply";
#include <pcl/io/ply_io.h>
#include <pcl/io/obj_io.h>
#include <pcl/point_types.h>
#include <pcl/visualization/pcl_visualizer.h>
#include<vtkRenderWindow.h>
#include<vtkRendererCollection.h>
#include<vtkInteractorStyleTrackballCamera.h>

int main()
//D://cmti_works//3d_rendering//fully working

{
    std::string inputFilename = "D:\\cmti_works\\3d_rendering\\zz\\bunny.obj";
    // Load .ply file
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZ>);
    pcl::OBJReader reader;
    reader.read(inputFilename, *cloud);


    // Create visualization object
    pcl::visualization::PCLVisualizer viewer("Point Cloud Viewer");
    viewer.setBackgroundColor(0.0, 0.0, 0.0);
    viewer.addPointCloud(cloud, "cloud");

    // Get the VTK render window
    vtkRenderWindow* renderWindow = viewer.getRenderWindow();

    // Set up interactor style for zoom, rotate, and pan
    vtkInteractorStyleTrackballCamera* interactorStyle = vtkInteractorStyleTrackballCamera::New();
    renderWindow->GetInteractor()->SetInteractorStyle(interactorStyle);

    // Start the viewer
    viewer.spin();


    return 0;
}




























