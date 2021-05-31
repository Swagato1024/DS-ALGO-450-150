

#include<iostream>
int main()
{
	 int n ,i,j,count=0, elm , range, max_elm_index ;
	 int arr[50] ;

	std:: cin>>n ;

	 for(i=0;i<n;i++){
         std::cin>>arr[i] ;
	 }

      for(i=0;i<n; i++){

      	elm=arr[i] ; range= i+elm ; count++ ;

      	for(j=i ; j<=(i+elm) ;j++) {

      		if(j+arr[j] > range ) range= j+arr[j] , max_elm_index= j ;

      	}
      i= max_elm_index ;
      std::cout<<"jump at "<<i <<std::endl ;
      }

    std:: cout<<"number of jumps needed: "<< count ;
	 	
	 return 0;
}