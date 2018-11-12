class Minimum
{
	int a,b;
        void swap(Minimum x,Minimum y)
	{
		int z = x.a;
		x.a = y.b;
		y.b = z;
	}

        int mini(int x,int y,int z)
	{
		int min = 999;

		if(x > y)
			min = y;

		return min > z ? z : min;
        }

	public static void main(String args[])
	{
            Minimum m = new Minimum();
	    m.a = 23;m.b = 65;
	    int x = 10,y = 30,z = 5;
	    System.out.println(m.mini(x,y,z));
	    m.swap(m,m);
	    System.out.println("a = "+m.a+" b = "+m.b);
	}
}

