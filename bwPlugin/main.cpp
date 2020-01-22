#ifndef USEFULL_H
#define USEFULL_H

//int main(int argc, char *argv[])
//{
//    QCoreApplication a(argc, argv);

//    int kernelSize = 5;
//    double ** GKernel;
//    int imgWidth, imgHeight;
//    int mode = 0;

////    Выделение памяти для хранения ядра
//    GKernel = new double *[kernelSize];
//    for (int i = 0; i < kernelSize; i++)
//        GKernel[i] = new double[kernelSize];

//    QFile image("F:/lena512color.bmp");
//    image.open(QIODevice::ReadOnly);
//    //Чтение заголовка файла
//    QByteArray data = image.read(sizeof(BMPheader));


//    BMPheader * header = (BMPheader *)data.data();
//    unsigned char * original = new unsigned char[header->biSizeImage];

//    //Сохранение значений ширины и высоты записаных в заголовке
//    imgWidth = header->biWidth;
//    imgHeight = header->biHeight;

//    QFile resImageFile("F:/result.bmp");
//    resImageFile.open(QIODevice::WriteOnly);

//    //Копирования точно такого же заголовка в результирующий файл
//    resImageFile.write((char*)header, sizeof(BMPheader));
//    resImageFile.flush();

//    int bytesCount = imgWidth * imgHeight * header->biBitCount / 8;

//    char * padding = new char[header->bfOffBits - sizeof(BMPheader)];
//    image.read(padding, header->bfOffBits - sizeof(BMPheader));
//    resImageFile.write(padding, header->bfOffBits - sizeof(BMPheader));

//    image.read((char*)original, header->biSizeImage);

//    image.close();

//    filter(original, imgWidth * 3, imgHeight);

//    resImageFile.write((const char *)original, header->biSizeImage);
//    resImageFile.close();

//    return a.exec();
//}

#endif USEFULL_H
