#include <fmt/core.h>
#include <fmt/ranges.h>
#include <array>

auto CountsDifferentiator = [previous = std::array<long long, 8>{}](std::array<int, 8> current) mutable
{
    fmt::print("prev: {}\ncur : {}\n", previous, current);
    std::array<int,8> difference;
    for (unsigned j = 0; auto& d : difference) {
        d = current[j] - previous[j] + (current[j] - previous[j] < 0)*(1<<24) ;
        previous[j] = current[j];
        ++j;
    }
    return difference;
};

int main() {
    std::array<int, 8> a1{1,2,3,4,5,6,7,8};
    std::array<int, 8> a2{10,20,30,40,50,60,70,80};

    auto diff1 = CountsDifferentiator(a1);
    fmt::print("diff1: {}\n\n", diff1);

    auto diff2 = CountsDifferentiator(a2);
    fmt::print("diff2: {}\n\n", diff2);

    return 0;
}
