/* Tower of hanoi will test both our faith and expectation
 * Problem Statement:
 * Print instructions to move n disks from source to destination
 * using helper following R1 and R2
 * Rules of Tower of hanoi
 * R1: One move at a time
 * R2: smaller disk over bigger disk
 * 
 * Expectation = faith 1 + move instructions + faith 2
 *     |            |               |             |
 * toh(s,d,h,n)= toh(s,h,d,n-1)+ instructions+ toh(h,d,s,n-1)
 * */
package recursion;

public class towerOfHanoi {

	public static void main(String[] args) {
		toh("A","B","C",3);

	}
	/*
	 * Expectation = faith 1 + move instructions + faith 2
	 * */
	public static void toh(String src,String dest,String help,int n){
		if(n==0)
		{
			return;
		}
		//Faith 1 move n-1 disks from src to help using dest
		toh(src,help,dest,n-1);
		System.out.println("Move "+ n + "th disk from "+ src +" to "+dest);
		toh(help,dest,src,n-1);
	}

}
/*
 * OUTPUT
 * 
Move 1th disk from A to B \
Move 2th disk from A to C  -> these 3 lines because of faith 1
Move 1th disk from B to C /
Move 3th disk from A to B --> Our job
Move 1th disk from C to A \
Move 2th disk from C to B  -> these 3 lines because of faith 2
Move 1th disk from A to B /
 * */
