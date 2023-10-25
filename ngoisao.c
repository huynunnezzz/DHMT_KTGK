//#include <GL/gl.h>
//#include <GL/glu.h>
//#include <GL/glut.h>
//#include <math.h>
// void init(void) 
//{
//   glClearColor(0.0,0.0,0.0,0.0);
//	glShadeModel(GL_FLAT);
//}
//float alpha = 0.0;
//void display(void)
//{
//   glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//   glColor3f(1.0,1.0,1.0);
//   
//   glTranslatef(1,0,0);
//   glRotatef(alpha,0,0,1);
//   glTranslatef(-1,0,0);
//   
//   
//   	GLfloat step = 3.14 / 5.0;
//	register int i;
//	GLfloat angle, r;
//	glBegin(GL_LINE_LOOP);
//	for (i = 0; i < 10; ++i) {
//		r = (i % 2 == 0 ? 1 : 0.5);
//		angle = i * step;
//		glVertex3f((r * cos(angle)), r * sin(angle),0.0);
//	}
//	glEnd();
//	
//	step = 3.14/20;
//	glBegin(GL_LINE_LOOP);
//	for (i = 0; i <= 40; ++i) {
//		angle = i * step;
//		glVertex3f(cos(angle), sin(angle) ,0.0);
//	}
//	glEnd();
//   glFlush ();
// }
//
// void spin(){
// 	alpha += 0.000001;
// 	glutPostRedisplay();
// }
// void keyboard(unsigned char key,int x,int y){
// 	if(key == 'a'){
// 		glutIdleFunc(spin);
// 	}
// }
// void reshape (int w, int h)
// {
//   glViewport (0, 0, (GLsizei) w, (GLsizei) h);
//   glMatrixMode (GL_PROJECTION);
//   glLoadIdentity();
//   if (w <= h)
//      glOrtho (-3, 3, -3*(GLfloat)h/(GLfloat)w,
//         3*(GLfloat)h/(GLfloat)w, -10.0, 10.0);
//   else
//      glOrtho (-3*(GLfloat)w/(GLfloat)h,
//         3*(GLfloat)w/(GLfloat)h, 3,3, -10.0, 10.0);
//   glMatrixMode(GL_MODELVIEW);
//   glLoadIdentity();
// }
// int main(int argc, char** argv)
// {
//   glutInit(&argc, argv);
//   glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
//   glutInitWindowSize (500, 500); 
//   glutInitWindowPosition (100, 100);
//   glutCreateWindow (argv[0]);
//   init ();
//   glutDisplayFunc(display); 
//   glutReshapeFunc(reshape);
//   glutKeyboardFunc(keyboard);
//   glutMainLoop();
//   return 0;
// }
