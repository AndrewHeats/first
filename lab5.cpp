#include <iostream>
#include <string>
#include <cstring>
using namespace std;
void swap (int *xp,int *yp){
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}


class Guest {
	private:
		int id;
		int age;
		string name;
		string city;
		string phoneNumber;
	public:
		enum Gender {
			FEMALE,
			MALE,
			NONBINARY
		};
		void bubbleSort(Guest arr[], int n){
	int i,j;
	for (i=0; i<n-1; i++)
		for (j=0; j<n-1-i; j++)
			if (arr[j]>arr[j+1])
				swap(&arr[j], &arr[j+1]);}
		Guest(int id, int age, string name, string city, string phoneNumber){
			setId (id);
			setAge (age);
			setName (name);
			setCity (city);
			setPhoneNumber (phoneNumber);
		};
		void getGender(string gender){
			if (gender == "female"){
				Gender :: FEMALE;
			}
			if (gender == "male"){
				Gender :: MALE;
			}
			if (gender == "nonbinary"){
				Gender :: NONBINARY;
			}
			
		}
		int getId (){
			return id;
		}
		int setId (int id){
			this->id=id;
		}
		int getAge (){
			return age;
		}
		int setAge (int age){
			this->age=age;
		}
		string getName (){
			return name;
		}
		string setName (string name){
			this->name=name;
		}
		string getCity (){
			return city;
		}
		string setCity (string city){
			this->city=city;
		}
		string getPhoneNumber (){
			return phoneNumber;
		}
		string setPhoneNumber (string phoneNumber){
			this->phoneNumber=phoneNumber;
		}
		
		bool isLuckyPhoneNumber(){
			int count = 0;
			string s = phoneNumber;
			int n= s.length();
			char char_array[n+1];
			strcpy(char_array, s.c_str());
			
			for (int i=0;i<10;i++)
			{
				if (char_array[i]=='7'){
					count++;
				}
			}
			if (count >= 3){
				cout << "true" << endl;
				return true;
				}
			else{
				cout << "false" << endl;
				return false;
			}
				
		}
			
};
class Party{
	public:
		enum Gender {
			FEMALE,
			MALE,
			NONBINARY
		};
		int day;
		string reason;
		int findAverageAge( Guest* guest ,Gender gender){
			if (gender == FEMALE){
			int age = guest.getAge();
			int ag=ag+age;
			int num=0;
			num+=1;
			int res=ag/num;
			cout << res << endl;
			}
			if (gender == MALE){
			int age = guest.getAge();
			int ag=ag+age;
			int num=0;
			num+=1;
			int res=ag/num;
			cout << res << endl;
			}
			if (gender == NONBINARY){
			int age = guest.getAge();
			int ag=+age;
			int num=0;
			num+=1;
			int res=ag/num;
			cout << res << endl;
			}
		return 0;
		}
	
		};

	

int main (){
	Guest Amelia(1205, 31, "Amelia", "Madrid", "0985735777"/*, enum Gender :: FEMALE*/);
	Guest Frank(1200, 45, "Frank", "Tokyo", "0632569874"/*,"male"*/);
	Guest arr[3];
	arr[0] = Amelia;
	arr[1] = Frank;
	arr[2] = Julia;
	bubbleSort(arr, 3);
	Guest Julia{1199, 26, "Julia", "Lviv", "0677721842"/*, "nonbinary"*/};

	Amelia.isLuckyPhoneNumber();
	Frank.isLuckyPhoneNumber();
	Julia.isLuckyPhoneNumber();
	

	return 0;
}