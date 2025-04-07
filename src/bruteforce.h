#ifndef BRUTEFORCE_H
#define BRUTEFORCE_H

#include <cstdint>
#include <QVector>


class bruteforce
{
  public:
    void find(const std::size_t& colNum);

  public:
    bruteforce(const QVector<uint32_t>& planeText, const QVector<uint32_t>& chiperText, const std::size_t& regMaxLen);


  private:
    std::vector<bool> key{0};
    std::size_t registerMaxLength{0};
    std::size_t registerLength{0};
    std::vector<std::size_t> characteristicPolynomial{0};

};

#endif // BRUTEFORCE_H
