/*
 * Understanding the motion of recursion
 * */
package recursion;

public class tohMotion {

	public static void main(String[] args) {
		toh("A","B","C",3);

	}
	public static int counter=0;
	public static void toh(String src,String dest,String help,int n)
	{
		if(n==0)
		{
			return;
		}
		counter++;
		System.out.println(counter + ". PL "+ src + dest + help + n);
		toh(src,help,dest,n-1);
		counter++;
		System.out.println(counter + ". PL "+ src + dest + help + n);
		toh(help,dest,src,n-1);
		counter++;
		System.out.println(counter + ". PL "+ src + dest + help + n);
		
	}
}
/*
 * OUTPUT
 * 1. PL ABC3
2. PL ACB2
3. PL ABC1
4. PL ABC1
5. PL ABC1
6. PL ACB2
7. PL BCA1
8. PL BCA1
9. PL BCA1
10. PL ACB2
11. PL ABC3
12. PL CBA2
13. PL CAB1
14. PL CAB1
15. PL CAB1
16. PL CBA2
17. PL ABC1
18. PL ABC1
19. PL ABC1
20. PL CBA2
21. PL ABC3
*/
 */