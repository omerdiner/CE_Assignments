#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct
{
    unsigned char RED;
    unsigned char GREEN;
    unsigned char BLUE;
} Pixel;

void write_ppm(Pixel *image_data, int width, int height, char *filename);
void write_histogram(int *histogram);
int histogramIndex(Pixel pix);
Pixel convolution(Pixel pix, Pixel surroinding[4]);

int main(int argc, char *argv[])
{
    int dummyTmp;
    FILE *fp;
    char magic_number[3];
    int width, height, max_intensity, i, j;
    Pixel *originalImage;
    Pixel *changedImage;
    int histogram[] = {0, 0, 0, 0, 0};

    if ((fp = fopen(argv[1], "rb")) == NULL)
    {

        exit(EXIT_FAILURE);
    }

    // Reading the PPM header
    fscanf(fp, "%s %d %d %d\n", magic_number, &width, &height, &max_intensity);

    originalImage = (Pixel *)malloc(width * height * sizeof(Pixel));
    changedImage = (Pixel *)malloc(width * height * sizeof(Pixel));

    // Reading the pixel data from the file

    fread(originalImage, sizeof(Pixel), width * height, fp);

    printf("dene3");
    // Applying the convolution to whole image and updating the histogram
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            dummyTmp = i * width + j;
            // edges
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1)
            {
                changedImage[dummyTmp] = originalImage[dummyTmp];
            }
            else
            {
                Pixel surroinding[] = {originalImage[(i - 1) * width + j],
                                       originalImage[(i + 1) * width + j],
                                       originalImage[dummyTmp - 1],
                                       originalImage[dummyTmp + 1]};
                changedImage[dummyTmp] = convolution(originalImage[dummyTmp], surroinding);
            }

            histogram[histogramIndex(changedImage[dummyTmp])]++;
        }
    }

    write_histogram(histogram);

    write_ppm(changedImage, width, height, "output.ppm");

    free(originalImage);
    free(changedImage);

    return 0;
}
Pixel convolution(Pixel pix, Pixel surroinding[4])
{
    int red = 5 * pix.RED - surroinding[0].RED - surroinding[1].RED - surroinding[2].RED - surroinding[3].RED;
    int green = 5 * pix.GREEN - surroinding[0].GREEN - surroinding[1].GREEN - surroinding[2].GREEN - surroinding[3].GREEN;
    int blue = 5 * pix.BLUE - surroinding[0].BLUE - surroinding[1].BLUE - surroinding[2].BLUE - surroinding[3].BLUE;
    if (red > 255)
        red = 255;
    if (red < 0)
        red = 0;
    if (green > 255)
        green = 255;
    if (green < 0)
        green = 0;
    if (blue > 255)
        blue = 255;
    if (blue < 0)
        blue = 0;
    Pixel convoluted = {(unsigned char)red,
                        (unsigned char)green,
                        (unsigned char)blue};

    return convoluted;
}
int histogramIndex(Pixel pix)
{
    int value = (int)round(0.2126 * pix.RED + 0.7152 * pix.GREEN + 0.0722 * pix.BLUE);

    if (value >= 0 && value <= 50)
    {
        return 0;
    }
    else if (value >= 51 && value <= 101)
    {
        return 1;
    }
    else if (value >= 102 && value <= 152)
    {
        return 2;
    }
    else if (value >= 153 && value <= 203)
    {
        return 3;
    }
    else if (value >= 204 && value <= 255)
    {
        return 4;
    }
    else
        return -1;
}

void write_ppm(Pixel *image_data, int width, int height, char *filename)
{
    FILE *file_p;

    if ((file_p = fopen(filename, "wb")) == NULL)
    {
        fprintf(stderr, "Error,couldn't open file %s\n", filename);
        exit(EXIT_FAILURE);
    }

    // Writing the PPM header
    fprintf(file_p, "P6\n%d %d\n255\n", width, height);

    // Writing the pixel data to the file with whole block
    fwrite(image_data, sizeof(Pixel), width * height, file_p);

    fclose(file_p);
}

void write_histogram(int *histogram)
{
    FILE *file_p;

    if ((file_p = fopen("output.txt", "w")) == NULL)
    {

        exit(EXIT_FAILURE);
    }

    // Writing the histogram data to the file
    fprintf(file_p, "%d %d %d %d %d", histogram[0], histogram[1], histogram[2], histogram[3], histogram[4]);
    // printf("%d %d %d %d %d", histogram[0], histogram[1], histogram[2], histogram[3], histogram[4]);

    fclose(file_p);
}
