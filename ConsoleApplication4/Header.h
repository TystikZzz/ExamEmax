enum Status   
{
	notBooked, booked, sold
};
struct Flat
{
	int id;
	int rooms;
	int s;
	int price;
	Status status;
};
