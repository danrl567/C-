#include <tiffio.h>
#include <iostream>
#include <string>

int main() {
    std::string filename = "C:\Users\danrl\OneDrive\Desktop\params\alpha_usa.tif"; // Replace with your TIFF file name
    TIFF* tiff = TIFFOpen(filename.c_str(), "r");
    if (tiff == nullptr) {
        std::cerr << "Error opening TIFF file: " << filename << std::endl;
        return 1;
    }

    uint32 imageWidth, imageLength;
    TIFFGetField(tiff, TIFFTAG_IMAGEWIDTH, &imageWidth);
    TIFFGetField(tiff, TIFFTAG_IMAGELENGTH, &imageLength);
    std::cout << "Image dimensions: " << imageWidth << " x " << imageLength << std::endl;

    // Add additional code here to process the TIFF image as needed

    TIFFClose(tiff);
    return 0;
}

