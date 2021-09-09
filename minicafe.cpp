#include <stdio.h>
#include <string.h>

int total;
void mainCourse();
void sideDish();
void dessert();
void beverage();

struct login{
    char username[100];
    char password[100];
};

void registration(){
    struct login log;
    printf("Enter username: ");
    scanf("%s",log.username);
    printf("Enter password: ");
    scanf("%s",log.password);
    FILE *fwrite=fopen("./logins.txt","a");
    fprintf(fwrite,"%s %s",log.username,log.password);
    fclose(fwrite);
    printf("\nPress any key to continue\n");
    printf("Kindly continue to login~~~\n");
}

void readinfo(){
    FILE *fread=fopen("./logins.txt","r");
    char var[100];
    while(fscanf(fread,"%[^\n]\n", var) != EOF){
         printf("%s\n", &var);}
}

struct login find(){
    FILE *fcheck=fopen("./logins.txt","r"); 
    char username[100];
    char pswd[100];
    printf("Enter username: ");
    scanf("%s",&username);
    printf("Enter password: ");
    scanf("%s",&pswd);
    struct login l;
    while(fscanf(fcheck,"%s%s",l.username,l.password)!=EOF){
        if(strcmp(username,l.username)==0 && strcmp(pswd,l.password)==0){
            printf("~~~~~Successful Login~~~~~\n");
            // printf("Press any key to continue\n");
            
            ///////////////////////
            char stat = 'a';

			int people;
			printf("Order for how many people?\n");
			scanf("%d", &people);
			while (people--){
			printf("Please follow this step to order\n");
            printf("-> You are going to order main course\n");
            printf("-> You are going to order side dishes\n");
            printf("-> You are going to order dessert\n");
            printf("-> You are going to order beverage\n");
			printf("\n");

			total = 0;
			mainCourse();
			sideDish();
			dessert();
			beverage();
			printf("The total price of your order is Rp %d, Please pay it at the cashier.\n", total);

			}
			// printf("Please follow this step to order\n");
            // printf("-> You are going to order main course\n");
            // printf("-> You are going to order side dishes\n");
            // printf("-> You are going to order dessert\n");
            // printf("-> You are going to order beverage\n");
            
			// total = 0;
			// mainCourse();
			// sideDish();
			// dessert();
			// beverage();
			// printf("Total pembayaran anda adalah Rp %d, silahkan bayar di kasir.\n", total);
		}
        else{
            printf("~~~~~Incorrect Login~~~~~");
		}
    }
    struct login temp;
    return temp;
}

int main() {
	int ch;
    char conds='y';
    while (conds='y'){
        puts("\n Enter your choice");
        puts("\t1.To register");
        puts("\t2.To login");
        puts("\t3.To Read");
        puts("\t4.To stop");
        printf("-->");scanf("%d",&ch);
        if(ch==1){
            registration();
        }
        else if (ch==2){
            struct login temp = find();
            printf("%s", temp.username);
        }
        else if(ch==3){
            readinfo();
        }
        else{
            printf("Thank You! \n");
            break;
        }
    }
    printf("\n");
	return 0;
}

void mainCourse() {
	puts("Choose your main course!");
	puts("1. Chicken katsu");
	puts("2. Nasi ayam goreng");
	puts("3. Nasi ayam suir kemangi");
	puts("4. Nasi goreng");
	puts("5. Nasi goreng spesial");
	puts("6. Nasi ayam bakar");
	puts("7. Go to next session");
	int x;
	scanf("%d", &x);
	if (x==1) {
		puts("Rp 30.000");
		total += 30000;
    } if(x==2) {
		puts("Rp 25.000");
		total += 25000;
	} if(x==3) {
		puts("Rp 35.000");
		total += 35000;
	} if(x==4) {
		puts("Rp 40.000");
		total += 40000;
	} if(x==5) {
		puts("Rp 45.000");
		total += 45000;
	} if(x==6) {
		puts("Rp 30.000");
		total += 30000;
	} if (x==7){
		puts("");
	}

}

void sideDish() {
	puts("What would you want for the side dish?");
	puts("1. French fries");
	puts("2. Salad");
	puts("3. Asparagus soup");
	puts("4. Baked beans");
	puts("5. Macaroni and cheese");
	puts("6. Sauteed mushrooms");
	puts("7. Greens");
	puts("8. Mashed potatoes");
	puts("9. Go to next session");
	int x;
	scanf("%d", &x);
	if(x == 1) {
		puts("1. Medium");
		puts("2. Large");
		int y;
		scanf("%d", &y);
		if (y == 1) {
			puts("Rp 25.000");
			total += 25000;
		} if (y == 2) {
			puts("Rp 39.000");
			total += 39000;
		}
	} if (x == 2) {
		puts("1. Pasta salad");
		puts("2. Potato salad");
		int y;
		scanf("%d", &y);
		if (y == 1) {
			puts("Rp 79.000");
			total += 79000;
		} if (y == 2) {
			puts("Rp 50.000");
			total += 50000;
		}
	} if(x == 3) {
		puts("Rp 55.000");
		total += 55000;
	} if(x == 4) {
		puts("Rp 68.000");
		total += 68000;
	} if(x == 5) {
		puts("Rp 45.000");
		total += 45000;
	} if(x == 6) {
		puts("Rp 54.000");
		total += 54000;
	} if(x == 7) {
		puts("Rp 35.000");
		total += 35000;
	} if(x == 8) {
		puts("Rp 44.000");
		total += 44000;
	} if (x==9) {
		puts("");
	}
	return;
}

void dessert() {
	puts("What dessert would you like?");
	puts("1. Pancake");
	puts("2. Pudding");
	puts("3. Cheesecake");
	puts("4. Pie");
	puts("5. Tiramisu");
	puts("6. Brownies");
	puts("7. Smoothie");
	puts("8. Bagel");
	puts("9. Pannacotta");
	puts("10. Go to next session");
	int x;
	scanf("%d", &x);
	if (x==1) {
		puts("38.000");
		total += 38000;
	} if (x==2) {
		puts("27.000");
		total += 27000;
	} if (x==3) {
		puts("33.000");
		total += 33000;
	} if (x==4) {
		puts("29.000");
		total += 29000;
	} if (x==5) {
		puts("28.000");
		total += 28000;
	} if (x==6) {
		puts("30.000");
		total += 30000;
	} if (x==7) {
		puts("25.000");
		total += 25000;
	} if (x==8) {
		puts("27.000");
		total += 27000;
	} if (x==9) {
		puts("28.000");
		total += 28000;
	} if (x==10){
		puts("");
	}
    return;
}

void beverage() {
	puts("Choose your beverage!");
	puts("1. Ice tea");
	puts("2. Fruit punch");
	puts("3. Ice lemon tea");
	puts("4. Ice cappuccino");
	puts("5. Milk tea");
	puts("6. Ice lemon tea");
	puts("7. Go to next session");
	int x;
	scanf("%d", &x);
	if(x == 1) {
		puts("1. Medium");
		puts("2. Large");
		int y;
		scanf("%d", &y);
		if (y == 1) {
			puts("Rp 25.000");
			total += 25000;
		} if (y == 2) {
			puts("Rp 30.000");
			total += 30000;
		}
	} if(x == 2) {
		puts("1. Medium");
		puts("2. Large");
		int y;
		scanf("%d", &y);
		if (y == 1) {
			puts("Rp 35.000");
			total += 35000;
		} if (y == 2) {
			puts("Rp 40.000");
			total += 40000;
		}
	} if(x == 3) {
		puts("1. Medium");
		puts("2. Large");
		int y;
		scanf("%d", &y);
		if (y == 1) {
			puts("Rp 25.000");
			total += 25000;
		} if (y == 2) {
			puts("Rp 30.000");
			total += 30000;
		}
	} if(x == 4) {
		puts("1. Medium");
		puts("2. Large");
		int y;
		scanf("%d", &y);
		if (y == 1) {
			puts("Rp 27.000");
			total += 27000;
		} if (y == 2) {
			puts("Rp 33.000");
			total += 33000;
		}
	} if(x == 5) {
		puts("1. Medium");
		puts("2. Large");
		int y;
		scanf("%d", &y);
		if (y == 1) {
			puts("Rp 34.000");
			total += 34000;
		} if (y == 2) {
			puts("Rp 38.000");
			total += 38000;
		}
	} if(x == 6) {
		puts("1. Medium");
		puts("2. Large");
		int y;
		scanf("%d", &y);
		if (y == 1) {
			puts("Rp 33.000");
			total += 33000;
		} if (y == 2) {
			puts("Rp 40.000");
			total += 40000;
		}
	} if(x==7) {
		puts("");
	}
	return;
}
