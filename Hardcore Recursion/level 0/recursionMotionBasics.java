/* Recursion is all about suspension of disbelief
 * We must suspend our disbelief and believe in our faith very strongly
 * and reach our expectation from our belief */
package recursion;

public class recursionMotionBasics {

	public static void main(String[] args) {
		//printDecreasing(5);
		//printIncreasing(5);
		printIncreasingDecreasing(5);

	}
	/*Print Decreasing
	 *Expectation = print(n) + Faith
	 *Notice we are first printing and then relying on our faith
	 *Do your part and rest the faith will do
	 **/
	public static void printDecreasing(int n)
	{
		if(n==0)
		{
			return;
		}
		System.out.println(n);
		printDecreasing(n-1);
	}
	/*Print Increasing
	 * Expectation = Faith + print(n)
	 * Notice now we are first relying on faith and then printing
	 * First we will rise up the stack frame and we will print while falling down
	 * */
	public static void printIncreasing(int n)
	{
		if(n==0)
		{
			return;
		}
		printIncreasing(n-1);
		System.out.println(n);
	}
	/*
	 * Print increasing decreasing
	 * Expectation = print(n) + Faith + print(n)
	 *                  |         |        |
	 * Example:         3      2 1 1 2     3
	 * */
	public static void printIncreasingDecreasing(int n)
	{
		if(n==0)
		{
			return;
		}
		System.out.println(n);
		printIncreasingDecreasing(n-1);
		System.out.println(n);
	}
}
