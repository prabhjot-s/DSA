/*
 * Recursion with returning a value not void recursion
 * */
package recursion;

public class recursionWithReturnValue {

	public static void main(String[] args) {
	//System.out.println(factorial(5));
	System.out.println(power(5, 4));

	}
	/*
	 * Factorial with recursion
	 * Expectation = n * faith
	 *     |         |     |
	 * Factorial(n)= n * Factorial(n-1)
	 * */
	public static int factorial(int n)
	{
		if(n==0)
		{
			return 1;
		}
		int fnm1 = factorial(n-1);
		int fnm = n * fnm1;
		return fnm;
	}
	/*
	 * Calculating Power with recursison
	 * Expectation = n * faith
	 * */
    public static int power(int n, int k)
    {
    	if(k==0)
    	{
    		return 1; // since any number to the power of 0 is 1
    	}
    	int xpnm1 = power(n,k-1);
    	int xpn = n * xpnm1;
    	return xpn;
    }
}
