#include <stdio.h>

typedef struct{
    char firstname[20];
    char lastname[20];
} Owner;

typedef struct{
    char brand[20];
    int year;
    Owner owner;
} Car;

typedef struct{
    char name[20];
    Car featurecar;
} Dealership;

int main()
{
    Owner person = {"Saish", "Kambali"};
    Car car1 = {"Thar", 2024, person};
    Dealership dealer = {"Mahindra", car1};

    printf("Dealership: %s\n", dealer.name);
    printf("Featured car: %s (%d), owned by %s %s\n", 
    dealer.featurecar.brand,
    dealer.featurecar.year,
    dealer.featurecar.owner.firstname,
    dealer.featurecar.owner.lastname);
    return 0;
}