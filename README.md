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

Tested with GCC 16.1.0 on Ubuntu (x86_64), C++20 mode.
<img width="1673" height="760" alt="image" src="https://github.com/user-attachments/assets/c02ea9d8-ed6d-4818-8faa-4fbef93c325e" />
<img width="1500" height="199" alt="image" src="https://github.com/user-attachments/assets/c2bb4c11-19be-4492-b279-427b1d24e058" />

Can work.

> **Note:** I genuinely didn't know `std::format` had already absorbed `{fmt}` in C++20 when I first wrote this.  
> However, `std::print` is not available until C++23, and I'm used to `fmt::print`.  
> That’s why this project still depends on the `{fmt}` library — old habits, and one missing function. 😅
