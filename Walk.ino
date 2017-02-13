/*
 Name:		Walk.ino
 Created:	11/02/2017 11:03:10
 Author:	Nathann
 
 This program is used to make walk a quadruped robot.
 
 Define zone : Different Useful Position for the Leg servo
 Variable zone : variable used to store the position of each servo. Dont modify them directly, use the methode to move the servo instead.
 Creating Servo Object zone : Dont give a fuck of this, its for the librabry
 void setup : Asign each servo object to its pin (go there to change the pin used by each servo
 loop zone : PUT YOUR CODE HERE
 MemberXMV zone : list of method to move each servo.
 LegXMV zone : list of method to move each leg (deprecated)
 walk() zone : method to cordinate the movement of each leg and walk (deprecated)
 MoveXY() zone : methode that put the angle of each servo in angle variable from the XY coordinate where the leg should go.
 
 (method, function, sub program, procedure, ... Call it what you want, )
*/

#include <Servo.h> 

#define SPEED 1
#define DELAY 20

#define RobotChestFloorDistanceInmm 50
#define DistanceCentreRobotExtremitePatte 250 //THIS VALUE IS NOT EXACT. MEASURE IT LAZY FATASS. DO IT. JUST DO IT
#define Coxa 40 //To be verified....
#define Tibia 140
#define Femur 100


#define HANCHE1MAXPOS 135
#define HANCHE2MAXPOS 135
#define HANCHE3MAXPOS 135
#define HANCHE4MAXPOS 135

#define HANCHE1IDLEPOS 90
#define HANCHE2IDLEPOS 90
#define HANCHE3IDLEPOS 90
#define HANCHE4IDLEPOS 90

#define HANCHE1MINPOS 45
#define HANCHE2MINPOS 45
#define HANCHE3MINPOS 45
#define HANCHE4MINPOS 45


#define GENOUX1MAXPOS 170
#define GENOUX2MAXPOS 170
#define GENOUX3MAXPOS 170
#define GENOUX4MAXPOS 170

#define GENOUX1IDLEPOS 90
#define GENOUX2IDLEPOS 90
#define GENOUX3IDLEPOS 90
#define GENOUX4IDLEPOS 90

#define GENOUX1MINPOS 10
#define GENOUX2MINPOS 10
#define GENOUX3MINPOS 10
#define GENOUX4MINPOS 10


#define PATTE1MAXPOS 170
#define PATTE2MAXPOS 170
#define PATTE3MAXPOS 170
#define PATTE4MAXPOS 170

#define PATTE1IDLEPOS 90
#define PATTE2IDLEPOS 90
#define PATTE3IDLEPOS 90
#define PATTE4IDLEPOS 90

#define PATTE1MINPOS 10
#define PATTE2MINPOS 10
#define PATTE3MINPOS 10
#define PATTE4MINPOS 10


// variable to store the servo position 
int Hanche1Pos = 0;
int Hanche2Pos = 0;
int Hanche3Pos = 0;
int Hanche4Pos = 0;

int Genoux1Pos = 0;
int Genoux2Pos = 0;
int Genoux3Pos = 0;
int Genoux4Pos = 0;

int Patte1Pos = 0;
int Patte2Pos = 0;
int Patte3Pos = 0;
int Patte4Pos = 0;

int alpha;
int beta;
int gamma;


// create servo object to control a servo
Servo Hanche1SRV;
Servo Hanche2SRV;
Servo Hanche3SRV;
Servo Hanche4SRV;

Servo Genoux1SRV;
Servo Genoux2SRV;
Servo Genoux3SRV;
Servo Genoux4SRV;

Servo Patte1SRV;
Servo Patte2SRV;
Servo Patte3SRV;
Servo Patte4SRV;

void setup()
{
	Hanche1SRV.attach(2);
	Hanche2SRV.attach(3);
	Hanche3SRV.attach(4);
	Hanche4SRV.attach(5);

	Genoux1SRV.attach(6);
	Genoux2SRV.attach(7);
	Genoux3SRV.attach(8);
	Genoux4SRV.attach(9);

	Patte1SRV.attach(10);
	Patte2SRV.attach(11);
	Patte3SRV.attach(12);
	Patte4SRV.attach(13);

        Stand();
}

//YOUR CODE HERE
void loop()
{
  delay(3000);
}
//STOP HERE, YOUR CODE UP THERE
void Patte1MV(int pos)
{
	if (pos > Patte1Pos)
	{
		for (; Patte1Pos < pos; Patte1Pos += SPEED)
		{
			Patte1SRV.write(Patte1Pos);
			delay(DELAY);
		}
	}
	else
	{
		for (; Patte1Pos > pos; Patte1Pos -= SPEED)
		{
			Patte1SRV.write(Patte1Pos);
			delay(DELAY);
		}
	}
}

void Patte2MV(int pos)
{
	if (pos > Patte2Pos)
	{
		for (; Patte2Pos < pos; Patte2Pos += SPEED)
		{
			Patte2SRV.write(Patte2Pos);
			delay(DELAY);
		}
	}
	else
	{
		for (; Patte2Pos > pos; Patte2Pos -= SPEED)
		{
			Patte2SRV.write(Patte2Pos);
			delay(DELAY);
		}
	}
}

void Patte3MV(int pos)
{
	if (pos > Patte3Pos)
	{
		for (; Patte3Pos < pos; Patte3Pos += SPEED)
		{
			Patte3SRV.write(Patte3Pos);
			delay(DELAY);
		}
	}
	else
	{
		for (; Patte3Pos > pos; Patte3Pos -= SPEED)
		{
			Patte3SRV.write(Patte3Pos);
			delay(DELAY);
		}
	}
}

void Patte4MV(int pos)
{
	if (pos > Patte4Pos)
	{
		for (; Patte4Pos < pos; Patte4Pos += SPEED)
		{
			Patte4SRV.write(Patte4Pos);
			delay(DELAY);
		}
	}
	else
	{
		for (; Patte4Pos > pos; Patte4Pos -= SPEED)
		{
			Patte4SRV.write(Patte4Pos);
			delay(DELAY);
		}
	}
}

void Genoux1MV(int pos)
{
	if (pos > Genoux1Pos)
	{
		for (; Genoux1Pos < pos; Genoux1Pos += SPEED)
		{
			Genoux1SRV.write(Genoux1Pos);
			delay(DELAY);
		}
	}
	else
	{
		for (; Genoux1Pos > pos; Genoux1Pos -= SPEED)
		{
			Genoux1SRV.write(Genoux1Pos);
			delay(DELAY);
		}
	}
}

void Genoux2MV(int pos)
{
	if (pos > Genoux2Pos)
	{
		for (; Genoux2Pos < pos; Genoux2Pos += SPEED)
		{
			Genoux2SRV.write(Genoux2Pos);
			delay(DELAY);
		}
	}
	else
	{
		for (; Genoux2Pos > pos; Genoux2Pos -= SPEED)
		{
			Genoux2SRV.write(Genoux2Pos);
			delay(DELAY);
		}
	}
}

void Genoux3MV(int pos)
{
	if (pos > Genoux3Pos)
	{
		for (; Genoux3Pos < pos; Genoux3Pos += SPEED)
		{
			Genoux3SRV.write(Genoux3Pos);
			delay(DELAY);
		}
	}
	else
	{
		for (; Genoux3Pos > pos; Genoux3Pos -= SPEED)
		{
			Genoux3SRV.write(Genoux3Pos);
			delay(DELAY);
		}
	}
}

void Genoux4MV(int pos)
{
	if (pos > Genoux4Pos)
	{
		for (; Genoux4Pos < pos; Genoux4Pos += SPEED)
		{
			Genoux4SRV.write(Genoux4Pos);
			delay(DELAY);
		}
	}
	else
	{
		for (; Genoux4Pos > pos; Genoux4Pos -= SPEED)
		{
			Genoux4SRV.write(Genoux4Pos);
			delay(DELAY);
		}
	}
}

void Hanche1MV(int pos)
{
        pos = (180 - pos);
	if (pos > Hanche1Pos)
	{
		for (; Hanche1Pos < pos; Hanche1Pos += SPEED)
		{
			Hanche1SRV.write(Hanche1Pos);
			delay(DELAY);
		}
	}
	else
	{
		for (; Hanche1Pos > pos; Hanche1Pos -= SPEED)
		{
			Hanche1SRV.write(Hanche1Pos);
			delay(DELAY);
		}
	}
}

void Hanche2MV(int pos)
{
	if (pos > Hanche2Pos)
	{
		for (; Hanche2Pos < pos; Hanche2Pos += SPEED)
		{
			Hanche2SRV.write(Hanche2Pos);
			delay(DELAY);
		}
	}
	else
	{
		for (; Hanche2Pos > pos; Hanche2Pos -= SPEED)
		{
			Hanche2SRV.write(Hanche2Pos);
			delay(DELAY);
		}
	}
}

void Hanche3MV(int pos)
{
         pos = (180 - pos);
	if (pos > Hanche3Pos)
	{
		for (; Hanche3Pos < pos; Hanche3Pos += SPEED)
		{
			Hanche3SRV.write(Hanche3Pos);
			delay(DELAY);
		}
	}
	else
	{
		for (; Hanche3Pos > pos; Hanche3Pos -= SPEED)
		{
			Hanche3SRV.write(Hanche3Pos);
			delay(DELAY);
		}
	}
}

void Hanche4MV(int pos)
{
	if (pos > Hanche4Pos)
	{
		for (; Hanche4Pos < pos; Hanche4Pos += SPEED)
		{
			Hanche4SRV.write(Hanche4Pos);
			delay(DELAY);
		}
	}
	else
	{
		for (; Hanche4Pos > pos; Hanche4Pos -= SPEED)
		{
			Hanche4SRV.write(Hanche4Pos);
			delay(DELAY);
		}
	}
}

void Leg1MV()
{
	Genoux1MV(GENOUX1MAXPOS);
	Patte1MV(PATTE1MAXPOS);

	Hanche1MV(HANCHE1MAXPOS);

	Patte1MV(PATTE1IDLEPOS);
	Genoux1MV(GENOUX1IDLEPOS);

	Hanche1MV(HANCHE1IDLEPOS);
}

void Leg2MV()
{
	Genoux2MV(GENOUX2MAXPOS);
	Patte2MV(PATTE2MAXPOS);

	Hanche2MV(HANCHE2MAXPOS);

	Patte2MV(PATTE2IDLEPOS);
	Genoux2MV(GENOUX2IDLEPOS);

	Hanche2MV(HANCHE2IDLEPOS);
}

void Leg3MV()
{
	Genoux3MV(GENOUX3MAXPOS);
	Patte3MV(PATTE3MAXPOS);

	Hanche3MV(HANCHE3MAXPOS);

	Patte3MV(PATTE3IDLEPOS);
	Genoux3MV(GENOUX3IDLEPOS);

	Hanche3MV(HANCHE3IDLEPOS);
}

void Leg4MV()
{
	Genoux4MV(GENOUX4MAXPOS);
	Patte4MV(PATTE4MAXPOS);

	Hanche4MV(HANCHE4MAXPOS);

	Patte4MV(PATTE4IDLEPOS);
	Genoux4MV(GENOUX4IDLEPOS);

	Hanche4MV(HANCHE4IDLEPOS);
}

void Walk()
{
	Leg1MV();
	Leg3MV();
	Leg2MV();
	Leg4MV();
}

void Stand()
{
  Patte1MV(PATTE1IDLEPOS);
  Genoux1MV(GENOUX1IDLEPOS);
  Hanche1MV(HANCHE1IDLEPOS);
  Patte2MV(PATTE2IDLEPOS);
  Genoux2MV(GENOUX2IDLEPOS);
  Hanche2MV(HANCHE2IDLEPOS);
  Patte3MV(PATTE3IDLEPOS);
  Genoux3MV(GENOUX3IDLEPOS);
  Hanche3MV(HANCHE3IDLEPOS);
  Patte4MV(PATTE4IDLEPOS);
  Genoux4MV(GENOUX4IDLEPOS);
  Hanche4MV(HANCHE4IDLEPOS);
}

void TestWalk()
{
  MoveXY()
}

void MoveXY(int X,int Y)
{
  double alpha1;
  double alpha2;
  double DistanceCoxaToe;
  gamma = fabs(atan2(Y,X));
  DistanceCoxaToe = sqrt((sq(RobotChestFloorDistanceInmm)+(DistanceCentreRobotExtremitePatte-Coxa)));
  alpha1 = acos((RobotChestFloorDistanceInmm/DistanceCoxaToe));
  alpha2 = acos(((sq(Tibia)-sq(Femur)-sq(DistanceCentreRobotExtremitePatte))/(0-(2*Tibia*Femur))));
  alpha = fabs((alpha1+alpha2));
  beta = fabs(acos(((sq(DistanceCoxaToe)-sq(Tibia)-sq(Femur))/(0-(2*Tibia*Femur)))));
}
  
