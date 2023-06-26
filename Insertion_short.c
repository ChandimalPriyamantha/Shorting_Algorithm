void main(){
	
	int arr[20],i,n,j,k;
	
	printf("\nEnter the number of elements in the array:");
	scanf("%d",&n);
	
	printf("\nEnter the elements of the array");
	
	for(i=0; i<n; i++){
		
		printf("\n arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	
	int temp;
	for(k=1; k<n; k++){
		temp=arr[k];
		j=k-1;
		
		while((temp<arr[j]) && (j>=0)){
			arr[j+1] = arr[j];
		}
		arr[j+1] = temp;
	}
	printf("\nThe sorted array is: \n");
	for(i=0;i<n; i++){
		printf("%d\t",arr[i]);
	}
}


