#include<stdio.h>
#include<graphics.h>
int main()
{
	int gd=DETECT, gm;
	initgraph(&gd,&gm,(char*)"");
//basic face
    setbkcolor(15);
    cleardevice();
    setcolor(0);
    setlinestyle(0,0,3);
    setfillstyle(SOLID_FILL, BLACK);
	circle(200,90,30);  //right ear
	floodfill(200,90, BLACK);
	setfillstyle(SOLID_FILL, BLACK);
	circle(100,90,30); // left ear
	floodfill(100,90, BLACK);
	setfillstyle(SOLID_FILL,BLUE);
	circle(150,150,50);  //face
	floodfill(151,160,BLACK);

    setfillstyle(SOLID_FILL,WHITE);
	ellipse(135,150,50,215, 23, 43); //left side of face
	floodfill(135,150, BLACK);
	setfillstyle(SOLID_FILL, WHITE);
	ellipse(165, 150,-35,130, 23, 43);  //right side of face
	floodfill(165,150, BLACK);
	
//eyes	
	setfillstyle(SOLID_FILL, BLACK);
	ellipse(140, 139, 0,360, 8, 18); //left eye
	floodfill(140,140, BLACK);
//right eye
	setfillstyle(SOLID_FILL,BLACK );
	ellipse(160, 139, 0,360, 8, 18);  
	floodfill(160,140, BLACK);

////left eye pupil
//	setfillstyle(SOLID_FILL, BLACK);
//	ellipse(140, 150, 0,360, 6, 13); 
//	floodfill(90,100, BLACK);
////right eye pupil
//	setfillstyle(SOLID_FILL, BLACK);
//	ellipse(160, 150, 0,360, 6, 13);  
//	floodfill(110,100, BLACK);
//	
//mouth
    setfillstyle(SOLID_FILL,WHITE);
	ellipse(150, 180, 0,360, 35, 20); 
	floodfill(150,180, BLACK);
//mouth small
	setfillstyle(SOLID_FILL,WHITE);
	ellipse(150, 173, 0,360, 23, 12);  
	floodfill(150,173, BLACK);
//nose
	setfillstyle(SOLID_FILL,BLACK);
	ellipse(150, 172, 0,360, 13, 7); 
	floodfill(150,172, BLACK);
	
	//smile
	arc(150,145,230,310,45); 
	//tongue
	setfillstyle(SOLID_FILL,RED);
	sector(150,190,180,360,7,7);
	floodfill(150,190, BLACK);

	//body
//	ellipse(250,200,0,180,80,150);
    setfillstyle(SOLID_FILL,BLACK);
    setlinestyle(0,0,3);
    line(123,200,177,200); //neck line
    line(113,220,180,220); //Chest line
    line(118,220,130,196); //left Shoulder line
    line(170,196,177,220); //right shoulder line
    floodfill(150,209,BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    setlinestyle(0,0,3);
	line(116,220,116,267);  //left body
	line(177,220,177,267);  //right body
	line(116,265,177,265); //pant
	floodfill(137,243,BLACK);
	//pant
//	setcolor(LIGHTRED);
	setfillstyle(SOLID_FILL,RED);
	line(116,267,177,267); //pant
	//left pant
	line(114,266,107,326); //left pant upper
	line(145,308,140,326); //left pant below
	line(108,326,140,326); //left pant bottom
	//right pant
	line(177,266,182,325); //right pant upper
	line(145,308,150,325); //right pant below
	line(152,326,182,326); //right pant bottom

	arc(145,295,245,300,15); //pant
	floodfill(115,300,BLACK);
	
//	setcolor(15);
	setfillstyle(SOLID_FILL,YELLOW);
	ellipse(130,285,0,360,6,8); // left button
	floodfill(130,285, BLACK);
	setfillstyle(SOLID_FILL,YELLOW);
	ellipse(160,285,0,360,6,8); // right button
	floodfill(160,285, BLACK);
	
	//hand
	setfillstyle(SOLID_FILL,BLACK);
	setlinestyle(0,0,3);
	line(130,196,60,250);  //left upper hand
	line(118,220,80,250);  //left below hand
	line(118,220,130,196); //left Shoulder line
	line(59,250,76,250); //before gloves
	floodfill(105,220,BLACK);
	
	setfillstyle(SOLID_FILL,BLACK);
	setlinestyle(0,0,3);
	line(170,196,227,250);  //right upper hand
	line(177,220,210,250);  //right below hand
	line(170,196,177,220); //right shoulder line
	line(210,250,227,250); //before gloves
    floodfill(195,230, BLACK);
	//gloves
//	setcolor(LIGHTGRAY);
    
    setfillstyle(SOLID_FILL,RED);
    ellipse(65,270,0,360,20,12); //left glove top
    floodfill(65,270, BLACK);
	setfillstyle(SOLID_FILL,RED);
	ellipse(70,256,0,360,14,4); // left glove bottom
	floodfill(70,256, BLACK);
	
	
	setfillstyle(SOLID_FILL,RED);
	ellipse(225,270,0,360,20,12); //right glove top
	floodfill(225,270, BLACK);
	setfillstyle(SOLID_FILL,RED);
	ellipse(220,256,0,360,14,4); // right glove bottom
	floodfill(220,256, BLACK);
	
	
	//legs
    setfillstyle(SOLID_FILL,BLACK); 
	setlinestyle(0,0,3);
	line(110,328,110,345); //left upper leg
	line(125,328,125,345); //left below leg	
	line(110,343,125,343); //before shoes
	floodfill(115,335,BLACK);
	
	setfillstyle(SOLID_FILL,BLACK); 
	setlinestyle(0,0,3);
	line(160,328,160,345); //right upper leg
	line(175,328,175,345); //right below leg
	line(159,343,175,343); //before shoes
	floodfill(165,335,BLACK);
	
	//shoes
	setfillstyle(SOLID_FILL,RED);
	ellipse(118,350,0,360,11,4); // left shoe top
	floodfill(118,350, BLACK);
    setfillstyle(SOLID_FILL,YELLOW);
	ellipse(88,360,0,360,20,11); //left shoe
	floodfill(88,360, BLACK);
	setfillstyle(SOLID_FILL,YELLOW);
	ellipse(118,360,0,360,14,7); //left shoe
	floodfill(118,360, BLACK);
	
	setfillstyle(SOLID_FILL,RED);
	ellipse(168,350,0,360,11,4); // right shoe top
	floodfill(168,350, BLACK);
	setfillstyle(SOLID_FILL,YELLOW);
	ellipse(198,357,0,360,20,11); //right shoe
	floodfill(198,360, BLACK);
	setfillstyle(SOLID_FILL,YELLOW);
	ellipse(168,360,0,360,14,7); //right shoe
	floodfill(168,360, BLACK);

	getch();
	
	closegraph(); 
	return 0;
	
}
