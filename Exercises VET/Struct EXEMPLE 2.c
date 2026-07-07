struct data{ //Define a struct e seus elementos
 int dia, ano;
 char mes[20];
};

#include <string.h>

int main(){
struct data item, item2;
printf("\nDigite a data de hoje(dia/mes/ano):\n");
scanf("%d%s%d",&item.dia,&item.mes,&item.ano);

item2=item;
printf("\n%d %s %d \n",item.dia,item.mes,item.ano);
printf("\n%d %s %d \n",item2.dia,item2.mes,item2.ano);

if(item.dia==item2.dia) {
	if(strcmp(item.mes,item2.mes)==0) {
		if(item.ano==item2.ano) {
			printf("\nAs datas sao iguais");
		}
	}
}

else {
	printf("\n As datas nao sao iguais");
}

return 0;
}

