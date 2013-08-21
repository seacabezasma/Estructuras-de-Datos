package pyramde;

import java.util.Scanner;

public class pyramide {
	public static void main(String[] args) {
		
	    int n,k;
	    int m=1;
		System.out.println("Por favor digite el número de filas para el triangulo");
	    Scanner x=new Scanner(System.in);
	    n=x.nextInt();
	   
	    k=n-1;
	    for(int i=1;i<=n;i++){
	    	
	    	for(int w=k;w>=0;w--){
	    		System.out.print(" ");
	    	}
	    	for(int z=1;z<=m;z++){
	    		
	    		if(z%2==0){
	    		System.out.print(" ");}
	    		else{
	    			System.out.print("*");
	    		}
	    		}
	    	k=k-1;
	    	m=m+2;
	    	System.out.println("\n");
	    	
	    	}
	    	

	    
	    	
	    }
	    		
	}


