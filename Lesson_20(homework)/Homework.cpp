#include <iostream>

using namespace std;

template <typename T>
class Complex
{
private:
	T number;
public:
	Complex(T number = 0) : number(number) {}

	Complex(const Complex& other)
	{
		number = other.number;
	}

	void Show()
	{
		cout << "Your number = " << number << endl;
	}

	void Add_Number(T number)
	{
		this->number = number;
	}

	T operator + (Complex obj)
	{
		return this->number + obj.number;
	}

	T operator - (Complex obj)
	{
		return this->number - obj.number;
	}

	T operator * (Complex obj)
	{
		return this->number * obj.number;
	}

	double operator / (Complex obj)
	{
		if (obj.number == 0)
		{
			exit(-1);
		}
		return this->number / 1.0 / obj.number;
	}
};

int main()
{
	Complex<int> number_1;
	number_1.Add_Number(10);
	number_1.Show();
	Complex<int> number_2;
	number_2.Add_Number(20);
	number_2.Show();

	Complex<double> number_3 = number_1 / number_2;
	number_3.Show();

	return 0;
}