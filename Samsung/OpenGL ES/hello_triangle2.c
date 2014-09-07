#include <iostream>

using namespace std;

typedef struct
{
	GLuint programObject;
} UserData;

GLuint loadShader(GLenum type, const char *shaderSrc)
{
	GLuint shader;
	GLint compiled;

	shader = glCreateShader(type);

	glShaderSource(shader, 1, &shaderSrc, NULL);

	glCompileShader(shader);

	glGetShaderiv(shader, GL_COMPILE_STATUS, &compiled);

	return shader;
}

int main()
{
	return 0;
}