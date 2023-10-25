#include <GL/gl.h>
 #include <GL/glu.h>
 #include <GL/glut.h>
 void init(void) 
{
   GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
   GLfloat mat_shininess[] = { 50.0 };
   GLfloat light_position[] = { 1.0, 1.0, 1.0, 0.0 };
   GLfloat light_ambient[] = { 0.2, 0.0, 0.0, 0.0 };
   GLfloat light_diffuse[] = { 1.0, 0.0, 0.0, 0.0 };
   glClearColor (0.0, 0.0, 0.0, 0.0);
   glShadeModel (GL_SMOOTH);
   glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
   glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
   glLightfv(GL_LIGHT0, GL_POSITION, light_position);
   glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
   glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
   glEnable(GL_LIGHTING);
   glEnable(GL_LIGHT0);
   glEnable(GL_DEPTH_TEST);
 }
 float tran = 0.0;
 void display(void)
 {
   glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
   glLoadIdentity();
   gluLookAt(0.0,0.0,10.0,0.0,0.0,0.0,0.0,1.0,0.0);
   glPushMatrix();
   glTranslatef(tran,0,0);
   glTranslatef(-1,0,0);
   glutSolidTeapot(0.3);
   glPopMatrix();
   glutSwapBuffers();
   glFlush ();
 }
 void reshape (int w, int h)
 {
   glViewport (0, 0, (GLsizei) w, (GLsizei) h);
   glMatrixMode (GL_PROJECTION);
   glLoadIdentity();
   if (w <= h)
      glOrtho (-1.5, 1.5, -1.5*(GLfloat)h/(GLfloat)w,
         1.5*(GLfloat)h/(GLfloat)w, -10.0, 10.0);
   else
      glOrtho (-1.5*(GLfloat)w/(GLfloat)h,
         1.5*(GLfloat)w/(GLfloat)h, -1.5, 1.5, -10.0, 10.0);
   glMatrixMode(GL_MODELVIEW);
   glLoadIdentity();
 }
 void translate(){
 	if(tran < 2.0){
 		tran += 0.0001;
 		glutPostRedisplay();
 	}
 }
 void mouse(int button,int state,int x,int y){
 	if(button == GLUT_LEFT_BUTTON){
 		glutIdleFunc(translate);
 	}
 }
 int main(int argc, char** argv)
 {
   glutInit(&argc, argv);
   glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
   glutInitWindowSize (500, 500); 
   glutInitWindowPosition (100, 100);
   glutCreateWindow (argv[0]);
   init ();
   glutDisplayFunc(display); 
   glutReshapeFunc(reshape);
   glutMouseFunc(mouse);
   glutMainLoop();
   return 0;
 }
