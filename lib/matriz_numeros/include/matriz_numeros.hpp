#pragma once

#include <array>
#include <cstddef>

// Could be used a std::pair instead, but I prefer this struct for clarity
// purposes
struct Result {
    int odd;
    int gt_zero;
};

template <size_t N, size_t M>
Result buscar_en_matriz(std::array<std::array<int, N>, M> arr)
{
    Result ret = {.odd = 0, .gt_zero = 0};

    for (size_t i = 0; i < N; i++) {
        for (size_t j = 0; j < M; j++) {
            if (arr[i][j] > 0)
                ++ret.gt_zero;
            if (arr[i][j] % 2 == 0)
                ++ret.odd;
        }
    }
    return ret;
}
