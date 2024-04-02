#include <bits/stdc++.h>
using namespace std;
#define max 20
#include<graphics.h>
#include<conio.h>

class sorting{
	
	public:
		void array(int n)
		{
			int i;
			
			setlinestyle(0, 0, 3);
			setcolor(YELLOW);
			setbkcolor(5);
		    setfillstyle(SOLID_FILL,5);
		    floodfill(150,300,6);
		    setcolor(LIGHTCYAN);
			settextstyle(4,HORIZ_DIR,50);
			//settextstyle(BOLD_FONT,HORIZ_DIR,50);
			outtextxy(460,0,"Algorithm Visualiser");
			setcolor(YELLOW);
		    
			line(450, 50, 1100, 50);
			line(100, 250, 100, 350);
			for (i = 0; i < n; i++)
			{
				line(100 + (100 * i), 250, 200 + (100 * i), 250);
				line(100 + (100 * i), 350, 200 + (100 * i), 350);
				line(200 + (100 * i), 250, 200 + (100 * i), 350);
			}
			
		}
		
		void printArray(int arr[], int size)
		{
		    int i;
		    char a[5];
			settextstyle(6,HORIZ_DIR,15);
		    for (i = 0; i < size; i++)
		        {
				cout <<" "<< arr[i];
				setbkcolor(5);
		        setfillstyle(SOLID_FILL,5);
		        
				
			
				sprintf(a,"%d",arr[i]);
				outtextxy(130+(100*i),290,a);}
			   
		}
		
		void printele(int arr[], int j)
		{
			setcolor(15);
			char a[5];
			settextstyle(3,HORIZ_DIR,15);
			sprintf(a,"%d",arr[j]);
			outtextxy(130+(100*j),290,a);
			sprintf(a,"%d",arr[j+1]);
			outtextxy(130+(100*(j+1)),290,a);
			
		}
		void bubbleSort(int arr[], int n)
		{
		   int i, j;
		   char a[5];
		   bool swapped;
		   for (i = 0; i < n-1; i++)
		   {
		   	
			
			    swapped = false;
			    sprintf(a,"Pass %d",i+1);
				outtextxy(120,450,a);
			    for (j = 0; j < n-i-1; j++)
			    {
			        if (arr[j] > arr[j+1])
			        {
			           
			           swap(arr[j], arr[j+1]);
			           swapped = true;
			           setcolor(YELLOW);
			           delay(2000);
			           setcolor(15);
			     	   printele(arr,j);
			     	  
			     	   delay(2000);
			     	   rectangle(110,260,200,340);
			           floodfill(110,260,6);
			     	   setcolor(14);
			     	   printArray(arr,n);
			     	   
			        }
			        
			    }
			  
			    
			
		    // IF no two elements were swapped
		    // by inner loop, then break
		    if (swapped == false)
		        break;
			}
	   
	   		array(n);
		}
		void swap1(int *xp, int *yp)
		{
		    int temp = *xp;
		    *xp = *yp;
		    *yp = temp;
		}
		
		void selectionSort(int arr[], int n)
		{
		    int i, j, min_idx;
		 
		    // One by one move boundary of
		    // unsorted subarray
		    for (i = 0; i < n-1; i++)
		    {
		       
		        // Find the minimum element in
		        // unsorted array
		        min_idx = i;
		        for (j = i+1; j < n; j++)
		        	if (arr[j] < arr[min_idx])
		            min_idx = j;
		 
		        // Swap the found minimum element
		        // with the first element
		        if(min_idx!=i)
		        	
		            swap1(&arr[min_idx], &arr[i]);
		            swap(arr[j], arr[j+1]);
		           
		           setcolor(YELLOW);
		           delay(2000);
		           setcolor(15);
		     	   printele(arr,min_idx);
		     	  
		     	   delay(4000);
		     	   rectangle(110,260,200,340);
		           floodfill(110,260,6);
		     	   setcolor(14);
		     	   printArray(arr,n);
		            
		    }
		}
		
		
		void insertionSort(int arr[], int n)
		{
		    int i, key, j;
		    for (i = 1; i < n; i++)
		    {
		    	
		        key = arr[i];
		          j = i - 1;
		       setcolor(15);
		     	printele(arr,key);
		       
		        delay(2000);
		     	rectangle(110,260,200,340);
		        floodfill(110,260,6);
		     	setcolor(14);
		     	printArray(arr,n);
		      
		 		
		        // Move elements of arr[0..i-1], 
		        // that are greater than key, to one
		        // position ahead of their
		        // current position
		        
		        while (j >= 0 && arr[j] > key)
		        {
		            arr[j + 1] = arr[j];
		            j = j - 1;    
		        }
		        
		        arr[j + 1] = key;
		        delay(4000);
		        rectangle(110,260,200,340);
		        floodfill(110,260,6);
		     	setcolor(14);
		     	
		        printArray(arr,n);
		    }
		    setcolor(YELLOW);
		    
			line(100, 250, 100, 350);
			for (i = 0; i < n; i++)
			{
				line(100 + (100 * i), 250, 200 + (100 * i), 250);
				line(100 + (100 * i), 350, 200 + (100 * i), 350);
				line(200 + (100 * i), 250, 200 + (100 * i), 350);
			} 
		}
		
};


int main()
{
	sorting S;
	system("cls");
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "");
	DWORD screenWidth = GetSystemMetrics(SM_CXSCREEN);
	DWORD screenHeight = GetSystemMetrics(SM_CYSCREEN);
	initwindow(screenWidth, screenHeight, "", -3, -3);
	
    int arr[max],i,n;
    cout<<("enter the size of array");
    cin>>n;
    cout<<("enter the elements of array\n");
    for(i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	S.array(n);
	
	int ch;
	cout<<"Choose the type of sorting";
	do{
		cout<<"\n1.Bubble sort \n2.Insertion sort \n3.Selection sort \n";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				setcolor(14);
				settextstyle(3,HORIZ_DIR,27);
				outtextxy(70,150,"BUbble sort");
				S.printArray(arr, n);
				S.bubbleSort(arr, n);
			    cout <<"Sorted array: \n";
			    settextstyle(3,HORIZ_DIR,27);
			    outtextxy(70,150,"BUbble sort");
			    S.printArray(arr, n);
				break;
				
			case 2:
				setcolor(14);
				settextstyle(3,HORIZ_DIR,27);
				outtextxy(70,150,"Insertion sort");
				S.printArray(arr, n);
				S.insertionSort(arr, n);
			    cout <<"Sorted array: \n";
			    S.printArray(arr, n);
			    outtextxy(70,150,"Insertion sort");
			    //array(n);
				break;
				
			case 3:
				setcolor(14)	;
				settextstyle(3,HORIZ_DIR,27);
				outtextxy(70,150,"Selection sort");
				S.printArray(arr, n);
				S.selectionSort(arr, n);
			    cout <<"Sorted array: \n";
			    S.printArray(arr, n);	
				S.array(n);
				settextstyle(3,HORIZ_DIR,27);
				outtextxy(70,150,"Selection sort");	
				S.printArray(arr,n);
		}
	}while(ch==8);
	getch();
}
