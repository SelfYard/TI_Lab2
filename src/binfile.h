#ifndef BINFILE_H
#define BINFILE_H

#include <cinttypes>
#include <string>
#include <QFile>
#include <QVector>

QVector<uint32_t> readFileAsBin(const QString& filename) {
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly)) {
        throw std::runtime_error("Не удалось открыть файл: " + filename.toStdString());
    }

    QDataStream in(&file);
    in.setByteOrder(QDataStream::LittleEndian); // или BigEndian, в зависимости от формата файла

    QVector<uint32_t> buffer;
    while (!in.atEnd()) {
        uint32_t value;
        in >> value;
        buffer.append(value);
    }

    return std::move(buffer);
}

void writeFileAsBin(const std::string &filePath, std::vector<bool> data) {

    return;
}

#endif // BINFILE_H
