import java.io.*;

class Vehicle 
{
	private String color;
	    private String type;
	  private double price;
	
	 Vehicle(String c,String t,double p)
	 {
		 this.color = c;
		 this.type = t;
		 this.price = p;
	 }
	 String getColor()
	 {
		 return color;
         }
	 String getType()
	 {
		 return type;
         }
	 double getPrice()
	 {
		 return price;
         }
	 void setPrice(double price)
	 {
		 this.price = price;
	 }
	 void display()
	 {
		 System.out.println("Vehicle color "+color);
		 System.out.println("Vehicle type "+type);
		 System.out.println("Vehicle price "+price);
         }
}

class Car extends Vehicle
{
	String model;
	 Car(String c,String t,double p,String m)
	 {
            super(c,t,p);
	    this.model = m;
	 }
	 void display()
	 {
		 setPrice(950000);
		 System.out.println("Vehicle color "+getColor());
		 System.out.println("Vehicle type "+getType());
		 System.out.println("Vehicle price "+getPrice());
		 System.out.println("Vehicle model "+model);
         }
}

class InheritanceEg
{
	public static void main(String args[])
	{
	 Vehicle v = new Car("red","four wheeler",900000,"Swift Desire");
	 v.display();
	}
}


