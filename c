#include <stdio.h>


int main (void){
	
	int kart_no, kart_no1=0001, kart_no2=0002, sifre1= 5858, sifre2= 3434;
	
	printf("Lutfen kart numarasini giriniz:\n");
	scanf("%d",&kart_no);
	
	while((kart_no!= kart_no1) && (kart_no!= kart_no2)){
		
		printf("KART NUMARASINA AIT KULLANICI BULUNAMADI!!\n");
		printf("Lutfen kart numarasini tekrar giriniz:\n");
		scanf("%d",&kart_no);
	
	}
	
		if(kart_no== 0001){
			
			printf("Lutfen sifrenizi giriniz:\n");
			scanf("%d",&sifre1);
			
				while(sifre1!= 5858){
				
					printf("KART NO VE SIFRE UYUSMUYOR!!\n");
					printf("Lutfen sifreyi tekrar giriniz:\n");
					scanf("%d",&sifre1);	
				}
			
			printf("Hos geldiniz Yasin GUNDOGDU\n");	
		
		
		}else if(kart_no== 0002){
		
			printf("Lutfen sifrenizi giriniz:\n");
			scanf("%d",&sifre2);
			
				while(sifre2!= 3434){
				
					printf("KART NO VE SIFRE UYUSMUYOR!!\n");
					printf("Lutfen sifreyi tekrar giriniz:\n");
					scanf("%d",&sifre2);	
				}
		
			printf("Hos geldiniz Ayfer YILDIZ\n");
		
		} 
	
	int islem, bakiye=1000, para_ekle, para_cikar;
	int sifre, yeni_sifre, i=1, transfer;
	
	do
	{
		printf("---------------------\n");			
		printf("1->Bakiye Ogren\n");
		printf("2->Sifre Degistir\n");
		printf("3->Para Yatirma\n");
		printf("4->Para Cekme\n");
		printf("5->Para Transferi\n");
		printf("---------------------\n");
		
		
		printf("\nIslem Seciniz=\t");
		scanf("%d%*c",&islem);
		
			
			switch(islem){
				
				case 1:
				
				printf("Bakiyeniz:%d TL\n",bakiye);
				break;
				
				case 2:
				
				printf("Eski sifrenizi giriniz:\n");
				scanf("%d",&sifre);
					if(sifre==5858){

						printf("Yeni sifreyi giriniz:\n");
						scanf("%d",&yeni_sifre);
						printf("Sifreniz basariyla degistirilmistir\n");
						
					}else if(sifre==3434){
						
						printf("Yeni sifreyi giriniz:\n");
						scanf("%d",&yeni_sifre);
						printf("Sifreniz basariyla degistirilmistir\n");	
					
					}else {
						
						printf("HATALI GIRIS YAPTINIZ!!!\n");
					}
					
											
					
				break;
				
				case 3:
				
				printf("Yatirilacak miktari giriniz:\n");
				scanf("%d",&para_ekle);
				bakiye= bakiye+ para_ekle;
				printf("Yeni bakiye:%d TL\n",bakiye);
				break;
				
				case 4:
				
				printf("Cekmek istediginiz tutari giriniz:\n");
				scanf("%d",&para_cikar);

				
					if(para_cikar>bakiye){
						
						printf("HESABINIZDA YETERLI BAKIYE BULUNAMADI!!!\n");

					}else if (para_cikar<=bakiye){
						
						bakiye= bakiye- para_cikar;
						printf("yeni bakiye:%d TL\n",bakiye);
					
					}
				break;
				
				case 5:
				
				printf("Para gondereceginiz kart numarasini giriniz:");
				scanf("%d",&kart_no);
				
				printf("Gondermek istediginiz tutari giriniz:");
				scanf("%d",&transfer);
					if(transfer>bakiye){
					
						printf("HESABINIZDA YETERLI BAKIYE BULUNAMADI!!!\n");	
						
					}else if(transfer<=bakiye){
						
						printf("Isleminiz basariyla gerceklesti\n");
						bakiye= bakiye- transfer;
						printf("Yeni bakiye:%d TL\n",bakiye);
					
					}
				break;
				
				default:
				
				i=-1;
				printf("Girilen deger gecersiz!!!\n");
				break;
			}
		
	}while(i>0);
	
	return 0;
}
