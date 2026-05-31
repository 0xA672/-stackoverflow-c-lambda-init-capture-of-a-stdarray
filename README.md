![C++20](https://img.shields.io/badge/C%2B%2B-20-blue?style=flat&logo=c%2B%2B)


### Install fmt if not already installed
```shell
git clone https://github.com/fmtlib/fmt.git
cd fmt
mkdir build && cd build
cmake ..
make -j$(nproc)
sudo make install
```

### Then build
```shell
g++ -std=c++20 -Wall -Wextra -Wpedantic -Wconversion -Wsign-conversion \
    -Wshadow -Wold-style-cast -Wcast-qual -Wuseless-cast \
    -Wdouble-promotion -Wformat=2 -Wnull-dereference -Wduplicated-cond \
    test.cpp -lfmt -o test
```

