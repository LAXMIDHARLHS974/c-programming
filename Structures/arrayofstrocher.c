#include<stdio.h>
#include<string.h>

int main(){
    typedef struct Car{
        char name[50];
        float price;
        char model[70];
    }car;
    car Super[4];
//1
    strcpy(Super[0].name, "Porsche");
    strcpy (Super[0].model, "Cayenne");
    Super[0].price=3.80;

//2
    strcpy(Super[1].name, "Aston Martin");
    strcpy (Super[1].model, "VANTAGE");
    Super[1].price=8.37;

//3
    strcpy(Super[2].name, "McLaren");
    strcpy (Super[2].model, "720S");
    Super[2].price=9.77;

//4
    strcpy(Super[3].name, "Lamborghini");
    strcpy (Super[3].model, "Revuelto");
    Super[3].price=5.77;

    car Luxury[2];
//1
    strcpy(Luxury[0].name, "Rolls-Royce");
    strcpy (Luxury[0].model, "phantom");
    Luxury[0].price=8.99;

//2
    strcpy(Luxury[1].name, "Bentley");
    strcpy (Luxury[1].model, "Mulliner W12");
    Luxury[1].price=7.77;//we are print two type

// printf("There are Super Cars\n");
//     printf("%s\n",Super[0].name);
//     printf("%s\n",Super[0].model);//type 1
//     printf("%f\n",Super[0].price);
// printf("\n");
//     printf("%s\n",Super[1].name);
//     printf("%s\n",Super[1].model);
//     printf("%f\n",Super[1].price);
// printf("\n");
//     printf("%s\n",Super[2].name);
//     printf("%s\n",Super[2].model);
//     printf("%f\n",Super[2].price);
// printf("\n");
//     printf("%s\n",Super[3].name);
//     printf("%s\n",Super[3].model);
//     printf("%f\n",Super[3].price);

// printf("there are Luxury\n");
//     printf("%s\n",Luxury[0].name);
//     printf("%s\n",Luxury[0].model);
//     printf("%f\n",Luxury[0].price);
// printf("\n");
//     printf("%s\n",Luxury[1].name);
//     printf("%s\n",Luxury[1].model);
//     printf("%f\n",Luxury[1].price);

    for(int i=0;i<4;i++){
        printf("%s\n",Super[i].name);//type 2
        printf("%s\n",Super[i].model);
        printf("%f\n",Super[i].price);
    }
printf("\n");
    for(int j=0;j<2;j++){
        printf("%s\n",Luxury[j].name);
        printf("%s\n",Luxury[j].model);
        printf("%f\n",Luxury[j].price);
    }
    
   return 0;
 }