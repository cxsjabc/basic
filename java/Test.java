public class Test{
	public static void main(String args[])
	{
		// int a;
		int max = Integer.MAX_VALUE;
		int min = Integer.MIN_VALUE;

		// a += 1; // CE: a is not initialized

		System.out.println(max + ", " + min);
		System.out.println(Math.abs(-2147483648));
	}
}
