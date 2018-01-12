enum{X_AXIS, Y_AXIS, Z_AXIS};

struct point{
	float x;
	float y;
	float z;
};

struct face{
	int vtx[3];
};

struct model{
	point	*obj_points;
	face	*obj_faces;
	int		vertices;
	int		faces;
};

void Render();

void Resize(int w, int h);

void Setup();

void Idle();

void modelPlanet(int i);

void Keyboard(unsigned char key, int x, int y);

void KeyboardSpecial(int key, int x, int y);

void ReadFile(model*);

void createStars();