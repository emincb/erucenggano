#include <stdio.h>
#include <stdlib.h>

int main(){
	int yari;
	printf("Hangi yariyil icin hesaplamak istiyorsun?\n");
	scanf("%d",&yari);
	
	int a,b,c,d,e,f;
	int a1,b1,c1,d1,e1,f1;
	
	
	if(yari == 1){
	
	printf("Iletisim ve sunum teknikleri vize notunu gir :\n");
	scanf("%d", &a);
	printf("Iletisim ve sunum teknikleri final,but  notunu gir :\n");
	scanf("%d", &a1);
	
	printf("Physics 1 vize notunu gir :\n");
	scanf("%d", &b);
	printf("Physics 1 final,but  notunu gir :\n");
	scanf("%d", &b1);
	
	printf("Matematik 1 vize notunu gir :\n");
	scanf("%d", &c);
	printf("Matematik 1 final,but  notunu gir :\n");
	scanf("%d", &c1);
	
	printf("Lineer Cebir vize notunu gir :\n");
	scanf("%d", &d);
	printf("Lineer Cebir final,but  notunu gir :\n");
	scanf("%d", &d1);
	
	printf("Introduction to Computer Engineering vize notunu gir :\n");
	scanf("%d", &e);
	printf("Introduction to Computer Engineering final,but  notunu gir :\n");
	scanf("%d", &e1);
	
	printf("Bilgisayar Programlama 1 vize notunu gir :\n");
	scanf("%d", &f);
	printf("Bilgisayar Programlama final,but  notunu gir :\n");
	scanf("%d", &f1);
		
	float ort;
	ort = (((a*4+a1*6)/10)*2+((b*4+b1*6)/10)*6+((c*4+c1*6)/10)*6+((d*4+d1*6)/10)*3+((e*4+e1*6)/10)*2+((f*4+f1*6)/10)*5)/24;
	printf("1.SINIF 1.DONEM GENEL NOT ORTALAMASI : %.2f",ort);}
	
	
	if(yari == 2){
		
		int bz102,bz104,bz106,bz112,mat112,phys120;
		int fbz102,fbz104,fbz106,fbz112,fmat112,fphys120;
		
		printf("Bilgisayar Programlama 2 vize notunu gir :\n");
		scanf("%d", &bz102);
		printf("Bilgisayar Programlama 2 final,but  notunu gir :\n");
		scanf("%d", &fbz102);
	
		printf("Is sagligi ve guvenligi 1 vize notunu gir :\n");
		scanf("%d", &bz104);
		printf("Is sagligi ve guvenligi 1 final,but  notunu gir :\n");
		scanf("%d", &fbz104);
		
		printf("Discrete Mathematics vize notunu gir :\n");
		scanf("%d", &bz106);
		printf("Discrete Mathematics final,but  notunu gir :\n");
		scanf("%d", &fbz106);
	
		printf("Kariyer Planlama vize notunu gir :\n");
		scanf("%d", &bz112);
		printf("Kariyer Planlama final,but  notunu gir :\n");
		scanf("%d", &fbz112);
		
		printf("Matematik 2 vize notunu gir :\n");
		scanf("%d", &mat112);
		printf("Matematik 2 final,but  notunu gir :\n");
		scanf("%d", &fmat112);
	
		printf("Physics 2 vize notunu gir :\n");
		scanf("%d", &phys120);
		printf("Physics 2 final,but  notunu gir :\n");
		scanf("%d", &fphys120);
		
		float ort1;
		ort1 = (((bz102*4+fbz102*6)/10)*5+((bz104*4+fbz104*6)/10)*2+((bz106*4+fbz106*6)/10)*3+((bz112*4+fbz112*6)/10)*2+((mat112*4+fmat112*6)/10)*6+((phys120*4+fphys120*6)/10)*6)/24;
		printf("1.SINIF 2.DONEM GENEL NOT ORTALAMASI : %.2f",ort1);}
		
		
	}
	
	
	
	
	
	
	
	

