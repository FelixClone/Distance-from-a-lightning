#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float SoundofThunder;
	printf("------------------------------------------------------------\n");
	printf("\t\tDistance from a lightning");
	printf("\n------------------------------------------------------------\n");
	printf("Assim que perceber a luz do relâmpago, comece a contar \nQuantos segundos demorou até perceber o som? ");
	scanf("%f", &SoundofThunder);
        if(SoundofThunder>0){
			system("cls");
			printf("O raio caiu aproximadamente a %.1fkm ou %.0fm", SoundofThunder/3, SoundofThunder*340);
        }else{
			system("cls");
			system("color f4");
            printf("O raio caiu muito próximo");
		}

	return 0;
}
