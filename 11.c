#include <stdlib.h> 
#include <stdio.h> 
void swap(int *tmparray1,int *tmparray2);
void swap_2(const int* tmparray1,const int* tmparray2);
int main(){
	//獶盽计戈獶盽计夹
	int array[] = {2,3,1,4,6,7,5} ;
	int size = 7;
	int pass =0;
	int j = 0;
	
	for(pass =0;pass<size-1;pass++){
		for(j=pass; j<size-1; j++){
			if(array[pass]>array[j]){
				swap(&array[pass],&array[j]);
			}
		}
	}
	for(pass =0;pass<size-1;pass++){
		printf("%d ",array[pass]);
	}
	printf("\n");
	
	//獶盽计戈盽计夹
	int *const  array_1[] = {2,3,1,4,6,7,5};
	for(pass =0;pass<size-1;pass++){
		for(j=pass; j<size-1; j++){
			if(array_1[pass]>array_1[j]){
				swap(&array_1[pass],&array_1[j]);
			}
		}
	}
	for(pass =0;pass<size-1;pass++){
		printf("%d ",array_1[pass]);
	}
	
	printf("\n");
	
	//盽计戈獶盽计夹
	int array_3[] = {2,3,1,4,6,7,5};
	for(pass =0;pass<size-1;pass++){
		for(j=pass; j<size-1; j++){
			if(array_3[pass]>array_3[j]){
				swap_2(&array_3[pass],&array_3[j]);
			}
		}
	}
	for(pass =0;pass<size-1;pass++){
		printf("%d ",array_3[pass]);
	}
	printf("\n");
	
	//盽计戈盽计夹
	int *const array_4[] = {2,3,1,4,6,7,5};
	int *tmparray_4 = malloc(size*sizeof(int));
	for(pass =0;pass<size-1;pass++){
		tmparray_4[pass] = array_4[pass];
	}
	for(pass =0;pass<size-1;pass++){
		for(j=pass; j<size-1; j++){
			if(tmparray_4[pass]>tmparray_4[j]){
				swap_2(&tmparray_4[pass],&tmparray_4[j]);
			}
		}
	}
	for(pass =0;pass<size-1;pass++){
		printf("%d ",tmparray_4[pass]);
	}
	free(tmparray_4);
	system("pause");
}

void swap(int *tmparray1,int *tmparray2){
	int hold = *tmparray1;
	*tmparray1 = *tmparray2;
	*tmparray2 = hold;
}

//獶盽计夹
void swap_2(const int* tmparray1,const int* tmparray2){
	int *ptrarray1 = malloc(sizeof(int));
	ptrarray1 = tmparray1;
	int *ptrarray2 = malloc(sizeof(int));
	ptrarray2 = tmparray2;
	
	int hold = *ptrarray1;
	*ptrarray1 = *ptrarray2;
	*ptrarray2 = hold;
	
	ptrarray1 = NULL;
	ptrarray2 = NULL;
	free(ptrarray1);
	free(ptrarray2);
}
