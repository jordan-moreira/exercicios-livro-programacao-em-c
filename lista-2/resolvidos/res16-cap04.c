#include <stdio.h>

//esse codigo recebe o preco de um produto e sua venda media mensal retornando o seu novo preco de acordo com a regra de negocio abaixo

int main() {
float precoAtual,vendaMedia,novoPreco;

printf("digite respectivamente o preco atual do produto e sua venda media mensal: ");
scanf("%f %f%*c",&precoAtual,&vendaMedia);

if(vendaMedia<500 || precoAtual<30 ){
    novoPreco=precoAtual*1.1;

}else if((vendaMedia>=500 && vendaMedia<1200) || (precoAtual>=30 && precoAtual<80) ){
    novoPreco=precoAtual*1.15;
    
}else{
    novoPreco=precoAtual*0.8;
}
    printf("o novo preco deve ser %.2f",novoPreco);

}

