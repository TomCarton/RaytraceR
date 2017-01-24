// color.h

typedef struct
{
	int r, g, b;
} Color;


Color ColorAdd(Color a, Color b);

void ColorClamp(Color *a);
