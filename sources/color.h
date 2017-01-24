// color.h

typedef struct
{
	int r, g, b;
} Color;

Color ColorSet(int r, int g, int b);

Color ColorAdd(Color a, Color b);
Color ColorMul(Color c, float m);

Color ColorClamp(Color c);
