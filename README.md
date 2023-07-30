# 3D model rendering and visualization using open-source libraries

[![License](https://img.shields.io/badge/License-MIT-blue.svg)](https://opensource.org/licenses/MIT)

## Table of Contents
- [Introduction](#introduction)
- [Features](#features)
- [References used](#references-used)
- [Technologies Used](#technologies-used)
- [Getting Started](#getting-started)
- [Output](#output)
- [Contributions](#contributions)
- [License](#license)
- [Contact Information](#contact-information)
- [Acknowledgments](#acknowledgments)

## Introduction

The problem statement revolves around 3D model rendering and visualization using the PCL (Point Cloud Library) and VTK (Visualization Toolkit) packages. These libraries are commonly used in the field of computer vision and 3D point cloud processing.
The main challenge in this problem is to efficiently render and visualize 3D models or point clouds using PCL and VTK. This involves tasks such as loading 3D model data, processing the data, and then rendering it in a visually appealing and interactive manner.




The objective is to leverage PCL and VTK capabilities effectively to load, process, and render 3D models or point clouds, ensuring high-quality visualization and interactive features.


## Features

-  **Data loading**: The challenge is to correctly parse 3D model or point cloud data in various formats like PCD, OBJ, etc., and create a suitable data structure for further processing.

-  **Visualization configuration**: Configuring rendering parameters is crucial for the desired output. This includes camera views, lighting, color maps, and representation styles (e.g., point clouds, surface meshes). Choosing appropriate settings significantly impacts visual quality.

-  **Rendering**: Transforming 3D data into a visual representation using PCL and VTK involves techniques like point and surface rendering, texture mapping, shading, and transparency effects. The goal is to create visually appealing and informative renderings.
-  **Interaction and user interface**: Implementing interactive features such as zooming, rotating, and panning the 3D model, as well as selecting and highlighting specific regions of interest, enhances user experience. An intuitive and user-friendly interface is essential.

## References used

-  [Pcl documentation](https://pointclouds.org/)
- [Vtk documentation](https://vtk.org/)
- [Vcpkg installation repo](https://github.com/microsoft/vcpkg/)
- [Visual studio code]( https://visualstudio.microsoft.com/downloads/)
- [Qt](https://www.qt.io/download-qt-installer-oss?hsCtaTracking=99d9dd4f-5681-48d2-b096-470725510d34%7C074ddad0-fdef-4e53-8aa8-5e8a876d6ab4)
- [Rendering documentation](https://pcl.readthedocs.io/projects/tutorials/en/latest/qt_visualizer.html)









## Technologies Used
 -  Visual Studio IDE
-  VCPKG package Manager
-  cpp
 -  Point Cloud Library (PCL) 
 > PCL Dependencies
 > - 	Boost
 > - 	VTK (Visualization Toolkit)



### Getting Started

To get the project running on your local machine, follow these steps:

1. ###	Install Visual Studio:
-	Download and install Visual Studio from the official Microsoft website.
-	Choose the appropriate version based on your operating system and requirements.

2. ### Installation steps
- `Installing PCL VCPKG package`
### Quick Start: Windows

Prerequisites:
- Windows 7 or newer
- [Git][getting-started:git]
- [Visual Studio][getting-started:visual-studio] 2015 Update 3 or greater with the English language pack

First, download and bootstrap vcpkg itself; it can be installed anywhere,
but generally we recommend using vcpkg as a submodule for CMake projects,
and installing it globally for Visual Studio projects.
We recommend somewhere like `C:\src\vcpkg` or `C:\dev\vcpkg`,
since otherwise you may run into path issues for some port build systems.

```cmd
> git clone https://github.com/microsoft/vcpkg
> .\vcpkg\bootstrap-vcpkg.bat
```
---
# `In our case  replace  "[packages to install]" to "pcl"`
---
To install the libraries for your project, run:

```cmd
> .\vcpkg\vcpkg install [packages to install]

```

Note: This will install x86 libraries by default. To install x64, run:

```cmd
> .\vcpkg\vcpkg install [package name]:x64-windows
```

Or

```cmd
> .\vcpkg\vcpkg install [packages to install] --triplet=x64-windows
```

You can also search for the libraries you need with the `search` subcommand:

```cmd
> .\vcpkg\vcpkg search [search term]
```

In order to use vcpkg with Visual Studio,
run the following command (may require administrator elevation):

```cmd
> .\vcpkg\vcpkg integrate install
```

After this, you can now create a New non-CMake Project (or open an existing one).
All installed libraries are immediately ready to be `#include`'d and used
in your project without additional configuration.

If you're using CMake with Visual Studio,
continue [here](#vcpkg-with-visual-studio-cmake-projects).

In order to use vcpkg with CMake outside of an IDE,
you can use the toolchain file:

```cmd
> cmake -B [build directory] -S . "-DCMAKE_TOOLCHAIN_FILE=[path to vcpkg]/scripts/buildsystems/vcpkg.cmake"
> cmake --build [build directory]
```

With CMake, you will still need to `find_package` and the like to use the libraries.
Check out the [CMake section](#using-vcpkg-with-cmake) for more information,
including on using CMake with an IDE.

### Quick Start: Unix

Prerequisites for Linux:
- [Git][getting-started:git]
- [g++][getting-started:linux-gcc] >= 6

Prerequisites for macOS:
- [Apple Developer Tools][getting-started:macos-dev-tools]

First, download and bootstrap vcpkg itself; it can be installed anywhere,
but generally we recommend using vcpkg as a submodule for CMake projects.

```sh
$ git clone https://github.com/microsoft/vcpkg
$ ./vcpkg/bootstrap-vcpkg.sh
```

To install the libraries for your project, run:

```sh
$ ./vcpkg/vcpkg install [packages to install]
```

You can also search for the libraries you need with the `search` subcommand:

```sh
$ ./vcpkg/vcpkg search [search term]
```

In order to use vcpkg with CMake, you can use the toolchain file:

```sh
$ cmake -B [build directory] -S . "-DCMAKE_TOOLCHAIN_FILE=[path to vcpkg]/scripts/buildsystems/vcpkg.cmake"
$ cmake --build [build directory]
```

With CMake, you will still need to `find_package` and the like to use the libraries.
Check out the [CMake section](#using-vcpkg-with-cmake)
for more information on how best to use vcpkg with CMake,
and CMake Tools for VSCode.

### Installing Linux Developer Tools

Across the different distros of Linux, there are different packages you'll
need to install:

- Debian, Ubuntu, popOS, and other Debian-based distributions:

```sh
$ sudo apt-get update
$ sudo apt-get install build-essential tar curl zip unzip
```

- CentOS

```sh
$ sudo yum install centos-release-scl
$ sudo yum install devtoolset-7
$ scl enable devtoolset-7 bash
```

For any other distributions, make sure you're installing g++ 6 or above.
If you want to add instructions for your specific distro,
[please open a PR][contributing:submit-pr]!

### Installing macOS Developer Tools

On macOS, the only thing you should need to do is run the following in your terminal:

```sh
$ xcode-select --install
```

Then follow along with the prompts in the windows that comes up.

You'll then be able to bootstrap vcpkg along with the [quick start guide](#quick-start-unix)

## Using vcpkg with CMake

#### **Visual Studio Code with CMake Tools**

Adding the following to your workspace `settings.json` will make
CMake Tools automatically use vcpkg for libraries:

```json
{
  "cmake.configureSettings": {
    "CMAKE_TOOLCHAIN_FILE": "[vcpkg root]/scripts/buildsystems/vcpkg.cmake"
  }
}
```

#### Vcpkg with Visual Studio CMake Projects

Open the CMake Settings Editor, and under `CMake toolchain file`,
add the path to the vcpkg toolchain file:

```
[vcpkg root]/scripts/buildsystems/vcpkg.cmake
```

#### Vcpkg with CLion

Open the Toolchains settings
(File > Settings on Windows and Linux, CLion > Preferences on macOS),
and go to the CMake settings (Build, Execution, Deployment > CMake).
Finally, in `CMake options`, add the following line:

```
-DCMAKE_TOOLCHAIN_FILE=[vcpkg root]/scripts/buildsystems/vcpkg.cmake
```

You must add this line to each profile.

#### Vcpkg as a Submodule

When using vcpkg as a submodule of your project,
you can add the following to your CMakeLists.txt before the first `project()` call,
instead of passing `CMAKE_TOOLCHAIN_FILE` to the cmake invocation.

```cmake
set(CMAKE_TOOLCHAIN_FILE "${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake"
  CACHE STRING "Vcpkg toolchain file")
```

This will still allow people to not use vcpkg,
by passing the `CMAKE_TOOLCHAIN_FILE` directly,
but it will make the configure-build step slightly easier.
 ## Configuration details



1. After  completing the  above steps
2. > In Visual studio code
Under project
	>> Select project_name -> Properties->
  ![Screenshot 1](/1.png)
  Make sure that configuration and platform are set to above config
>> Configuration properties ->c/c++ ->general->Additional Include Directories: -(add the below path)
C:\vcpkg\packages\vtk_x64-windows\include\vtk-9.2



## Output 

![Screenshot 1](/2.png)
![Screenshot 2](/3.png)





## Contributions

We welcome contributions from the community. If you want to contribute to the project, please follow these steps:

1. [Include guidelines for contributions]
2. [Explain how to submit pull requests or report issues]

## License

This project is licensed under the [MIT License](https://opensource.org/licenses/MIT).

## Contact Information

For any questions or feedback, feel free to reach out to us at:
- Email: granth.poorvik@gmail.com
- GitHub: [ GitHub Profile](https://github.com/granthpoorvik)
- linkedin: [profile](https://www.linkedin.com/in/jainpoorvik/)

## Acknowledgments

I would like to acknowledge and express our gratitude to `Central Manufacturing Techenological Institute` [`CMTI`].


