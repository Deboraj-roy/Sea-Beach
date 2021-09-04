#include<windows.h>
#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include <Math.h>


GLfloat position = 0.0f;
GLfloat position2 =0.0f;
GLfloat position3 =0.0f;
GLfloat speed = 0.02f;
GLfloat speed2 =0.01f;
GLfloat speed3 =0.005f;
GLdouble angle = 0.0f;
GLfloat speed4 = 5.0f;


GLfloat i= 0.0f;


void Light()
{


    glBegin(GL_QUADS);            // These vertices form a closed polygon
    glColor3f(0.20f, 0.50f, 0.0f); // Yellow

    glVertex2f(-0.8111f, -0.775f);
    glVertex2f(-0.8444f, -0.775f);
    glVertex2f(-0.8444f, -0.825f);
    glVertex2f(-0.8111f, -0.825f);

    glEnd();



    glBegin(GL_QUADS);
    glColor3f(0.20f, 0.50f, 0.0f);
    glVertex2f(-0.8222f, -0.45f);
    glVertex2f(-0.8333f, -0.45f);
    glVertex2f(-0.8333f, -0.775f);
    glVertex2f(-0.8222f, -0.775f);

    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.20f, 0.50f, 0.0f);
    glVertex2f(-0.8555f, -0.5f);
    glVertex2f(-0.777f, -0.5f);

    glEnd();


}



void Bulb()
{
    //Bulb

    glBegin(GL_POLYGON);
    glColor3f(0.2f, 1.0f, 0.0f);

    glVertex2f(-0.7777f, -0.5f);
    glVertex2f(-0.8f, -0.5f);
    glVertex2f(-0.8f, -0.525f);
    glVertex2f(-0.777f, -0.525f);

    glEnd();

}



void Bright()
{
    //Bright

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f); // Yellow


    glVertex2f(-0.777f, -0.525f);
    glVertex2f(-0.8f, -0.525f);
    glVertex2f(-0.8f, -0.675f);
    glVertex2f(-0.6888f, -0.675f);

    glEnd();

}


void chair()
{

    //chair


    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 0.0f); // Yellow

    glVertex2f(-0.555f, -0.725f);
    glVertex2f(-0.6555f, -0.725f);
    glVertex2f(-0.6777f, -0.775);
    glVertex2f(-0.5777f, -0.775f);

    glEnd();


    //chair up

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.80f, 0.0f);

    glVertex2f(-0.6777f, -0.675f);
    glVertex2f(-0.7f, -0.725f);
    glVertex2f(-0.6777f, -0.775f);
    glVertex2f(-0.6555f, -0.725f);

    glEnd();

//lags



    glBegin(GL_LINES);
    glColor3f(0.0f, 0.80f, 0.0f);

    glVertex2f(-0.6777f, -0.775f);
    glVertex2f(-0.7f, -0.825f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0f, 0.80f, 0.0f);

    glVertex2f(-0.6666f, -0.775f);
    glVertex2f(-0.677f, -0.8f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0f, 0.80f, 0.0f);

    glVertex2f(-0.6f, -0.775f);
    glVertex2f(-0.577f, -0.825f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0f, 0.80f, 0.0f);

    glVertex2f(-0.5666f, -0.75f);
    glVertex2f(-0.555f, -0.775f);
    glEnd();

    //**************************************************************************************************************************************************************

    //2nd chair



    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 0.0f);

    glVertex2f(-0.3666f, -0.725f);
    glVertex2f(-0.4666f, -0.725f);
    glVertex2f(-0.4888f, -0.775);
    glVertex2f(-0.3888f, -0.775f);

    glEnd();


    //chair up

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.80f, 0.0f);

    glVertex2f(-0.4888f, -0.675f);
    glVertex2f(-0.5111f, -0.725f);
    glVertex2f(-0.4888f, -0.775f);
    glVertex2f(-0.4666f, -0.725f);

    glEnd();

    //lags



    glBegin(GL_LINES);
    glColor3f(0.0f, 0.80f, 0.0f);

    glVertex2f(-0.4888f, -0.775f);
    glVertex2f(-0.5111f, -0.825f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0f, 0.80f, 0.0f);

    glVertex2f(-0.477f, -0.775f);
    glVertex2f(-0.488f, -0.8f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0f, 0.80f, 0.0f);

    glVertex2f(-0.414f, -0.775f);
    glVertex2f(-0.388f, -0.825f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0f, 0.80f, 0.0f);

    glVertex2f(-0.3777f, -0.75f);
    glVertex2f(-0.3666f, -0.775f);
    glEnd();






    //**************************************************************************************************************************************************************

    //3rd chair





    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 0.0f);

    glVertex2f(-0.1777f, -0.725f);
    glVertex2f(-0.2777f, -0.725f);
    glVertex2f(-0.3f, -0.775);
    glVertex2f(-0.2f, -0.775f);

    glEnd();


    //chair up

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.80f, 0.0f);

    glVertex2f(-0.3f, -0.675f);
    glVertex2f(-0.3222f, -0.725f);
    glVertex2f(-0.3f, -0.775f);
    glVertex2f(-0.2777f, -0.725f);

    glEnd();

//lags



    glBegin(GL_LINES);
    glColor3f(0.0f, 0.80f, 0.0f);

    glVertex2f(-0.3f, -0.775f);
    glVertex2f(-0.3222f, -0.825f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0f, 0.80f, 0.0f);

    glVertex2f(-0.2888f, -0.775f);
    glVertex2f(-0.3f, -0.8f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0f, 0.80f, 0.0f);

    glVertex2f(-0.2252f, -0.775f);
    glVertex2f(-0.2f, -0.825f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0f, 0.80f, 0.0f);

    glVertex2f(-0.1888f, -0.75f);
    glVertex2f(-0.1777f, -0.775f);
    glEnd();

}

void Umbrella()
{
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f, 1.0f, 0.0f); // Yellow

    glVertex2f(-0.633f, -0.55);
    for(i = 0.0f; i <= 360; i++)
        glVertex2f(-(0.08*cos(M_PI * i / 180.0) + 0.633f), -(0.08*sin(M_PI * i / 180.0) + 0.55f));

    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(230, 197, 131);  //sand

    glVertex2f(-0.566f, -0.55f);
    glVertex2f(-0.7f, -0.55f);
    glVertex2f(-0.7f, -0.675f);
    glVertex2f(-0.566f, -0.675f);
    glEnd();



    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(-0.633f, -0.55);
    glVertex2f(-0.633f, -0.725f);
    glEnd();


    //*******************************************************************************************************************************************************

    //Umbrella2


    glBegin(GL_TRIANGLE_FAN);

    glColor3f(1.0f, 1.0f, 0.0f);

    glVertex2f(-0.4338f, -0.55);
    for(i = 0.0f; i <= 360; i++)
        glVertex2f(-(0.08*cos(M_PI * i / 180.0) + 0.4338f), -(0.08*sin(M_PI * i / 180.0) + 0.55f));

    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(230, 197, 131);

    glVertex2f(-0.3668f, -0.55f);
    glVertex2f(-0.5008f, -0.55f);
    glVertex2f(-0.5008f, -0.675f);
    glVertex2f(-0.3668f, -0.675f);
    glEnd();



    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(-0.4338f, -0.55);
    glVertex2f(-0.4338f, -0.725f);
    glEnd();



    //**********************************************************************************************************************************************************


    //Umbrella3


    glBegin(GL_TRIANGLE_FAN);

    glColor3f(1.0f, 1.0f, 0.0f);

    glVertex2f(-0.234777f, -0.55);
    for(i = 0.0f; i <= 360; i++)
        glVertex2f(-(0.08*cos(M_PI * i / 180.0) + 0.234777f), -(0.08*sin(M_PI * i / 180.0) + 0.55f));

    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(230, 197, 131);

    glVertex2f(-0.1678f, -0.55f);
    glVertex2f(-0.3018f, -0.55f);
    glVertex2f(-0.3018f, -0.675f);
    glVertex2f(-0.1678f, -0.675f);
    glEnd();



    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(-0.234777f, -0.55);
    glVertex2f(-0.234777f, -0.725f);
    glEnd();



}



void Nightchair()
{

    //chair


    glBegin(GL_POLYGON);
    glColor3f(0.3f, 1.0f, 0.3f);

    glVertex2f(-0.555f, -0.725f);
    glVertex2f(-0.6555f, -0.725f);
    glVertex2f(-0.6777f, -0.775);
    glVertex2f(-0.5777f, -0.775f);

    glEnd();


    //chair up

    glBegin(GL_POLYGON);
    glColor3f(0.3f, 0.80f, 0.3f);

    glVertex2f(-0.6777f, -0.675f);
    glVertex2f(-0.7f, -0.725f);
    glVertex2f(-0.6777f, -0.775f);
    glVertex2f(-0.6555f, -0.725f);

    glEnd();

//lags



    glBegin(GL_LINES);
    glColor3f(0.3f, 0.80f, 0.0f);

    glVertex2f(-0.6777f, -0.775f);
    glVertex2f(-0.7f, -0.825f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.3f, 0.80f, 0.0f);

    glVertex2f(-0.6666f, -0.775f);
    glVertex2f(-0.677f, -0.8f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.3f, 0.80f, 0.0f);

    glVertex2f(-0.6f, -0.775f);
    glVertex2f(-0.577f, -0.825f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.3f, 0.80f, 0.0f);

    glVertex2f(-0.5666f, -0.75f);
    glVertex2f(-0.555f, -0.775f);
    glEnd();

    //**************************************************************************************************************************************************************

    //2nd chair



    glBegin(GL_POLYGON);
    glColor3f(0.3f, 1.0f, 0.3f);

    glVertex2f(-0.3666f, -0.725f);
    glVertex2f(-0.4666f, -0.725f);
    glVertex2f(-0.4888f, -0.775);
    glVertex2f(-0.3888f, -0.775f);

    glEnd();


    //chair up

    glBegin(GL_POLYGON);
    glColor3f(0.3f, 0.80f, 0.3f);

    glVertex2f(-0.4888f, -0.675f);
    glVertex2f(-0.5111f, -0.725f);
    glVertex2f(-0.4888f, -0.775f);
    glVertex2f(-0.4666f, -0.725f);

    glEnd();

    //lags



    glBegin(GL_LINES);
    glColor3f(0.3f, 0.80f, 0.0f);

    glVertex2f(-0.4888f, -0.775f);
    glVertex2f(-0.5111f, -0.825f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.3f, 0.80f, 0.0f);

    glVertex2f(-0.477f, -0.775f);
    glVertex2f(-0.488f, -0.8f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.3f, 0.80f, 0.0f);

    glVertex2f(-0.414f, -0.775f);
    glVertex2f(-0.388f, -0.825f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.3f, 0.80f, 0.0f);

    glVertex2f(-0.3777f, -0.75f);
    glVertex2f(-0.3666f, -0.775f);
    glEnd();






    //**************************************************************************************************************************************************************

    //3rd chair





    glBegin(GL_POLYGON);
    glColor3f(0.3f, 1.0f, 0.3f);

    glVertex2f(-0.1777f, -0.725f);
    glVertex2f(-0.2777f, -0.725f);
    glVertex2f(-0.3f, -0.775);
    glVertex2f(-0.2f, -0.775f);

    glEnd();


    //chair up

    glBegin(GL_POLYGON);
    glColor3f(0.3f, 0.80f, 0.3f);

    glVertex2f(-0.3f, -0.675f);
    glVertex2f(-0.3222f, -0.725f);
    glVertex2f(-0.3f, -0.775f);
    glVertex2f(-0.2777f, -0.725f);

    glEnd();

//lags



    glBegin(GL_LINES);
    glColor3f(0.3f, 0.80f, 0.0f);

    glVertex2f(-0.3f, -0.775f);
    glVertex2f(-0.3222f, -0.825f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.3f, 0.80f, 0.0f);

    glVertex2f(-0.2888f, -0.775f);
    glVertex2f(-0.3f, -0.8f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.3f, 0.80f, 0.0f);

    glVertex2f(-0.2252f, -0.775f);
    glVertex2f(-0.2f, -0.825f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.3f, 0.80f, 0.0f);

    glVertex2f(-0.1888f, -0.75f);
    glVertex2f(-0.1777f, -0.775f);
    glEnd();

}

void NightUmbrella()
{
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.7f, 1.0f, 0.3f); // Yellow

    glVertex2f(-0.633f, -0.55);
    for(i = 0.0f; i <= 360; i++)
        glVertex2f(-(0.08*cos(M_PI * i / 180.0) + 0.633f), -(0.08*sin(M_PI * i / 180.0) + 0.55f));

    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(125, 105, 52);  //Nsand

    glVertex2f(-0.566f, -0.55f);
    glVertex2f(-0.7f, -0.55f);
    glVertex2f(-0.7f, -0.675f);
    glVertex2f(-0.566f, -0.675f);
    glEnd();



    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(-0.633f, -0.55);
    glVertex2f(-0.633f, -0.725f);
    glEnd();


    //*******************************************************************************************************************************************************

    //Umbrella2


    glBegin(GL_TRIANGLE_FAN);

    glColor3f(0.7f, 1.0f, 0.3f);

    glVertex2f(-0.4338f, -0.55);
    for(i = 0.0f; i <= 360; i++)
        glVertex2f(-(0.08*cos(M_PI * i / 180.0) + 0.4338f), -(0.08*sin(M_PI * i / 180.0) + 0.55f));

    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(125, 105, 52);  //Nsand

    glVertex2f(-0.3668f, -0.55f);
    glVertex2f(-0.5008f, -0.55f);
    glVertex2f(-0.5008f, -0.675f);
    glVertex2f(-0.3668f, -0.675f);
    glEnd();



    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(-0.4338f, -0.55);
    glVertex2f(-0.4338f, -0.725f);
    glEnd();



    //**********************************************************************************************************************************************************


    //Umbrella3


    glBegin(GL_TRIANGLE_FAN);

    glColor3f(0.7f, 1.0f, 0.3f);

    glVertex2f(-0.234777f, -0.55);
    for(i = 0.0f; i <= 360; i++)
        glVertex2f(-(0.08*cos(M_PI * i / 180.0) + 0.234777f), -(0.08*sin(M_PI * i / 180.0) + 0.55f));

    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(125, 105, 52);  //Nsand

    glVertex2f(-0.1678f, -0.55f);
    glVertex2f(-0.3018f, -0.55f);
    glVertex2f(-0.3018f, -0.675f);
    glVertex2f(-0.1678f, -0.675f);
    glEnd();



    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(-0.234777f, -0.55);
    glVertex2f(-0.234777f, -0.725f);
    glEnd();



}







void boat()
{


    glBegin(GL_POLYGON);
    glColor3f(0.4f,0.4f,0.4f);

    glVertex2f(0.8222f, -0.35f);
    glVertex2f(0.7111f, -0.3f);
    glVertex2f(0.7f, -0.35f);
    glVertex2f(0.8111f, -0.4f);

    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(0.4f,0.4f,0.4f);

    glVertex2f(0.7111f, -0.3f);
    glVertex2f(0.666f, -0.225f);
    glVertex2f(0.7f, -0.35f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.4f,0.4f,0.4f);

    glVertex2f(0.8222f, -0.35f);
    glVertex2f(0.8111f, -0.4f);
    glVertex2f(0.8777f, -0.33f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(0.8444f, -0.3);
    glVertex2f(0.8444f, -0.425f);
    glEnd();

}

void hills()
{

    glBegin(GL_QUADS);//hills
    glColor3ub(0,120,0);
    glVertex2f(-1.0f,0.45f);
    glVertex2f(-1.0f,0.3f);
    glVertex2f(-0.5f,0.3f);
    glVertex2f(-0.88f,0.65f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,120,0);
    glVertex2f(-0.8f,0.3f);
    glVertex2f(-0.25f,0.3f);
    glVertex2f(-0.63f,0.58f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,120,0);
    glVertex2f(-0.5f,0.3f);
    glVertex2f(-0.25f,0.3f);
    glVertex2f(-0.39f,0.48f);
    glEnd();

}


void sun()
{


    glBegin(GL_TRIANGLE_FAN);//SUN
    glColor3f(1.0,1.0,0.0);

    glVertex2f(0.6,0.75);
    for(i = 0.0f; i <= 360; i++)
        glVertex2f(0.135*cos(M_PI * i / 180.0) + 0.6, 0.18*sin(M_PI * i / 180.0) + 0.75);

    glEnd();


    glFlush();
}
void ship()
{
    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);


    glBegin(GL_QUADS);
    glColor3f(0.0f,0.4f,0.4f);  //ship

    glVertex2f(-0.3f, 0.0f);
    glVertex2f(-0.8f, 0.0f);
    glVertex2f(-1.0f, 0.2f);
    glVertex2f(-0.1f, 0.2f);

    glEnd();



    glBegin(GL_QUADS);
    glColor3f(0.251f,0.204f,0.204f);

    glVertex2f(-0.3f, 0.2f);
    glVertex2f(-0.8f, 0.2f);
    glVertex2f(-0.8f, 0.25f);
    glVertex2f(-0.3f, 0.25f);

    glVertex2f(-0.4f, 0.25f);
    glVertex2f(-0.7f, 0.25f);
    glVertex2f(-0.7f, 0.3f);
    glVertex2f(-0.4f, 0.3f);

    glVertex2f(-0.44f, 0.3f);
    glVertex2f(-0.53f, 0.3f);
    glVertex2f(-0.53f, 0.4f);
    glVertex2f(-0.44f, 0.4f);

    glVertex2f(-0.57f, 0.3f);
    glVertex2f(-0.65f, 0.3f);
    glVertex2f(-0.65f, 0.38f);
    glVertex2f(-0.57f, 0.38f);


    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(-0.46f, 0.25f);
    glVertex2f(-0.46f, 0.3f);
    glVertex2f(-0.505f, 0.3f);
    glVertex2f(-0.505f, 0.25f);

    glVertex2f(-0.59f, 0.25f);
    glVertex2f(-0.59f, 0.3f);
    glVertex2f(-0.63f, 0.3f);
    glVertex2f(-0.63f, 0.25f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.2f, 0.5f);
    glVertex2f(0.6,0.3);
    glVertex2f(0.9,0.3);
    glVertex2f(1.0,0.4);
    glVertex2f(0.5,0.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.2f, 0.5f, 0.7f);
    glVertex2f(0.83,0.4);
    glVertex2f(0.9,0.4);
    glVertex2f(0.9,0.57);
    glVertex2f(0.83,0.57);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.5f, 0.5f);
    glVertex2f(0.7,0.4);
    glVertex2f(0.83,0.4);
    glVertex2f(0.83,0.475);
    glVertex2f(0.7,0.475);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.755,0.42);
    glVertex2f(0.775,0.42);
    glVertex2f(0.775,0.450);
    glVertex2f(0.755,0.450);
    glEnd();


    glFlush();



    glPopMatrix();

}
void nightship()
{
    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);


    glBegin(GL_QUADS);
    glColor3f(0.0f,0.4f,0.4f);  //ship

    glVertex2f(-0.3f, 0.0f);
    glVertex2f(-0.8f, 0.0f);
    glVertex2f(-1.0f, 0.2f);
    glVertex2f(-0.1f, 0.2f);

    glEnd();



    glBegin(GL_QUADS);
    glColor3f(0.251f,0.204f,0.204f);

    glVertex2f(-0.3f, 0.2f);
    glVertex2f(-0.8f, 0.2f);
    glVertex2f(-0.8f, 0.25f);
    glVertex2f(-0.3f, 0.25f);

    glVertex2f(-0.4f, 0.25f);
    glVertex2f(-0.7f, 0.25f);
    glVertex2f(-0.7f, 0.3f);
    glVertex2f(-0.4f, 0.3f);

    glVertex2f(-0.44f, 0.3f);
    glVertex2f(-0.53f, 0.3f);
    glVertex2f(-0.53f, 0.4f);
    glVertex2f(-0.44f, 0.4f);

    glVertex2f(-0.57f, 0.3f);
    glVertex2f(-0.65f, 0.3f);
    glVertex2f(-0.65f, 0.38f);
    glVertex2f(-0.57f, 0.38f);


    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(-0.46f, 0.25f);
    glVertex2f(-0.46f, 0.3f);
    glVertex2f(-0.505f, 0.3f);
    glVertex2f(-0.505f, 0.25f);

    glVertex2f(-0.59f, 0.25f);
    glVertex2f(-0.59f, 0.3f);
    glVertex2f(-0.63f, 0.3f);
    glVertex2f(-0.63f, 0.25f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.2f, 0.5f);
    glVertex2f(0.6,0.2);
    glVertex2f(0.9,0.2);
    glVertex2f(1.0,0.3);
    glVertex2f(0.5,0.3);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.2f, 0.5f, 0.7f);
    glVertex2f(0.83,0.3);
    glVertex2f(0.9,0.3);
    glVertex2f(0.9,0.47);
    glVertex2f(0.83,0.47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.5f, 0.5f);
    glVertex2f(0.7,0.3);
    glVertex2f(0.83,0.3);
    glVertex2f(0.83,0.375);
    glVertex2f(0.7,0.375);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.755,0.32);
    glVertex2f(0.775,0.32);
    glVertex2f(0.775,0.350);
    glVertex2f(0.755,0.350);
    glEnd();


    glFlush();


    glPopMatrix();


}

void moon()
{
    glBegin(GL_TRIANGLE_FAN);//Moon
    glColor3f(0.976, 0.976, 0.976);

    glVertex2f(-0.6, 0.75);
    for(i = 0.0f; i <= 360; i++)
        glVertex2f(0.10*cos(M_PI * i / 180.0) + (-0.6), 0.15*sin(M_PI * i / 180.0) + 0.75);

    glEnd();

}

void cloud1()
{
    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(193,190,186);

    glVertex2f(-0.6f, 0.9f);
    for(i = 0.0f; i <= 360; i++)
        glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.6, 0.06*sin(M_PI * i / 180.0) + 0.9);

    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(193,190,186);

    glVertex2f(-0.55f, 0.9f);
    for(i = 0.0f; i <= 360; i++)
        glVertex2f(0.05*cos(M_PI * i / 180.0) - 0.55, 0.09*sin(M_PI * i / 180.0) + 0.9);

    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(193,190,186);

    glVertex2f(-0.50f, 0.9f);
    for(i = 0.0f; i <= 360; i++)
        glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.50, 0.06*sin(M_PI * i / 180.0) + 0.9);

    glEnd();
    //cloud 2
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(193,190,186);

    glVertex2f(-0.8f, 0.8f);
    for(i = 0.0f; i <= 360; i++)
        glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.8, 0.06*sin(M_PI * i / 180.0) + 0.8);

    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(193,190,186);

    glVertex2f(-0.85f, 0.8f);
    for(i = 0.0f; i <= 360; i++)
        glVertex2f(0.05*cos(M_PI * i / 180.0) - 0.85, 0.09*sin(M_PI * i / 180.0) + 0.8);

    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(193,190,186);

    glVertex2f(-0.90f, 0.8f);
    for(i = 0.0f; i <= 360; i++)
        glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.90, 0.06*sin(M_PI * i / 180.0) + 0.8);

    glEnd();
    //cloud3
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(193,190,186);

    glVertex2f(-0.3f, 0.77f);
    for(i = 0.0f; i <= 360; i++)
        glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.3, 0.06*sin(M_PI * i / 180.0) + 0.77);

    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(193,190,186);

    glVertex2f(-0.25f, 0.77f);
    for(i = 0.0f; i <= 360; i++)
        glVertex2f(0.05*cos(M_PI * i / 180.0) - 0.25, 0.09*sin(M_PI * i / 180.0) + 0.77);

    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(193,190,186);
    glVertex2f(-0.20f, 0.77f);
    for(i = 0.0f; i <= 360; i++)
        glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.20, 0.06*sin(M_PI * i / 180.0) + 0.77);

    glEnd();
    glPopMatrix();

}

void bird()
{
    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(0.27f,0.72f);// 1st
    glVertex2f(0.30f,0.71f);
    glVertex2f(0.30f,0.71f);
    glVertex2f(0.29f,0.70f);
    glVertex2f(0.29f,0.70f);
    glVertex2f(0.29f,0.70f);
    glVertex2f(0.28f,0.69f);
    glVertex2f(0.28f,0.68f);
    glVertex2f(0.27f,0.70f);
    glVertex2f(0.26f,0.70f);
    glVertex2f(0.26f,0.70f);
    glVertex2f(0.26f,0.71f);
    glVertex2f(0.27f,0.72f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(0.29f,0.52f);// 2nd
    glVertex2f(0.32f,0.51f);
    glVertex2f(0.33f,0.51f);
    glVertex2f(0.32f,0.50f);
    glVertex2f(0.313f,0.502f);
    glVertex2f(0.315f,0.494f);
    glVertex2f(0.31f,0.48f);
    glVertex2f(0.308f,0.497f);
    glVertex2f(0.295f,0.494f);
    glVertex2f(0.29f,0.502f);
    glVertex2f(0.28f,0.51f);
    glVertex2f(0.28f,0.511f);
    glVertex2f(0.29f,0.51f);

    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(0.37f,0.597f);// 3rd
    glVertex2f(0.39f,0.585f);
    glVertex2f(0.405f,0.577f);
    glVertex2f(0.39f,0.5714f);
    glVertex2f(0.39f,0.574f);
    glVertex2f(0.39f,0.568f);
    glVertex2f(0.385f,0.568f);
    glVertex2f(0.38f,0.56f);
    glVertex2f(0.37f,0.574f);
    glVertex2f(0.36f,0.5714f);
    glVertex2f(0.366f,0.58f);
    glVertex2f(0.363f,0.591f);
    glVertex2f(0.37f,0.591f);

    glEnd();
    glPopMatrix();

}

void sky()
{


    glBegin(GL_QUADS);
    glColor3ub(174, 225, 230); //sky

    glVertex2f(-1.0f, 0.3f);
    glVertex2f(1.0f, 0.3f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);


    glEnd();


}


void ocean()
{


    glBegin(GL_QUADS);
    glColor3ub(55, 159, 212);  //ocean

    glVertex2f(-1.0f, -0.3f);
    glVertex2f(1.0f, -0.3f);
    glVertex2f(1.0f, 0.3f);
    glVertex2f(-1.0f, 0.3f);

    glEnd();
}



void nightocean()
{

    glBegin(GL_QUADS);
    glColor3ub(6,66,115);  //ocean

    glVertex2f(-1.0f, -0.3f);
    glVertex2f(1.0f, -0.3f);
    glVertex2f(1.0f, 0.3f);
    glVertex2f(-1.0f, 0.3f);

    glEnd();
}


void sand()
{

    glBegin(GL_QUADS);
    glColor3ub(230, 197, 131);  //sand

    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -0.3f);
    glVertex2f(-1.0f, -0.3f);

    glEnd();

}

void nightSky()
{

    glBegin(GL_QUADS);
    glColor3ub(7, 11, 52); //sky

    glVertex2f(-1.0f, 0.3f);
    glVertex2f(1.0f, 0.3f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);


    glEnd();
}



void line()
{
   glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.f, 0.0f);
	glVertex2f(1.0f, 0.0f);

	glEnd();
}

void star()
{
    line();
    glRotatef(45, 0.0, 0.0, 1.0);
    line();
    glRotatef(90, 0.0, 0.0, 1.0);
    line();
    glRotatef(135, 0.0, 0.0, 1.0);
    line();
    glRotatef(180, 0.0, 0.0, 1.0);
    line();
    glRotatef(225, 0.0, 0.0, 1.0);
    line();
    glRotatef(270, 0.0, 0.0, 1.0);
    line();
    glRotatef(315, 0.0, 0.0, 1.0);
    line();

}

void starR()
{
    gluLookAt(0.0, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, 0.5, 0.0);
    glPushMatrix();
    glScalef(0.02, 0.02, 0.02);
    glTranslatef(40, 40, 40);
    glRotatef(angle, 0.0, 0.0, 1.0);
    star();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.02, 0.02, 0.02);
    glTranslatef(30, 30, 40);
    glRotatef(angle, 0.0, 0.0, 1.0);
    star();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.02, 0.02, 0.02);
    glTranslatef(20, 40, 40);
    glRotatef(angle, 0.0, 0.0, 1.0);
    star();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.02, 0.02, 0.02);
    glTranslatef(10, 30, 40);
    glRotatef(angle, 0.0, 0.0, 1.0);
    star();

    glPopMatrix();
    glPushMatrix();
    glScalef(0.02, 0.02, 0.02);
    glTranslatef(00, 40, 40);
    glRotatef(angle, 0.0, 0.0, 1.0);
    star();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.02, 0.02, 0.02);
    glTranslatef(-10, 30, 40);
    glRotatef(angle, 0.0, 0.0, 1.0);
    star();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.02, 0.02, 0.02);
    glTranslatef(-20, 40, 40);
    glRotatef(angle, 0.0, 0.0, 1.0);
    star();
    glPopMatrix();


    glPushMatrix();
    glScalef(0.02, 0.02, 0.02);
    glTranslatef(-40, 40, 40);
    glRotatef(angle, 0.0, 0.0, 1.0);
    star();
    glPopMatrix();


}

void nighttrees(){
 glBegin(GL_POLYGON); //tree 4
 glColor3ub(170,120,0);

 glVertex2f(-0.59, 0.5);
 glVertex2f(-0.55, 0.5);
 glVertex2f(-0.55, 0.31);
 glVertex2f(-0.54, 0.30);
 glVertex2f(-0.60, 0.30);
 glVertex2f(-0.59, 0.31);
 //glVertex2f(-0.57, 0.5);
  glEnd();

 glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,100,0);

 glVertex2f(-0.62f, 0.45f);
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.62, 0.06*sin(M_PI * i / 180.0) + 0.45);

 glEnd();

 glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,100,0);

 glVertex2f(-0.57f, 0.5f);
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.05*cos(M_PI * i / 180.0) - 0.57, 0.09*sin(M_PI * i / 180.0) + 0.5);

 glEnd();
  glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,100,0);

 glVertex2f(-0.52f, 0.45f);
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.52, 0.06*sin(M_PI * i / 180.0) + 0.45);

 glEnd();
 //tree 2
 glBegin(GL_POLYGON);
 glColor3ub(170,120,0);

 glVertex2f(-0.87, 0.5);
 glVertex2f(-0.83, 0.5);
 glVertex2f(-0.83, 0.31);
 glVertex2f(-0.82, 0.30);
 glVertex2f(-0.88, 0.30);
 glVertex2f(-0.87, 0.31);

  glEnd();

 glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,100,0);

 glVertex2f(-0.8f, 0.44f);
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.8, 0.06*sin(M_PI * i / 180.0) + 0.44);

 glEnd();

 glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,100,0);

 glVertex2f(-0.85f, 0.48f);
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.05*cos(M_PI * i / 180.0) - 0.85, 0.09*sin(M_PI * i / 180.0) + 0.48);

 glEnd();
  glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,100,0);

 glVertex2f(-0.90f, 0.44f);
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.90, 0.06*sin(M_PI * i / 180.0) + 0.44);

 glEnd();
 //tree3
  glBegin(GL_POLYGON);
 glColor3ub(170,120,0);

 glVertex2f(-0.74, 0.5);
 glVertex2f(-0.70, 0.5);
 glVertex2f(-0.70, 0.31);
 glVertex2f(-0.69, 0.30);
 glVertex2f(-0.75, 0.30);
 glVertex2f(-0.74, 0.31);

  glEnd();

 glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,100,0);

 glVertex2f(-0.76f, 0.44f);
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.76, 0.06*sin(M_PI * i / 180.0) + 0.44);

 glEnd();

 glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,100,0);

 glVertex2f(-0.72f, 0.48f);
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.05*cos(M_PI * i / 180.0) - 0.72, 0.09*sin(M_PI * i / 180.0) + 0.48);

 glEnd();
  glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,100,0);

 glVertex2f(-0.68f, 0.44f);
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.68, 0.06*sin(M_PI * i / 180.0) + 0.44);

 glEnd();

 //tree 5
   glBegin(GL_POLYGON);
 glColor3ub(170,120,0);

 glVertex2f(-0.44, 0.5);
 glVertex2f(-0.40, 0.5);
 glVertex2f(-0.40, 0.31);
 glVertex2f(-0.39, 0.30);
 glVertex2f(-0.45, 0.30);
 glVertex2f(-0.44, 0.31);

  glEnd();

 glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,100,0);

 glVertex2f(-0.46f, 0.44f);
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.46, 0.06*sin(M_PI * i / 180.0) + 0.44);

 glEnd();

 glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,100,0);

 glVertex2f(-0.42f, 0.48f);
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.05*cos(M_PI * i / 180.0) - 0.42, 0.09*sin(M_PI * i / 180.0) + 0.48);

 glEnd();
  glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,100,0);

 glVertex2f(-0.38f, 0.44f);
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.38, 0.06*sin(M_PI * i / 180.0) + 0.44);

 glEnd();




}

void nightsand()
{
    glBegin(GL_QUADS);
    glColor3ub(125, 105, 52);  //sand

    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -0.3f);
    glVertex2f(-1.0f, -0.3f);

    glEnd();

}

void trees(){
 glBegin(GL_POLYGON); //tree 4
 glColor3ub(255,90,0);

 glVertex2f(-0.59, 0.5);
 glVertex2f(-0.55, 0.5);
 glVertex2f(-0.55, 0.31);
 glVertex2f(-0.54, 0.30);
 glVertex2f(-0.60, 0.30);
 glVertex2f(-0.59, 0.31);
 //glVertex2f(-0.57, 0.5);
  glEnd();



 glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,190,0);

 glVertex2f(-0.62f, 0.45f);
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.62, 0.06*sin(M_PI * i / 180.0) + 0.45);

 glEnd();

 glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,190,0);

 glVertex2f(-0.57f, 0.5f);
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.05*cos(M_PI * i / 180.0) - 0.57, 0.09*sin(M_PI * i / 180.0) + 0.5);

 glEnd();
  glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,190,0);

 glVertex2f(-0.52f, 0.45f);
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.52, 0.06*sin(M_PI * i / 180.0) + 0.45);

 glEnd();
 //tree 2
 glBegin(GL_POLYGON);
 glColor3ub(255,90,0);

 glVertex2f(-0.87, 0.5);
 glVertex2f(-0.83, 0.5);
 glVertex2f(-0.83, 0.31);
 glVertex2f(-0.82, 0.30);
 glVertex2f(-0.88, 0.30);
 glVertex2f(-0.87, 0.31);

  glEnd();

 glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,190,0);

 glVertex2f(-0.8f, 0.44f);
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.8, 0.06*sin(M_PI * i / 180.0) + 0.44);

 glEnd();

 glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,190,0);

 glVertex2f(-0.85f, 0.48f);
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.05*cos(M_PI * i / 180.0) - 0.85, 0.09*sin(M_PI * i / 180.0) + 0.48);

 glEnd();
  glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,190,0);

 glVertex2f(-0.90f, 0.44f);
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.90, 0.06*sin(M_PI * i / 180.0) + 0.44);

 glEnd();
 //tree3
  glBegin(GL_POLYGON);
 glColor3ub(255,90,0);

 glVertex2f(-0.74, 0.5);
 glVertex2f(-0.70, 0.5);
 glVertex2f(-0.70, 0.31);
 glVertex2f(-0.69, 0.30);
 glVertex2f(-0.75, 0.30);
 glVertex2f(-0.74, 0.31);

  glEnd();

 glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,190,0);

 glVertex2f(-0.76f, 0.44f);
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.76, 0.06*sin(M_PI * i / 180.0) + 0.44);

 glEnd();

 glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,190,0);

 glVertex2f(-0.72f, 0.48f);
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.05*cos(M_PI * i / 180.0) - 0.72, 0.09*sin(M_PI * i / 180.0) + 0.48);

 glEnd();
  glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,190,0);

 glVertex2f(-0.68f, 0.44f);
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.68, 0.06*sin(M_PI * i / 180.0) + 0.44);

 glEnd();

 //tree 5
   glBegin(GL_POLYGON);
 glColor3ub(255,90,0);

 glVertex2f(-0.44, 0.5);
 glVertex2f(-0.40, 0.5);
 glVertex2f(-0.40, 0.31);
 glVertex2f(-0.39, 0.30);
 glVertex2f(-0.45, 0.30);
 glVertex2f(-0.44, 0.31);

  glEnd();

 glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,190,0);

 glVertex2f(-0.46f, 0.44f);
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.46, 0.06*sin(M_PI * i / 180.0) + 0.44);

 glEnd();

 glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,190,0);

 glVertex2f(-0.42f, 0.48f);
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.05*cos(M_PI * i / 180.0) - 0.42, 0.09*sin(M_PI * i / 180.0) + 0.48);

 glEnd();
  glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,190,0);

 glVertex2f(-0.38f, 0.44f);
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.38, 0.06*sin(M_PI * i / 180.0) + 0.44);

 glEnd();




}



void day()
{

    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    sky();
    ocean();
    sun();
    hills();
    trees();
    cloud1();
    bird();
    sand();
    ship();
    Light();
    Bulb();
    chair();
    Umbrella();
    boat();



    glFlush();
}

void night()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    nightSky();

    hills();
    nighttrees();

    starR();
    nightocean();
    moon();

    nightship();
    nightsand();
    Light();
    Bulb();
    Bright();
    boat();
    Nightchair();
    NightUmbrella();

    glFlush();


}


void update(int value)
{

    if(position > 1.0)
        position = -1.2f;

    position += speed;


    glutPostRedisplay();
    glutTimerFunc(100, update, 0);



}


void update2(int value)
{


    if(position2 < -1.4)
        position2 = 1.0f;


    position2 -= speed2;


    glutPostRedisplay();
    glutTimerFunc(100, update2, 0);

}

void update3(int value)
{
    if(position3 > 1.0)
        position3 = -1.2f;
    position3 += speed3;

    glutPostRedisplay();
    glutTimerFunc(100, update3, 0);

}

void update4(int value) {

    if(angle >360.0 )
        angle = 1.0f;

    angle -= speed4;

	glutPostRedisplay();


	glutTimerFunc(100, update4, 0);
}


void handleMouse(int button, int state, int x, int y)
{
    if (button == GLUT_LEFT_BUTTON)
    {
        if (state == GLUT_DOWN)
        {
            speed += 0.009f;
            printf("clicked at (%d, %d)\n", x, y);
        }

    }
    else if(button ==GLUT_RIGHT_BUTTON)
    {
        if(state == GLUT_DOWN)
        {
            speed -=0.009f;
            printf("clicked at (%d, %d)\n", x, y);
        }
    }

    glutPostRedisplay();
}




void handleKeypress(unsigned char key, int x, int y)
{

    switch (key)
    {

    case 'a':
        speed = 0.0f;
        break;
    case 'b':
        speed = 0.05f;
        break;
    case 'c':
        speed =-0.05f;
        break;
    case'n':
        glutDisplayFunc(night);
        glutPostRedisplay();
        break;
    case'd':
        glutDisplayFunc(day);
        glutPostRedisplay();
        break;

    }

}




int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1200, 600);
    glutInitWindowPosition(100, 150);
    glutCreateWindow("GROUP 1 SEA BEACH ");
    glutDisplayFunc(day);
    glutKeyboardFunc(handleKeypress);
    glutMouseFunc(handleMouse);
    glutTimerFunc(100, update, 0);
    glutTimerFunc(100, update2, 0);
    glutTimerFunc(100, update3, 0);
    glutTimerFunc(100, update4, 0);
    glutMainLoop();
    return 0;
}
