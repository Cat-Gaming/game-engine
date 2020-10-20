#pragma once
#include <GL/glew.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#define MAX_SHADER_LENGTH 600

char vs_source[MAX_SHADER_LENGTH];
char fs_source[MAX_SHADER_LENGTH];

void load_shaders(char* vs_filename, char* fs_filename);