#include "bruteforce.h"

bruteforce::bruteforce(const QVector<uint32_t>& planeText, const QVector<uint32_t>& chiperText, const std::size_t& regMaxLen): registerLength(regMaxLen)
{
    key.clear();
    key.reserve(planeText.size() * 32);

    for (std::size_t i = 0; i < planeText.size(); ++i) {
        uint32_t xorResult = planeText[i] ^ chiperText[i];

        for (int bit = 0; bit < 32; ++bit) {
            key.push_back((xorResult >> bit) & 1);
        }
    }
}

void bruteforce::find(const std::size_t& colNum) {
    for (std::size_t& colNum = this->registerLength; colNum < this->registerMaxLength; ++colNum) {
        bool isWrong = false;
        auto iter = this->key.begin() + colNum;
        while ((*iter & *(iter - colNum + 1)) && (iter - this->key.begin() < this->registerMaxLength * 2)) {
            ++iter;
        }
        if (iter - this->key.begin()== this->registerLength * 2) {
            break;
        }
    }
}
