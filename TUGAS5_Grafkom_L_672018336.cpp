#include <GL/glu.h>
#include <GL/glut.h>

void init(void);
void tampil(void);
void hilang(void);
void display(void);
void IntiRumah(void);
void JendelaPintu();
void Pencet9Ilang(void);
void Furniture(void);
void keyboard(unsigned char, int, int);
void ukuran(int, int);
void mouse(int button, int state, int x, int y);
void mouseMotion(int x, int y);

float xrot = 0.0f;
float yrot = 0.0f;
float xdiff = 0.0f;
float ydiff = 0.0f;
bool mouseDown = false;
int is_depth;

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glEnable(GL_DEPTH_TEST);
    is_depth = 1;
    glMatrixMode(GL_MODELVIEW);
    glPointSize(9.0);
    glLineWidth(1.5f);
}

void Ngelu()
{
    glLoadIdentity();
    gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
    glRotatef(xrot, 1.0f,0.0f, 0.0f);
    glRotatef(yrot, 0.0f, 1.0f, 0.0f);
}

void IntiRumah(void)
{
    //belakang
    glBegin(GL_QUADS);
    glColor3ub(255, 249, 135);
    glVertex3f(-70,-50,-130);
    glVertex3f(-70,30,-130);
    glVertex3f(70,30,-130);
    glVertex3f(70,-50,-130);
    glEnd();
    //kanan
    glBegin(GL_QUADS);
    glColor3ub(255, 249, 135);
    glVertex3f(70,30,20);
    glVertex3f(70,-50,20);
    glVertex3f(70,-50,-130);
    glVertex3f(70,30,-130);
    glEnd();
    //kiri
    glBegin(GL_QUADS);
    glColor3ub(255, 249, 135);
    glVertex3f(-10,30,20);
    glVertex3f(-10,-50,20);
    glVertex3f(-10,-50,-81);
    glVertex3f(-10,30,-81);
    glEnd();
    //kiri dalam
    glBegin(GL_QUADS);
    glColor3ub(255, 249, 135);
    glVertex3f(-69.5,30,-80);
    glVertex3f(-69.5,-50,-80);
    glVertex3f(-69.5,-50,-130);
    glVertex3f(-69.5,30,-130);
    glEnd();
    //garasikanan
    glBegin(GL_QUADS);
    glColor3ub(97, 97, 97);
    glVertex3f(-10.5,30,20);
    glVertex3f(-10.5,-50,20);
    glVertex3f(-10.5,-50,-80);
    glVertex3f(-10.5,30,-80);
    glEnd();
    //garasikiri dalam
    glBegin(GL_QUADS);
    glColor3ub(97, 97, 97);
    glVertex3f(-69.5,30,20);
    glVertex3f(-69.5,-50,20);
    glVertex3f(-69.5,-50,-80);
    glVertex3f(-69.5,30,-80);
    glEnd();
    //garasikiri
    glBegin(GL_QUADS);
    glColor3ub(181, 181, 181); glVertex3f(-70,30,20);
    glVertex3f(-70,-50,20);
    glColor3ub(140, 140, 140); glVertex3f(-70,-50,-130);
    glVertex3f(-70,30,-130);
    glEnd();
    //garasibelakang
    glBegin(GL_QUADS);
    glColor3ub(97, 97, 97);
    glVertex3f(-10,30,-80);
    glVertex3f(-10,-50,-80);
    glVertex3f(-70,-50,-80);
    glVertex3f(-70,30,-80);
    glEnd();
    //belakang garasi
    glBegin(GL_QUADS);
    glColor3ub(255, 249, 135);
    glVertex3f(-9,30,-80.5);
    glVertex3f(-9,-50,-80.5);
    glVertex3f(-70,-50,-80.5);
    glVertex3f(-70,30,-80.5);
    glEnd();
    //cagak kanan
    glBegin(GL_QUADS);
    glColor3ub(207, 17, 17);
    glVertex3f(70,27,70);
    glVertex3f(70,-50,70);
    glVertex3f(65,-50,70);
    glVertex3f(65,27,70);
    glEnd();
    //cagak kiri
    glBegin(GL_QUADS);
    glColor3ub(207, 17, 17);
    glVertex3f(-65,25,70);
    glVertex3f(-65,-50,70);
    glVertex3f(-70,-50,70);
    glVertex3f(-70,25,70);
    glEnd();
    //atap cagak kanan
    glBegin(GL_QUADS);
    glColor3ub(207, 17, 17); glVertex3f(70,30,20);
    glVertex3f(75,25,75);
    glColor3ub(163, 7, 7); glVertex3f(30,65,75);
    glVertex3f(30,65,20);
    glEnd();
    //atap cagak kiri
    glBegin(GL_QUADS);
    glColor3ub(207, 17, 17); glVertex3f(-15,30,20);
    glVertex3f(-15,25,75);
    glColor3ub(163, 7, 7); glVertex3f(30,65,75);
    glVertex3f(30,65,20);
    glEnd();
    //atap cagak belakang
    glBegin(GL_POLYGON);
    glColor3ub(255, 249, 135); glVertex3f(72,27,70);
    glVertex3f(-12,27,70);
    glColor3ub(245, 239, 127); glVertex3f(30,65,70);
    glEnd();
    //atap cagak depan
    glBegin(GL_POLYGON);
    glColor3ub(255, 249, 135); glColor3ub(245, 239, 127);
    glVertex3f(70,30,20);
    glVertex3f(-15,30,20);
    glColor3ub(245, 239, 127); glVertex3f(30,65,20);
    glEnd();
    //atap garasi
    glBegin(GL_QUADS);
    glColor3ub(207, 17, 17); glVertex3f(-70,30,20);
    glColor3ub(163, 7, 7); glVertex3f(-10,30,20);
    glColor3ub(207, 17, 17); glVertex3f(-10,25,75);
    glColor3ub(207, 17, 17); glVertex3f(-70,25,75);
    glEnd();
    //bawah
    glBegin(GL_QUADS);
    glColor3ub(255, 230, 184);
    glVertex3f(-75,-50,80);
    glVertex3f(75,-50,80);
    glVertex3f(75,-50,-135);
    glVertex3f(-75,-50,-135);
    glEnd();
}
void JendelaPintu(void)
{
    //jendela kanan
    glBegin(GL_QUADS);
    glColor3ub(159, 245, 239); glVertex3f(70.5,-35,-60);
    glColor3ub(255, 255, 255); glVertex3f(70.5,-35,-95);
    glColor3ub(159, 245, 239); glVertex3f(70.5,-10,-95);
    glColor3ub(255, 255, 255); glVertex3f(70.5,-10,-60);
    glEnd();
    //tepi jendela
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(71,-35,-60);
    glVertex3f(71,-35,-95);
    glVertex3f(71,-10,-95);
    glVertex3f(71,-10,-60);
    glEnd();
    //tepi jendela
    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex3f(71,-35,-77.5);
    glVertex3f(71,-10,-77.5);
    glEnd();
    //tepi jendela
    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex3f(71,-22.5,-95);
    glVertex3f(71,-22.5,-60);
    glEnd();
    //jendela kanan
    glBegin(GL_QUADS);
    glColor3ub(159, 245, 239); glVertex3f(69.5,-35,-60);
    glColor3ub(255, 255, 255); glVertex3f(69.5,-35,-95);
    glColor3ub(159, 245, 239); glVertex3f(69.5,-10,-95);
    glColor3ub(255, 255, 255); glVertex3f(69.5,-10,-60);
    glEnd();
    //tepi jendela
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(69,-35,-60);
    glVertex3f(69,-35,-95);
    glVertex3f(69,-10,-95);
    glVertex3f(69,-10,-60);
    glEnd();
    //tepi jendela
    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex3f(69,-35,-77.5);
    glVertex3f(69,-10,-77.5);
    glEnd();
    //tepi jendela
    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex3f(69,-22.5,-95);
    glVertex3f(69,-22.5,-60);
    glEnd();
    //jendela belakang
    glBegin(GL_QUADS);
    glColor3ub(159, 245, 239); glVertex3f(-25,-15,-130.5);
    glColor3ub(255, 255, 255); glVertex3f(-60,-15,-130.5);
    glColor3ub(159, 245, 239); glVertex3f(-60,10,-130.5);
    glColor3ub(255, 255, 255); glVertex3f(-25,10,-130.5);
    glEnd();
    //tepi jendela
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(-25,-15,-131);
    glVertex3f(-60,-15,-131);
    glVertex3f(-60,10,-131);
    glVertex3f(-25,10,-131);
    glEnd();
    //tepi jendela
    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex3f(-43.5,-15,-131);
    glVertex3f(-43.5,10,-131);
    glEnd();
    //tepi jendela
    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex3f(-25,-2.5,-131);
    glVertex3f(-60.5,-2.5,-131);
    glEnd();
    //jendela belakang
    glBegin(GL_QUADS);
    glColor3ub(159, 245, 239); glVertex3f(-25,-15,-129.5);
    glColor3ub(255, 255, 255); glVertex3f(-60,-15,-129.5);
    glColor3ub(159, 245, 239); glVertex3f(-60,10,-129.5);
    glColor3ub(255, 255, 255); glVertex3f(-25,10,-129.5);
    glEnd();
    //tepi jendela
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(-25,-15,-128);
    glVertex3f(-60,-15,-128);
    glVertex3f(-60,10,-128);
    glVertex3f(-25,10,-128);
    glEnd();
    //tepi jendela
    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex3f(-43.5,-15,-128);
    glVertex3f(-43.5,10,-128);
    glEnd();
    //tepi jendela
    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex3f(-25,-2.5,-128);
    glVertex3f(-60.5,-2.5,-128);
    glEnd();
    //jendela garasi
    glBegin(GL_QUADS);
    glColor3ub(162, 250, 247);
    glVertex3f(-70.5,25,10);
    glVertex3f(-70.5,25,-70);
    glVertex3f(-70.5,12.5,-70);
    glVertex3f(-70.5,12.5,10);
    glEnd();
    //jendela garasi
    glBegin(GL_QUADS);
    glColor3ub(210, 252, 251);
    glVertex3f(-70.5,0,10);
    glVertex3f(-70.5,0,-70);
    glVertex3f(-70.5,12.5,-70);
    glVertex3f(-70.5,12.5,10);
    glEnd();
    //tepi jendela
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(-71,25,10);
    glVertex3f(-71,25,-70);
    glVertex3f(-71,0,-70);
    glVertex3f(-71,0,10);
    glEnd();
    //jendela garasi
    glBegin(GL_QUADS);
    glColor3ub(162, 250, 247);
    glVertex3f(-68,25,10);
    glVertex3f(-68,25,-70);
    glVertex3f(-68,12.5,-70);
    glVertex3f(-68,12.5,10);
    glEnd();
    //jendela garasi
    glBegin(GL_QUADS);
    glColor3ub(210, 252, 251);
    glVertex3f(-68,0,10);
    glVertex3f(-68,0,-70);
    glVertex3f(-68,12.5,-70);
    glVertex3f(-68,12.5,10);
    glEnd();
    //tepi jendela
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(-67.5,25,10);
    glVertex3f(-67.5,25,-70);
    glVertex3f(-67.5,0,-70);
    glVertex3f(-67.5,0,10);
    glEnd();
    //pintu
    glBegin(GL_QUADS);
    glColor3ub(189, 121, 70);
    glVertex3f(-32,-50,-79.5);
    glVertex3f(-12,-50,-79.5);
    glVertex3f(-12,-10,-79.5);
    glVertex3f(-32,-10,-79.5);
    glEnd();
    //gagang pintu
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(-32,-25,-78);
    glVertex3f(-32,-28,-78);
    glVertex3f(-28,-28,-78);
    glVertex3f(-28,-25,-78);
    glEnd();
    //pintu
    glBegin(GL_QUADS);
    glColor3ub(189, 121, 70);
    glVertex3f(-32,-50,-81.5);
    glVertex3f(-12,-50,-81.5);
    glVertex3f(-12,-10,-81.5);
    glVertex3f(-32,-10,-81.5);
    glEnd();
    //gagang pintu
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(-32,-25,-82);
    glVertex3f(-32,-28,-82);
    glVertex3f(-28,-28,-82);
    glVertex3f(-28,-25,-82);
    glEnd();
}
void Pencet9Ilang(void)
{
    //depan
    glBegin(GL_QUADS);
    glColor3ub(245, 239, 127); glVertex3f(-10,-50,20);
    glVertex3f(-10,30,20);
    glColor3ub(255, 249, 135); glVertex3f(70,30,20);
    glVertex3f(70,-50,20);
    glEnd();
    //atap depan
    glBegin(GL_POLYGON);
    glColor3ub(207, 17, 17); glVertex3f(70,30,20);
    glColor3ub(163, 7, 7); glVertex3f(30,65,-50);
    glVertex3f(30,65,20);
    glEnd();
    //atap depan
    glBegin(GL_POLYGON);
    glColor3ub(207, 17, 17); glVertex3f(-15,30,20);
    glColor3ub(163, 7, 7); glVertex3f(30,65,-50);
    glVertex3f(30,65,20);
    glEnd();
    //garasidepan
    glBegin(GL_QUADS);
    glColor3ub(161, 161, 161); glVertex3f(-10,30,20);
    glVertex3f(-10,-50,20);
    glColor3ub(181, 181, 181); glVertex3f(-70,-50,20);
    glVertex3f(-70,30,20);
    glEnd();
    //pintu
    glBegin(GL_QUADS);
    glColor3ub(189, 121, 70);
    glVertex3f(5,-50,20.5);
    glVertex3f(25,-50,20.5);
    glVertex3f(25,-10,20.5);
    glVertex3f(5,-10,20.5);
    glEnd();
    //gagang pintu
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(5,-25,21);
    glVertex3f(5,-28,21);
    glVertex3f(9,-28,21);
    glVertex3f(9,-25,21);
    glEnd();
    //jendela
    glBegin(GL_QUADS);
    glColor3ub(159, 245, 239); glVertex3f(65,-35,20.5);
    glColor3ub(255, 255, 255); glVertex3f(30,-35,20.5);
    glColor3ub(159, 245, 239); glVertex3f(30,-10,20.5);
    glColor3ub(255, 255, 255); glVertex3f(65,-10,20.5);
    glEnd();
    //tepi jendela
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(65,-35,20.5);
    glVertex3f(30,-35,20.5);
    glVertex3f(30,-10,20.5);
    glVertex3f(65,-10,20.5);
    glEnd();
    //tepi jendela
    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex3f(47.5,-35,20.5);
    glVertex3f(47.5,-10,20.5);
    glEnd();
    //tepi jendela
    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex3f(65,-22.5,20.5);
    glVertex3f(30.5,-22.5,20.5);
    glEnd();
    //rolling door garasi
    glBegin(GL_QUADS);
    glColor3ub(214, 214, 214);
    glVertex3f(-15,10,20.5);
    glVertex3f(-15,-50,20.5);
    glVertex3f(-65,-50,20.5);
    glVertex3f(-65,10,20.5);
    glEnd();
    //gagang rolling door
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(-43,-31,21);
    glVertex3f(-43,-34,21);
    glVertex3f(-37,-34,21);
    glVertex3f(-37,-31,21);
    glEnd();
    //cagak tengah
    glBegin(GL_POLYGON);
    glColor3ub(207, 17, 17);
    glVertex3f(-5,-50,70);
    glVertex3f(-5,27,70);
    glVertex3f(-10,27,70);
    glVertex3f(-10,25,70);
    glVertex3f(-15,25,70);
    glVertex3f(-15,-50,70);
    glEnd();
    //atapdepan
    glBegin(GL_QUADS);
    glColor3ub(207, 17, 17); glVertex3f(70,30,20);
    glVertex3f(-70,30,20);
    glColor3ub(163, 7, 7); glVertex3f(-50,75,-65);
    glVertex3f(50,75,-65);
    glEnd();
    //atapbelakang
    glBegin(GL_QUADS);
    glColor3ub(207, 17, 17); glVertex3f(70,30,-130);
    glVertex3f(-70,30,-130);
    glColor3ub(163, 7, 7); glVertex3f(-50,75,-65);
    glVertex3f(50,75,-65);
    glEnd();
    //atap kanan
    glBegin(GL_POLYGON);
    glColor3ub(207, 17, 17); glVertex3f(70,30,20);
    glVertex3f(70,30,-130);
    glColor3ub(163, 7, 7); glVertex3f(50,75,-65);
    glEnd();
    //atap kiri
    glBegin(GL_POLYGON);
    glColor3ub(207, 17, 17); glVertex3f(-70,30,20);
    glVertex3f(-70,30,-130);
    glColor3ub(163, 7, 7); glVertex3f(-50,75,-65);
    glEnd();
    //ternit
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex3f(70,30,20);
    glVertex3f(-70,30,20);
    glVertex3f(-70,30,-130);
    glVertex3f(70,30,-130);
    glEnd();
}

void Furniture(void)
{
//TV
    //TV
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex3f(-5.5,-35,-10);
    glVertex3f(-5.5,-35,-45);
    glVertex3f(-5.5,-10,-45);
    glVertex3f(-5.5,-10,-10);
    glEnd();
    //TV
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(-6,-35,-10);
    glVertex3f(-6,-35,-45);
    glVertex3f(-6,-10,-45);
    glVertex3f(-6,-10,-10);
    glEnd();
    //TV hitam
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(-4.5,-10,-10);
    glVertex3f(-4.5,-10,-45);
    glVertex3f(-9,-13,-45);
    glVertex3f(-9,-13,-10);
    glEnd();
    //TV hitam
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(-4.5,-35,-10);
    glVertex3f(-4.5,-35,-45);
    glVertex3f(-9,-35,-45);
    glVertex3f(-9,-35,-10);
    glEnd();
    //TV hitam
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(-9,-13,-10);
    glVertex3f(-9,-13,-45);
    glVertex3f(-9,-35,-45);
    glVertex3f(-9,-35,-10);
    glEnd();
    //TV hitam
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(-4.5,-35,-10);
    glVertex3f(-9,-35,-10);
    glVertex3f(-9,-35,-10);
    glVertex3f(-4.5,-35,-10);
    glEnd();
    //TV hitam
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(-4.5,-35,-45);
    glVertex3f(-9,-35,-45);
    glVertex3f(-9,-35,-45);
    glVertex3f(-4.5,-35,-45);
    glEnd();
    //TV hitam
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(-4.5,-10,-10);
    glVertex3f(-4.5,-10,-45);
    glVertex3f(-9,-13,-45);
    glVertex3f(-9,-13,-10);
    glEnd();
    //TV hitam
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(-4.5,-35,-10);
    glVertex3f(-4.5,-35,-45);
    glVertex3f(-9,-32,-45);
    glVertex3f(-9,-32,-10);
    glEnd();
    //TV hitam
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(-9,-13,-10);
    glVertex3f(-9,-13,-45);
    glVertex3f(-9,-32,-45);
    glVertex3f(-9,-32,-10);
    glEnd();
    //TV hitam
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(-4.5,-32,-10);
    glVertex3f(-9,-35,-10);
    glVertex3f(-9,-35,-10);
    glVertex3f(-4.5,-32,-10);
    glEnd();
    //TV hitam
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(-4.5,-32,-45);
    glVertex3f(-9,-35,-45);
    glVertex3f(-9,-35,-45);
    glVertex3f(-4.5,-32,-45);
    glEnd();
    //tepi TV
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(-5,-35,-10);
    glVertex3f(-5,-35,-45);
    glVertex3f(-5,-10,-45);
    glVertex3f(-5,-10,-10);
    glEnd();

//Meja TV
    //meja depam
    glBegin(GL_QUADS);
    glColor3ub(168, 107, 15);
    glVertex3f(-3,-36,-10);
    glVertex3f(-3,-36,-45);
    glVertex3f(-3,-49,-45);
    glVertex3f(-3,-49,-10);
    glEnd();
    //meja samping
    glBegin(GL_QUADS);
    glColor3ub(212, 143, 40);
    glVertex3f(-3,-36,-10);
    glVertex3f(-10,-36,-10);
    glVertex3f(-10,-49,-10);
    glVertex3f(-3,-49,-10);
    glEnd();
    //meja samping
    glBegin(GL_QUADS);
    glColor3ub(212, 143, 40);
    glVertex3f(-3,-36,-45);
    glVertex3f(-10,-36,-45);
    glVertex3f(-10,-49,-45);
    glVertex3f(-3,-49,-45);
    glEnd();
    //meja atas
    glBegin(GL_QUADS);
    glColor3ub(212, 143, 40);
    glVertex3f(-3,-36,-45);
    glVertex3f(-10,-36,-45);
    glVertex3f(-10,-36,-10);
    glVertex3f(-3,-36,-10);
    glEnd();

//Meja
    //meja
    glBegin(GL_QUADS);
    glColor3ub(171, 114, 50);
    glVertex3f(3,-40,-10);
    glVertex3f(3,-40,-45);
    glVertex3f(25,-40,-45);
    glVertex3f(25,-40,-10);
    glEnd();
    //meja
    glBegin(GL_QUADS);
    glColor3ub(161, 107, 47);
    glVertex3f(3,-43,-10);
    glVertex3f(3,-43,-45);
    glVertex3f(25,-43,-45);
    glVertex3f(25,-43,-10);
    glEnd();
    //meja kanan
    glBegin(GL_QUADS);
    glColor3ub(217, 147, 69);
    glVertex3f(3,-43,-10);
    glVertex3f(3,-40,-10);
    glVertex3f(25,-40,-10);
    glVertex3f(25,-43,-10);
    glEnd();
    //meja kiri
    glBegin(GL_QUADS);
    glColor3ub(217, 147, 69);
    glVertex3f(3,-43,-45);
    glVertex3f(3,-40,-45);
    glVertex3f(25,-40,-45);
    glVertex3f(25,-43,-45);
    glEnd();
    //kaki meja
    glBegin(GL_LINE_STRIP);
    glColor3ub(171, 114, 50);
    glVertex3f(8,-43,-40);
    glVertex3f(8,-49,-40);
    glEnd();
    //kaki meja
    glBegin(GL_LINE_STRIP);
    glColor3ub(171, 114, 50);
    glVertex3f(20,-43,-40);
    glVertex3f(20,-49,-40);
    glEnd();
    //kaki meja
    glBegin(GL_LINE_STRIP);
    glColor3ub(171, 114, 50);
    glVertex3f(20,-43,-15);
    glVertex3f(20,-49,-15);
    glEnd();
    //kaki meja
    glBegin(GL_LINE_STRIP);
    glColor3ub(171, 114, 50);
    glVertex3f(8,-43,-15);
    glVertex3f(8,-49,-15);
    glEnd();

//SOFA
    //sofa lungguhan
    glBegin(GL_QUADS);
    glColor3ub(229, 179, 232); glVertex3f(35,-40,-10);
    glColor3ub(229, 179, 232); glVertex3f(35,-40,-50);
    glColor3ub(210, 137, 214); glVertex3f(60,-40,-50);
    glColor3ub(210, 137, 214); glVertex3f(60,-40,-10);
    glEnd();
    //sofa lungguhan dpn
    glBegin(GL_QUADS);
    glColor3ub(210, 137, 214); glVertex3f(35,-40,-10);
    glVertex3f(35,-40,-50);
    glColor3ub(229, 179, 232); glVertex3f(35,-49,-50);
    glVertex3f(35,-49,-10);
    glEnd();
    //sofa lungguhan knn
    glBegin(GL_QUADS);
    glColor3ub(180, 106, 184);
    glVertex3f(35,-30,-5);
    glVertex3f(35,-49,-5);
    glVertex3f(60,-49,-5);
    glVertex3f(60,-30,-5);
    glEnd();
    //sofa lungguhan knn2
    glBegin(GL_QUADS);
    glColor3ub(180, 106, 184);
    glVertex3f(35,-30,-10);
    glVertex3f(35,-49,-10);
    glVertex3f(60,-49,-10);
    glVertex3f(60,-30,-10);
    glEnd();
    //sofa lungguhan knn depan
    glBegin(GL_QUADS);
    glColor3ub(210, 137, 214);
    glVertex3f(35,-30,-5);
    glVertex3f(35,-49,-5);
    glVertex3f(35,-49,-10);
    glVertex3f(35,-30,-10);
    glEnd();
    //sofa lungguhan knn atas
    glBegin(GL_QUADS);
    glColor3ub(210, 137, 214);
    glVertex3f(35,-30,-5);
    glVertex3f(60,-30,-5);
    glVertex3f(60,-30,-10);
    glVertex3f(35,-30,-10);
    glEnd();
    //sofa lungguhan kr
    glBegin(GL_QUADS);
    glColor3ub(180, 106, 184);
    glVertex3f(35,-30,-55);
    glVertex3f(35,-49,-55);
    glVertex3f(60,-49,-55);
    glVertex3f(60,-30,-55);
    glEnd();
    //sofa lungguhan kr2
    glBegin(GL_QUADS);
    glColor3ub(180, 106, 184);
    glVertex3f(35,-30,-50);
    glVertex3f(35,-49,-50);
    glVertex3f(60,-49,-50);
    glVertex3f(60,-30,-50);
    glEnd();
    //sofa lungguhan kr depan
    glBegin(GL_QUADS);
    glColor3ub(210, 137, 214);
    glVertex3f(35,-30,-55);
    glVertex3f(35,-49,-55);
    glVertex3f(35,-49,-50);
    glVertex3f(35,-30,-50);
    glEnd();
    //sofa lungguhan kr atas
    glBegin(GL_QUADS);
    glColor3ub(210, 137, 214);
    glVertex3f(35,-30,-50);
    glVertex3f(60,-30,-50);
    glVertex3f(60,-30,-55);
    glVertex3f(35,-30,-55);
    glEnd();
    //sofa knn
    glBegin(GL_QUADS);
    glColor3ub(180, 106, 184);
    glVertex3f(65,-49,-55);
    glVertex3f(65,-22.5,-55);
    glVertex3f(60,-22.5,-55);
    glVertex3f(60,-49,-55);
    glEnd();
    //sofa kr
    glBegin(GL_QUADS);
    glColor3ub(180, 106, 184);
    glVertex3f(65,-49,-5);
    glVertex3f(65,-22.5,-5);
    glVertex3f(60,-22.5,-5);
    glVertex3f(60,-49,-5);
    glEnd();
    //sofa atas
    glBegin(GL_QUADS);
    glColor3ub(210, 137, 214);
    glVertex3f(65,-22.5,-5);
    glVertex3f(65,-22.5,-55);
    glVertex3f(60,-22.5,-55);
    glVertex3f(60,-22.5,-5);
    glEnd();
    //sofa blkng
    glBegin(GL_QUADS);
    glColor3ub(210, 137, 214);
    glVertex3f(65,-49,-5);
    glVertex3f(65,-49,-55);
    glVertex3f(65,-22.5,-55);
    glVertex3f(65,-22.5,-5);
    glEnd();
    //sofa sendenan
    glBegin(GL_QUADS);
    glColor3ub(180, 106, 184);
    glVertex3f(60,-49,-5);
    glVertex3f(60,-49,-55);
    glVertex3f(60,-22.5,-55);
    glVertex3f(60,-22.5,-5);
    glEnd();

//Lemari
    //lemari belakang
    glBegin(GL_QUADS);
    glColor3ub(140, 86, 0);
    glVertex3f(-68,-49,-79);
    glVertex3f(-68,5,-79);
    glVertex3f(-38,5,-79);
    glVertex3f(-38,-49,-79);
    glEnd();
    //lemari kiri
    glBegin(GL_QUADS);
    glColor3ub(191, 129, 31);
    glVertex3f(-68,-49,-79);
    glVertex3f(-68,5,-79);
    glVertex3f(-68,5,-69);
    glVertex3f(-68,-49,-69);
    glEnd();
    //lemari kanan
    glBegin(GL_QUADS);
    glColor3ub(191, 129, 31);
    glVertex3f(-38,-49,-79);
    glVertex3f(-38,5,-79);
    glVertex3f(-38,5,-69);
    glVertex3f(-38,-49,-69);
    glEnd();
    //lemari atas
    glBegin(GL_QUADS);
    glColor3ub(191, 129, 31);
    glVertex3f(-68,5,-79);
    glVertex3f(-38,5,-79);
    glVertex3f(-38,5,-69);
    glVertex3f(-68,5,-69);
    glEnd();
    //lemari bawah
    glBegin(GL_QUADS);
    glColor3ub(115, 77, 16);
    glVertex3f(-68,-49,-79);
    glVertex3f(-38,-49,-79);
    glVertex3f(-38,-49,-69);
    glVertex3f(-68,-49,-69);
    glEnd();
    //lemari depan
    glBegin(GL_QUADS);
    glColor3ub(115, 77, 16);
    glVertex3f(-68,-49,-69);
    glVertex3f(-68,-40,-69);
    glVertex3f(-38,-40,-69);
    glVertex3f(-38,-49,-69);
    glEnd();
    //pintu lemari kiri
    glBegin(GL_QUADS);
    glColor3ub(214, 149, 45);
    glVertex3f(-68,5,-69);
    glVertex3f(-68,-40,-69);
    glVertex3f(-53,-40,-62);
    glVertex3f(-53,5,-62);
    glEnd();
    //pintu lemari kanan
    glBegin(GL_QUADS);
    glColor3ub(214, 149, 45);
    glVertex3f(-53,5,-69);
    glVertex3f(-53,-40,-69);
    glVertex3f(-38,-40,-69);
    glVertex3f(-38,5,-69);
    glEnd();

//KASUR
    //kasur
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex3f(-59,-35,-127.5);
    glVertex3f(-59,-35,-99);
    glVertex3f(-3,-35,-99);
    glVertex3f(-3,-35,-127.5);
    glEnd();
    //kasur samping
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex3f(-59,-35,-99);
    glVertex3f(-59,-45,-99);
    glVertex3f(-3,-45,-99);
    glVertex3f(-3,-35,-99);
    glEnd();
    //kasur samping
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex3f(-59,-35,-127.5);
    glVertex3f(-59,-45,-127.5);
    glVertex3f(-3,-45,-127.5);
    glVertex3f(-3,-35,-127.5);
    glEnd();
    //kasur depan
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex3f(-3,-35,-99);
    glVertex3f(-3,-45,-99);
    glVertex3f(-3,-45,-127.5);
    glVertex3f(-3,-35,-127.5);
    glEnd();
    //Dipan
    glBegin(GL_QUADS);
    glColor3ub(240, 175, 103);
    glVertex3f(-59,-45,-129.5);
    glVertex3f(-59,-45,-97);
    glVertex3f(0,-45,-97);
    glVertex3f(0,-45,-129.5);
    glEnd();
    //Dipan samping
    glBegin(GL_QUADS);
    glColor3ub(171, 114, 20);
    glVertex3f(-59,-45,-97);
    glVertex3f(-59,-50,-97);
    glVertex3f(0,-50,-97);
    glVertex3f(0,-45,-97);
    glEnd();
    //Dipan depan
    glBegin(GL_QUADS);
    glColor3ub(171, 114, 20);
    glVertex3f(0,-45,-129.5);
    glVertex3f(0,-50,-129.5);
    glVertex3f(0,-50,-97);
    glVertex3f(0,-45,-97);
    glEnd();
    //kasur sendenan
    glBegin(GL_QUADS);
    glColor3ub(214, 143, 62);
    glVertex3f(-59,-49,-129.5);
    glVertex3f(-59,-49,-97);
    glVertex3f(-59,-22.5,-97);
    glVertex3f(-59,-22.5,-129.5);
    glEnd();
    //kasur sendenan belakang
    glBegin(GL_QUADS);
    glColor3ub(171, 114, 50);
    glVertex3f(-65,-49,-129.5);
    glVertex3f(-65,-49,-97);
    glVertex3f(-65,-22.5,-97);
    glVertex3f(-65,-22.5,-129.5);
    glEnd();
    //kasur sendenan samping
    glBegin(GL_QUADS);
    glColor3ub(171, 114, 50);
    glVertex3f(-65,-49,-97);
    glVertex3f(-59,-49,-97);
    glVertex3f(-59,-22.5,-97);
    glVertex3f(-65,-22.5,-97);
    glEnd();
    //kasur sendenan atas
    glBegin(GL_QUADS);
    glColor3ub(240, 175, 103);
    glVertex3f(-65,-22.5,-97);
    glVertex3f(-59,-22.5,-97);
    glVertex3f(-59,-22.5,-129.5);
    glVertex3f(-65,-22.5,-129.5);
    glEnd();

//KIPAS
    //mbuh
    glBegin(GL_LINE_STRIP);
    glColor3ub(0, 0, 0);
    glVertex3f(25,30,-97);
    glVertex3f(25,20,-97);
    glEnd();
    //mbuh2
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex3f(27,20,-95);
    glVertex3f(23,20,-95);
    glVertex3f(23,20,-99);
    glVertex3f(27,20,-99);
    glEnd();
    //baling
    glBegin(GL_QUADS);
    glColor3ub(133, 133, 133);
    glVertex3f(27,20,-95);
    glVertex3f(23,20,-95);
    glVertex3f(21,20,-75);
    glVertex3f(29,20,-75);
    glEnd();
    //baling2
    glBegin(GL_QUADS);
    glColor3ub(133, 133, 133);
    glVertex3f(23,20,-95);
    glVertex3f(23,20,-99);
    glVertex3f(3,20,-101);
    glVertex3f(3,20,-93);
    glEnd();
    //baling3
    glBegin(GL_QUADS);
    glColor3ub(133, 133, 133);
    glVertex3f(27,20,-95);
    glVertex3f(27,20,-99);
    glVertex3f(47,20,-101);
    glVertex3f(47,20,-93);
    glEnd();
    //baling
    glBegin(GL_QUADS);
    glColor3ub(133, 133, 133);
    glVertex3f(27,20,-99);
    glVertex3f(23,20,-99);
    glVertex3f(21,20,-119);
    glVertex3f(29,20,-119);
    glEnd();
}

void hilang(void)
{
    glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
    IntiRumah();
    JendelaPintu();
    Furniture();
    glPushMatrix();
    glPopMatrix();
    glutSwapBuffers();
}

void tampil(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    IntiRumah();
    JendelaPintu();
    Furniture();
    Pencet9Ilang();
    glPushMatrix();
    glPopMatrix();
    glutSwapBuffers();
}

void display(void)
{
    if (is_depth)
        tampil();
    else
        hilang();
}

void keyboard(unsigned char key, int x, int y)
{
    switch(key)
    {
        case 'w':
        case 'W':
            glTranslated(0,0,3);
            break;
        case 'd':
        case 'D':
            glTranslated(3,0,0);
            break;
        case 's':
        case 'S':
            glTranslated(0,0,-3);
            break;
        case 'a':
        case 'A':
            glTranslated(-3,0,0);
            break;
        case '1':
            glTranslated(0,3,0);
            break;
        case '2':
            glTranslated(0,-3,0);
            break;
        case '3':
            glRotated(2,1,0,0);
            break;
        case '4':
            glRotated(-2,1,0,0);
            break;
        case '5':
            glRotated(2,0,1,0);
            break;
        case '6':
            glRotated(-2,0,1,0);
            break;
        case '7':
            glRotated(2,0,0,1);
            break;
        case '8':
            glRotated(-2,0,0,1);
            break;
        case'9':
            if(is_depth)
            {
                is_depth = 0;
                tampil();
            }
            else
            {
                is_depth = 1;
                hilang();
            }
            break;
    }
    display();
}

void idle()
{
    if (!mouseDown)
    {
        xrot == 0.3f;
        yrot == 0.4f;
    }
    glutPostRedisplay();
}

void mouse(int button, int state, int x, int y)
{

    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        mouseDown = true;
        xdiff = x - yrot;
        ydiff = -y + xrot;
    }
    else
        mouseDown = false;
}

void mouseMotion(int x, int y)
{
    Ngelu();
    if (mouseDown)
    {
        yrot = x - xdiff;
        xrot = y + ydiff;
        glutPostRedisplay();
    }
}

void ukuran(int lebar, int tinggi)
{
    if(tinggi == 0) tinggi = 1;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(100, lebar / tinggi, 5, 1000);
    glTranslated(0, 0, -200);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowPosition(250, 80);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Fairil Nugraha Gigih Dwi Putra - 672018336");
    init();
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMotionFunc(mouseMotion);
    glutReshapeFunc(ukuran);
    glutMainLoop();
    return 0;
}
