#include <iostream>
using namespace std;

// assignment operator
// is used when you ar e changing / replacing the values of an already existing object based on another object

// copy constructor
// is used when you are creating a completely new object based on another object

class Movie {
public:
	string Name;
	string Genre;
	float Rating;

	Movie(string name, string genre, float rating) {
		Name = name;
		Genre = genre;
		Rating = rating;
	}
	Movie()
	{
		Name = "";
		Genre = "";
		Rating = 0;
	}
	Movie(const Movie& original) {
		Name = original.Name;
		Genre = original.Genre;
		Rating = original.Rating;
	}
	Movie& operator=(const Movie& original) {
			Name = original.Name;
			Genre = original.Genre;
			Rating = original.Rating;
			
			return *this;
	}
};

int main()
{
	Movie movie1("The Dark Knight", "Action", 9.5);
	Movie movie2("The Lion King", "Animated", 8);

	Movie movie3;
	Movie movie4(movie1);
	movie4 = movie2;
	//movie4.operator=(movie2); 

	Movie movie5 = movie1;
	movie5 = movie2;

	cin.get();
}