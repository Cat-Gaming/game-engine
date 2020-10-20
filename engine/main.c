#include <stdio.h>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "window.h"
#include "shader.h"


int main()
{
    printf("Game Engine Started!\n");

    if (!glfwInit())
    {
        fprintf(stderr, "Error GLFW Could not Initalize!\n");
        return -1;
    }

    // Makes window not resizable
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

    create_window();

    // Makes OpenGL Context
    glfwMakeContextCurrent(window);

    if (glewInit() != GLEW_OK)
    {
        fprintf(stderr, "Error GLEW failed to Initalize!\n");
    }

    // Loads shader sources
    load_shaders("shaders/basic_shader.vs", "shaders/basic_shader.fs");

    // Game Engine Loop
    while (!glfwWindowShouldClose(window))
    {
        // Clears Window using OpenGL and Swaps Buffers
        clearWindow();

        // Process Events
        glfwPollEvents();
    }

    // Shutdown Window and Library

    glfwDestroyWindow(window);

    glfwTerminate();

    printf("Game Engine Stopped!\n");
    return 0;
}
