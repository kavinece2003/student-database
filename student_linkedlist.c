//student record
#include"declaration.h"
int main(){
	ST *hptr=0;
	char ch;
	int n;//sort
        int m;//modify
	do{
        label:
        		
	block();
	printf("Enter your choice ");
	scanf(" %c",&ch);
	switch(ch){

	case 'a' : case 'A' :
	    do{	
	    add_end(&hptr);
	    printf("do you want to add another node say y/n ");
            scanf(" %c",&ch);
	    }while(ch== 'y');
	    if(ch == 'n')
		    continue;
	  //  break;
	    
	case 'd' : case 'D' :
	    do{	
		    int n;
		    printf("which role number you want to delete ");
		    scanf("%d",&n);
	    Delete(&hptr,n);
	    my_printf(hptr);
	    printf("do you want to delete another node say y/n ");
            scanf(" %c",&ch);
	    }while(ch== 'y');
	    if(ch == 'n')
		    continue;
	  //  break;
	    
	case 'p' : case 'P' :
	    my_printf(hptr);
		goto label;
	  //  break;
	    
	case 'm' : case 'M' :
            my_printf(hptr);		
            printf("Enter which one field want to modify \n");
	    printf(" 1.roll \n 2.name \n 3.mark\n");
	    scanf("%d",&m);
	    modify(&hptr,m);

	case 's' : case 'S' :
	    save(hptr);
	    goto label;

	case 'e' : case 'E' :
	    printf("successfully existed ");
	    return 0;

        case 'l' : case 'L' :
	    printf("Sort :\nbased on name -> means enter 1    based on mark -> means enter 2     based on roll -> means enter 3\n");
	    scanf("%d",&n);
            sort(&hptr,n);
	    goto label;
	
	case 'x' : case 'X' :
	     Deleteall(&hptr);
	     goto label;

	case 'r' : case 'R' :
	    reverse(&hptr);
	    goto label;    

	default : 
	   printf("invalid");
           return 0;	
      }   
	}while((ch == 'a')||(ch =='A') ||(ch == 'p') ||(ch=='P') ||(ch=='n'));       
	
}

    
void block(void){
	printf("+--------+--------------------+\n");
	printf("|OPTIONS |         MENU       |\n");
        printf("|(a/A)   |Add a new record    |\n");        	
        printf("|(d/D)   |Delete a record     |\n");	
        printf("|(p/P)   |print a  record     |\n");
        printf("|(m/M)   |modify a  record    |\n");
        printf("|(s/S)   |save a  record      |\n");
        printf("|(e/E)   |Exit                |\n");
        printf("|(l/L)   |sort the list       |\n");
        printf("|(x/X)   |Delete all record   |\n");
        printf("|(r/R)   |Reverse the list    |\n");
	printf("+-----------------------------+\n");
        
}




























