#include <stdio.h>                                                                                                                    
                                                                                                                                      
/**                                                                                                                                   
*main - Entry point                                                                                                                   
*                                                                                                                                     
*
* Return: Always success                                                                                                              
*/                                                                                                                                    
                                                                                                                                      
int main(void)
{                                                        
  int i, k, l = 0;

  for (i = 0; i < 10; i++)  
    {
      for (k = i; k < 10; k++)          
	{
	  for(l = k; l < 10; l++)
	    {
	      if (i != k &&  i != l && l != k)
		{
		  putchar(i + '0');
		  putchar(k + '0');
		  putchar(l + '0');                               
		  if (i == 7 && k == 8 && l != 9)                            
		    {
		    }
		  else                      
		    {                    
		      putchar(','); 
		      putchar(32);  
		    }
		}
	    }  
	}
    }
  putchar('\n');       
  return (0);
}
