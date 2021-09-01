class Bug
{
	private:
	int x;
	
	public:
	Bug();
	Bug(int x);
	~Bug();
	
	int getPosition();
	
	void setPosition(int x);
	void turn();
	void move();
	
};

Bug::Bug()
{
	this->x = 0;
}

Bug::Bug(int x)
{
	this->x = x;
}

Bug::~Bug()
{
	
}

int Bug::getPosition()
{
	return this-> x;
}

void Bug::setPosition(int x)
{
	this->x = x;
}

void Bug::turn()
{
	this->x = -x;	
}

void Bug::move()
{
	if (this->x < 0)
		this->x--;
	else
		this->x++;
}
