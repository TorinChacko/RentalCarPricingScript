# RentalCarPricingScript
Class project used to calculate different prices of a car depending on the month, type (luxury or non-luxury) as well as the number of days it is rented.

Below is test data used for this script.



    

	Odometer at start: 160
	Odometer at end: 180
	Rental days: 12
	Customer name: Nate Gibbs
	Luxury car? (y/n): y
	Starting month (1=Jan, 2=Feb, etc.): 2
 
In this case I was checking to make sure that the entirety of the name was captured and stored in the name variable and outputed correctly.

	Odometer at start: 160
	Odometer at end: 180
	Rental days: 12
	Customer name:(pressed enter)
 
In this case I was checking to make sure the program could identify if the name string was empty and output the appropriate response.

	Odometer at start: 160
	Odometer at end: 180
	Rental days: 12
	Customer name: Nate Gibbs
	Luxury car? (y/n): z
 
In this case I was testing to make sure the condition would trigger if luxCar was not equal to y or n.

	Odometer at start: 160
	Odometer at end: 180
	Rental days: 12
	Customer name: Nate Gibbs
	Luxury car? (y/n): y
	Starting month (1=Jan, 2=Feb, etc.): 0
 
In this test case I was checking if the lower bound would trigger an error.

	Odometer at start: 160
	Odometer at end: 180
	Rental days: 12
	Customer name: Nate Gibbs
	Luxury car? (y/n): y
	Starting month (1=Jan, 2=Feb, etc.): 13
 
In this test case I was checking if the high bound on starting month would trigger an error.

	Odometer at start: 160
	Odometer at end: 780
	Rental days: 12
	Customer name: Nate Gibbs
	Luxury car? (y/n): y
	Starting month (1=Jan, 2=Feb, etc.): 12
 
In this test case I was checking to compare the values of winter months with non-winter months

	Odometer at start: 160
	Odometer at end: 780
	Rental days: 12
	Customer name: Nate Gibbs
	Luxury car? (y/n): y
	Starting month (1=Jan, 2=Feb, etc.): 7
 
See above reasoning.
