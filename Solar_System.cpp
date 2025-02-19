#include <iostream>
#include <graphics.h>
#include <cmath>

int main() {
    initwindow(1000, 1000);



    setbkcolor(BLACK);


 int cometX = 0;
    int cometY = 600;


    float angle = 0.0; 

    while (!kbhit()) {
        cleardevice();

        //sun
        setcolor(YELLOW);
        setfillstyle(SOLID_FILL, YELLOW);
        circle(500, 500, 30);
        floodfill(500, 500, YELLOW);
        outtextxy(500, 500, "SUN");

        //planets
        int sunX = 500;
        int sunY = 500;

        
        int mercuryRadius = 100;
        int venusRadius = 150;
        int earthRadius = 200;
        int marsRadius = 250;
        int jupiterRadius = 300;
        int saturnRadius = 350;
        int uranusRadius = 400;
        int neptuneRadius = 450;

        // Calculate the positions of each planet
        int mercuryX = sunX + mercuryRadius * cos(angle);
        int mercuryY = sunY + mercuryRadius * sin(angle);
        int venusX = sunX + venusRadius * cos(angle * 0.8); 
        int venusY = sunY + venusRadius * sin(angle * 0.8);
        int earthX = sunX + earthRadius * cos(angle * 0.6);
        int earthY = sunY + earthRadius * sin(angle * 0.6);
        int marsX = sunX + marsRadius * cos(angle * 0.5);
        int marsY = sunY + marsRadius * sin(angle * 0.5);
        int jupiterX = sunX + jupiterRadius * cos(angle * 0.4);
        int jupiterY = sunY + jupiterRadius * sin(angle * 0.4);
        int saturnX = sunX + saturnRadius * cos(angle * 0.3);
        int saturnY = sunY + saturnRadius * sin(angle * 0.3);
        int uranusX = sunX + uranusRadius * cos(angle * 0.2);
        int uranusY = sunY + uranusRadius * sin(angle * 0.2);
        int neptuneX = sunX + neptuneRadius * cos(angle * 0.1);
        int neptuneY = sunY + neptuneRadius * sin(angle * 0.1);


     setcolor(CYAN);
        circle(sunX, sunY, mercuryRadius);
        circle(sunX, sunY, venusRadius);
        circle(sunX, sunY, earthRadius);
        circle(sunX, sunY, marsRadius);
        circle(sunX, sunY, jupiterRadius);
        circle(sunX, sunY, saturnRadius);
        circle(sunX, sunY, uranusRadius);
        circle(sunX, sunY, neptuneRadius);
        
        setcolor(RED);
        setfillstyle(SOLID_FILL, RED);
        circle(mercuryX, mercuryY, 12);
        floodfill(mercuryX, mercuryY, RED);
        outtextxy(mercuryX, mercuryY, "MERCURY");

        setcolor(GREEN);
        setfillstyle(SOLID_FILL, GREEN);
        circle(venusX, venusY, 15);
        floodfill(venusX, venusY, GREEN);
        outtextxy(venusX, venusY, "VENUS");



        setcolor(BLUE);
        setfillstyle(SOLID_FILL, BLUE);
        circle(earthX, earthY, 18);
        floodfill(earthX, earthY, BLUE);
        outtextxy(earthX, earthY, "EARTH");



        setcolor(RED);
        setfillstyle(SOLID_FILL, RED);
        circle(marsX, marsY, 14);
        floodfill(marsX, marsY, RED);
        outtextxy(marsX, marsY, "MARS");



        setcolor(YELLOW);
        setfillstyle(SOLID_FILL, YELLOW);
        circle(jupiterX, jupiterY, 20);
        floodfill(jupiterX, jupiterY, YELLOW);
        outtextxy(jupiterX, jupiterY, "JUPITER");



       setcolor(CYAN);
        setfillstyle(SOLID_FILL, CYAN);
        circle(saturnX, saturnY, 17);
        floodfill(saturnX, saturnY, CYAN);


        
        setcolor(CYAN);
        setfillstyle(SOLID_FILL, CYAN);
        ellipse(saturnX, saturnY, 0, 360, 30, 10);
        floodfill(saturnX, saturnY, CYAN);
        outtextxy(saturnX, saturnY, "SATURN");

        setcolor(MAGENTA);
        setfillstyle(SOLID_FILL, MAGENTA);
        circle(uranusX, uranusY, 16);
        floodfill(uranusX, uranusY, MAGENTA);
        outtextxy(uranusX, uranusY, "URANUS");

        setcolor(LIGHTBLUE);
        setfillstyle(SOLID_FILL, LIGHTBLUE);
        circle(neptuneX, neptuneY, 19);
        floodfill(neptuneX, neptuneY, LIGHTBLUE);
        outtextxy(neptuneX, neptuneY, "NEPTUNE");

         setcolor(YELLOW);
        for (int i = 0; i < 5; i++) {
        int x = rand() % 1000;
        int y = rand() % 1000;
        putpixel(x, y, YELLOW);
    }

        angle += 0.03;

        delay(50);
    }


    getch();
}

