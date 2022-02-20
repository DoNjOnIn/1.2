#pragma once
class Fraction
{
private:
	int up, down;

public:
	int get_up() const { return up; };
	int get_down() const { return down; };
	void set_up(unsigned int value);
	void set_down(unsigned int value);
	void count();
	void abb();
	bool init(int x, int y);

	void display() const;
	void read();

};

