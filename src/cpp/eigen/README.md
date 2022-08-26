# Eigen (C++ linear algebra library)

Website: <http://eigen.tuxfamily.org/>

Download eigen lib:
```console
wget https://gitlab.com/libeigen/eigen/-/archive/3.4.0/eigen-3.4.0.tar.gz
tar zxf eigen-3.4.0.tar.gz
rm eigen-3.4.0.tar.gz
sudo ln -s eigen-3.4.0/Eigen /usr/local/include/
```

If the symlink is not created, use `-I /path/to/eigen-3.4.0/Eigen` during
compilation.
