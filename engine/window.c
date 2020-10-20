#include "window.h"

void create_window()
{
    const char title[] = "Game Engine";
    width = 800;
    height = 600;

    window = glfwCreateWindow(width, height, title, NULL, NULL);
}

void clearWindow()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glfwSwapBuffers(window);
}