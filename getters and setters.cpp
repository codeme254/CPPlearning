#include <iostream>
using namespace std;
class Movie{
	private:
		string rating;
    public:
    	string name, director;
    	Movie(string aName, string aDirector, string aRating){
			name = aName;
			director = aDirector;
			setRating(aRating);
		}
		void setRating(string aRating){
			if (rating == "PG" || rating == "GE" || rating == "NR"){
				rating = aRating;
			}else{
				rating = "GE";
			}
		}
		string getRating(){
			return rating;
		}
};
int main(){
	Movie kate("Kate", "kevin shamia", "sdfsdfsd");
	cout<<kate.getRating()<<endl;//returns GE  since that is the default incase someone passed in rubbish
	return 0;
}