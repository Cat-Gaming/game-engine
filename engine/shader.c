#include "shader.h"

void load_shaders(char* vs_filename, char* fs_filename)
{
    FILE *vs;
    vs = fopen(vs_filename, "r");

    if (vs == NULL)
    {
        fprintf(stderr, "Error: %d\n", errno);
        exit(-1);
    }

    while (!feof(vs))
    {
        fgets(vs_source, MAX_SHADER_LENGTH, vs);
    }

    fclose(vs);

    FILE *fs;

    fs = fopen(fs_filename, "r");

    if (fs == NULL)
    {
        fprintf(stderr, "Error: %d\n", errno);
        exit(-1);
    }

    while (!feof(fs))
    {
        fgets(fs_source, MAX_SHADER_LENGTH, fs);
    }

    fclose(fs);
}
