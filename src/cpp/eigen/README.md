# Eigen (C++ linear algebra library)

Website: http://eigen.tuxfamily.org/

Download eigen lib:
```console
wget https://gitlab.com/libeigen/eigen/-/archive/3.4.0/eigen-3.4.0.tar.gz
tar zxf eigen-3.4.0.tar.gz
rm eigen-3.4.0.tar.gz
sudo ln -s eigen-3.4.0/Eigen /usr/local/include/
```

Include in your source code:
```cpp
#include <Eigen/Dense>
```

If the symlink is not created, use `-I /path/to/eigen-3.4.0/Eigen` during
compilation.

Alternatively, you can install from a package manager. On Ubuntu/Debian:
```
sudo apt install libeigen3-dev
```

If Eigen is installed by system package manager, include below in your source
file:
```cpp
#include <eigen3/Eigen/Dense>
```

When installed via `apt` the library is placed under `/usr/include/eigen3` while
the compiler by default search in `/usr/include`.
