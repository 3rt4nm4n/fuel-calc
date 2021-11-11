#include <iostream>
using namespace std;
class Car
{
	private:
		string brand;
		int year;
		string model;
		float fuelperhundredkm;
	public:
		Car(string b, int y, string m, float fphk)
		{
			brand=b;
			year=y;
			model=m;
			fuelperhundredkm=fphk;
		}
		float fuelperkm()
		{
			return fuelperhundredkm/100;
		}
 		string getBrand()
		{
			return brand;
		}
		int getYear()
		{
			return year;
		}
		string getModel()
		{
			return model;
		}
		float getFuelperhundredkm()
		{
			return fuelperhundredkm;
		}
		float spending(float km)
		{
			return (fuelperhundredkm/100)*km;
		}
		float calcPrice(float p, float km)
		{
		    return (fuelperhundredkm/100)*km*p;
		}
		void getReport()
		{
			cout<<brand<<" "<<year<<" model "<<model<<" spends "<<fuelperhundredkm<<" Liters of fuel per 100km."<<endl<<"It spends "<<fuelperhundredkm/100<<" per 1km.";
		}

};

int main()
{
	int km,year;
	float price,fphk;
	string carbrand, carmodel;
	cout<<"Welcome to Car Fuel Consumption Calculator"<<endl;
	cout<<"Enter the brand of the car: ";
	cin>>carbrand;
	cout<<"Enter the year the car was bought in: ";
	cin>>year;
	cout<<"Enter the model of the car: ";
	cin>>carmodel;
	cout<<"Enter the amount of fuel spent per hundred km: ";
	cin>>fphk;
	Car qash(carbrand,year,carmodel,fphk);;
	cout<<"Enter the km to calculate the fuel spent: ";
	cin>>km;
	cout<<endl;
	cout<<"Enter the price of the fuel (TRY): ";
	cin>>price;
	qash.getReport();
	cout<<endl;
	cout<<endl;
	cout<<"Car consumes "<<qash.spending(km)<<" litres of fuel when it travels "<<km<<" km based on its object data."<<endl<<"And it will cost "<<qash.calcPrice(km,price)<<" Turkish Liras"<<endl;

	return 0;
}
