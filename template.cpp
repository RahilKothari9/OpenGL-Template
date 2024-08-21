#include <GL/glut.h>

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    
    glColor3f(1.0, 0.0, 0.0);
    
    glBegin(GL_LINES);
        glVertex2i(10,10);
        glVertex2i(100,100);
    glEnd();

    
    glFlush();
}

void init(void) {
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0, 500, 0, 150);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 150);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Polygons");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
