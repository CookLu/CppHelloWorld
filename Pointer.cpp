#include <iostream>

using namespace std;

void main()
{
//  int *ptr_int;
//  if(ptr_int == NULL)  //run fail. Ptr must be initialized
//  {
//      printf("un-initial ptr is NULL\n");
//  }


    int *ptr_int = NULL;

    if(ptr_int == NULL)  
    {
        printf("un-initial ptr is NULL\n");
    }

    //int *ptr_int2 = NULL; //run fail. Ptr must be malloced before use.
    //*ptr_int2 = 2;

    ptr_int = (int *)malloc(0);
    *ptr_int = 2;

    *(ptr_int + 1 ) = 2;


    //可以运行，但是随机值
    //It will not crash.
    int array1[2]= {0};
    printf("定义array1[2]= {0}，\n array1[20] = %d\n", array1[20]);

	char* myString = "Tomorrow is another day";

	int num = 0;

	for(char* point = myString;	    *point != NULL;	    point++, num++)
	{

	}

	printf("sizeof() = %d\n", sizeof(myString));
	printf("strlen() = %d\n", strlen(myString));

	printf("there are %d chars\n", num);
}
