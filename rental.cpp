#include <iostream>
#include <string>
using namespace std;

int main(){
//declaring vars.
    int odoStart;
    int odoEnd;
    int RentalDays;
    string name;
    string luxCar;
    int monthNum;
    double sum;

//placeholder for later(scope reasons)
    double daySum=0;
    double monthPay=0;
//user input
    cout<<"Odometer at start: ";
    cin>>odoStart;
    if (odoStart<0){
        cout<<"---"<<endl;
        cout<<"The starting odometer reading must not be negative.";
        return 0;
    }

    cout<<"Odometer at end: ";
    cin>>odoEnd;
    if(odoStart>odoEnd){
        cout<<"---"<<endl;
        cout<<"The ending odometer reading must be at least as large as the starting reading.";
        return 0;
    }
    double miles=odoEnd-odoStart;

    cout<<"Rental days: ";
    cin>>RentalDays;
    if (RentalDays<=0){
        cout<<"---"<<endl;
        cout<<"The number of rental days must be positive.";
        return 0;
    }
    cout<<"Customer name: ";
    //ignoring newline character from above input
    cin.ignore();
    getline(cin, name);

    //checking if the first element of the string is not a character
    if (name==""){
            cout<<"---"<<endl;
            cout<<"You must enter a customer name.";
            return 0;
    } 

    cout<<"Luxury car? (y/n): ";
    cin>>luxCar;
    if (luxCar!="n" && luxCar!="y"){
        cout<<"---"<<endl;
        cout<<"You must enter y or n.";
        return 0;
    }

    cout<<"Starting month: (1=Jan, 2=Feb, etc.): ";
    cin>>monthNum;
    if (monthNum>12 || monthNum<1)
    {
        cout<<"---"<<endl;
        cout<<"The month number must be in the range 1 through 12.";
        return 0;
    }

//finding cost based on days of which vehicle
    if(luxCar=="y"){
        daySum=RentalDays*75;
    }else if(luxCar=="n"){
        daySum=RentalDays*45;
    }
//finding cost based on mileage
    double mileSum=0;
    if(miles<=100){
        mileSum=0.33*miles;
    }
    else if((100<miles && miles<=600) && (monthNum<=3 || monthNum==12)){
        mileSum=0.33*miles;
    }
    else if((miles>100 && miles<=600) && !(monthNum<=3 || monthNum==12)){
        mileSum=0.33*100+0.27*(miles-100);

    }
    else if (miles>600){
        if (monthNum<=3 || monthNum==12){
            monthPay=0.33;
        }
        else if(!((1<=monthNum && monthNum<=3) || monthNum==12)){
            monthPay=0.27;
        }
    mileSum=0.33*100+monthPay*500+(miles-600)*0.21;
    }
    

    sum=mileSum+daySum;


//setprecision
    cout.setf(ios::fixed);
    cout.precision(2);
//print end statement
    cout<<"---"<<endl;
    cout<<"The rental charge for "+name+" is $"<<sum<<endl;

}
