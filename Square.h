//Class decleration file
class square //Creates the class square 
{
public: //Public members of square
	void setSide(float); 
	void showData(float);
	float calcPerimeter(float);
	float calcArea(float);
	float getSide(float) const;
	square();
private: //Private members of square
	float side;
};

