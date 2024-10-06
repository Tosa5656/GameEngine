#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main(void)
{
    GLFWwindow* window;

    if (!glfwInit())
        return -1;

    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    if (!gladLoadGL())
        return -1;

    while (!glfwWindowShouldClose(window))
    {
        glClear(GL_COLOR_BUFFER_BIT);
        glClearColor(0.5f, 0.2f, 0.5f, 1.0f);
        glfwSwapBuffers(window);


        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}