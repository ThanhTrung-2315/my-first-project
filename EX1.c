#include <stdio.h>
struct person
{
	int age;
	float weight;
};

int main()
{
	struct person *personPtr, person1;
	personPtr = &person1;
	
	printf("enter age: ");
	scanf("%d", &personPtr->age);
	
	printf("enter weight: ");
	scanf("%f", &personPtr->weight);
	
	printf("Dislaying:\n");
	printf("Age: %d\n", personPtr->age);
	printf("weight: %f", personPtr->weight);
	
	return 0;
}
