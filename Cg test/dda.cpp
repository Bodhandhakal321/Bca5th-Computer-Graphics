

// calculate dx , dy

dx = X1 � X0;
dy = Y1 � Y0;

// Depending upon absolute value of dx & dy
// choose number of steps to put pixel as

// steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy)
steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

// calculate increment in x & y for each steps

Xinc = dx / (float) steps;
Yinc = dy / (float) steps;

// Put pixel for each step

X = X0;
Y = Y0;

for (int i = 0; i <= steps; i++)
{
    putpixel (round(X),round(Y),WHITE);
    X += Xinc;
    Y += Yinc;
}
