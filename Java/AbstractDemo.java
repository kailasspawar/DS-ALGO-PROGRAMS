import java.util.*;

abstract class Shape
{
	String color;
	Shape(String color)
	{
		this.color = color;
	}
	public String getColor()
	{
		return this.color;
	}
	abstract double area();
	public abstract String toString();
}
class Rectangle extends Shape
{
	int w , l;
	Rectangle(String color,int w,int l)
	{
		super(color);
		this.w = w;
		this.l = l;
	}
        double area()
	{
          return l * w;
	}
       public String toString()
       {
	       return ("Area is "+area()+" color is "+color);
       }
}

class AbstractDemo
{
    public static void main(String args[])
    {
       Shape s = new Rectangle("green",10,20);
       System.out.println(s);
     }
}    
