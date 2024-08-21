#include <GL/glut.h>
#include <cmath>

void drawShapeA() {
    // glBegin(GL_LINE_LOOP);
    // glVertex2i(20, 80);
    // glVertex2i(60, 70);
    // glVertex2i(12, 20);
    // glVertex2i(65, 22);
    // glVertex2i(20, 80);
    // glEnd();
}

void drawShapeB() {
    glBegin(GL_LINE_LOOP);
    glVertex2i(100, 100);
    glVertex2i(150, 90);
    glVertex2i(145, 80);
    glVertex2i(115, 88);
    glVertex2i(108, 75);
    glVertex2i(125, 70);
    glVertex2i(120, 60);
    glVertex2i(100, 65);
    glVertex2i(90, 25);
    glVertex2i(80, 35);
    glVertex2i(100, 100);
    glEnd();
}

void drawShapeC() {
    glBegin(GL_LINE_LOOP);
    glVertex2i(180, 70);
    glVertex2i(240, 68);
    glVertex2i(230, 40);
    glVertex2i(242, 20);
    glVertex2i(205, 10);
    glVertex2i(170, 25);
    glVertex2i(170, 50);
    glVertex2i(180, 70);
    glEnd();
}

void drawShapeD() {
    glBegin(GL_LINE_LOOP);
    glVertex2i(250, 20);
    glVertex2i(300, 60);
    glVertex2i(270, 100);
    glEnd();
}

// Pentagon
void drawShapeE() {
    int xc = 350, yc = 60, r = 40;
    glBegin(GL_LINE_LOOP);
    for(int i = 0; i < 6; i++) {
        glVertex2i(xc + r * cos(i * M_PI / 3), yc + r * sin(i * M_PI / 3));
    }
    glEnd();
}

void drawShapeF() {
    int xc = 450, yc = 60, r = 40;
    glBegin(GL_LINE_LOOP);
    for(int i = 0; i < 10; i++) {
        glVertex2i(xc + r * cos(i * M_PI / 5), yc + r * sin(i * M_PI / 5));
    }
    glEnd();
}

// Draw a triangle
void drawShapeG() {
    glBegin(GL_LINE_LOOP);
    glVertex2i(50, 150);
    glVertex2i(100, 150);
    glVertex2i(75, 200);
    glEnd();
}

// Draw a square
void drawShapeH() {
    glBegin(GL_LINE_LOOP);
    glVertex2i(150, 150);
    glVertex2i(200, 150);
    glVertex2i(200, 200);
    glVertex2i(150, 200);
    glEnd();
}

// Draw a circle
void drawShapeI() {
    int xc = 300, yc = 175, r = 25;
    glBegin(GL_LINE_LOOP);
    for(int i = 0; i < 360; i++) {
        float theta = i * M_PI / 180.0f;
        glVertex2i(xc + r * cos(theta), yc + r * sin(theta));
    }
    glEnd();
}

// Draw a hexagon
void drawShapeJ() {
    int xc = 400, yc = 175, r = 30;
    glBegin(GL_LINE_LOOP);
    for(int i = 0; i < 6; i++) {
        glVertex2i(xc + r * cos(i * M_PI / 3), yc + r * sin(i * M_PI / 3));
    }
    glEnd();
}

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    
    glColor3f(1.0, 0.0, 0.0);
    
    drawShapeA();
    drawShapeB();
    drawShapeC();
    drawShapeD();
    drawShapeE();
    drawShapeF();
    
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
