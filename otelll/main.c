#include <stdio.h>
#include <stdlib.h>

int main()
{

    int say,hafta,oda_tipi,fiyat,oda_secimi,Standart[51],Large_Deluxe[17],Deluxe[33],gun,j,a=0,st=0,ld=0,dx=0,misafir_sayisi,oda_sayisi=1,basa_don,yeni_musteri;
    double ucret;
    char odeme_tipi,mevsim_secimi;



    for(j=0;j<100;j++)
    {

        if(j%2==1)
        {
            Standart[st]=j; st++;
        }
        else if(j%6==0)
        {
            Large_Deluxe[ld]=j; ld++;
        }
        else
        {
            Deluxe[dx]=j; dx++;
        }

    }


while(1==1)
{       say=0;
        printf("Lutfen otelimizde kalmak istediginiz sezonu seciniz \n");
        printf("Sonbahar icin 'S',Bahar icin 'B',Yaz icin 'Y' tusuna basiniz : "); scanf("%s",&mevsim_secimi);

        while(say<=2)
        {
        if(mevsim_secimi=='S' || mevsim_secimi=='s')
        {
            printf("Sonbahar sezonunun kacinci haftasinda konaklama yapilacagini giriniz(1-12) :");
            scanf("%d",&hafta);
        }
        else if(mevsim_secimi=='B' || mevsim_secimi=='b')
        {
            printf("Bahar sezonunun kacinci haftasinda konaklama yapilacagini giriniz(1-12)  :");
            scanf("%d",&hafta);
        }
        else
        {
            printf("Yaz sezonunun kacinci haftasinda konaklama yapilacagini giriniz(1-12)  :");
            scanf("%d",&hafta);
        }

        if(hafta>12)
        {
            say++;
        }
        else
        break;

        }

        if(say>2)

            break;




        while(1==1)
        {

          if(misafir_sayisi<=0)
          {
              break;
          }





        printf("\nLutfen kalmak istediginiz oda tipini seciniz\n");
        printf("Standart oda icin '1',Deluxe oda icin '2',Large Deluxe icin '3' kodunu giriniz"); scanf("%d",&oda_tipi);
        switch(oda_tipi)
        {
            case 1 :
            {
              if(mevsim_secimi=='S' || mevsim_secimi=='s')
            fiyat=25;
            else if(mevsim_secimi=='B' || mevsim_secimi=='b')
            fiyat=40;
            else
            fiyat=60;

            for(j=0;j<50;j++)
            {
                 if(Standart[j]==0)
                 printf("Dolu--");
                 else
                 printf("%d--",Standart[j]);
            }
            printf("nolu odalar Standart odalara dahildir\nbirini seciniz."); scanf("%d",&oda_secimi);
            break;}

            case 2 :
            {
                if(mevsim_secimi=='S' || mevsim_secimi=='s')
            fiyat=50;
            else if(mevsim_secimi=='B' || mevsim_secimi=='b')
            fiyat=75;
            else
            fiyat=90;

            for(j=0;j<33;j++)
            {
                if(Deluxe[j]==0)
                 printf("Dolu--");
                 else
                 printf("%d--",Deluxe[j]);
             }

            printf("nolu odalar Deluxe odalara dahildir\nbirini seciniz."); scanf("%d",&oda_secimi);
            break;}

            case 3 :
            {
                if(mevsim_secimi=='S' || mevsim_secimi=='s')
            fiyat=250;
            else if(mevsim_secimi=='B' || mevsim_secimi=='b')
            fiyat=300;
            else
            fiyat=400;

            for(j=1;j<17;j++)
            {
                 if(Large_Deluxe[j]==0)
                 printf("Dolu--");
                 else
                 printf("%d--",Large_Deluxe[j]);
            }

            printf("nolu odalar Large Deluxe odalara dahildir\nbirini seciniz."); scanf("%d",&oda_secimi);

            break;}
        }


        for(j=0;j<50;j++)
         if(Standart[j]==oda_secimi)
        Standart[j]=0;
        for(j=0;j<17;j++)
         if(Deluxe[j]==oda_secimi)
        Deluxe[j]=0;
        for(j=0;j<33;j++)
         if(Large_Deluxe[j]==oda_secimi)
        Large_Deluxe[j]=0;



        if(a<1)
        {
            printf("Otelde kac misafir kalacak? :");  scanf("%d",&misafir_sayisi);
            yeni_musteri=misafir_sayisi;
        }


        if(oda_tipi==1)
            {
                if(misafir_sayisi>4)
                {printf("Standart oda tipi 4 kisiliktir.Lutfen %d kisi icin yeniden secim yapiniz.",misafir_sayisi-4); }
                misafir_sayisi=misafir_sayisi-4;
           }
        else if(oda_tipi==2)
        {
            if(misafir_sayisi>4)
            {
                printf("Deluxe oda tipi 4 kisiliktir.Lutfen %d kisi icin yeniden secim yapiniz.",misafir_sayisi-4);
            }
            misafir_sayisi=misafir_sayisi-4;
        }
         else if(oda_tipi==3)
         {
          if(misafir_sayisi>7)
          {
              printf("Large Deluxe oda tipi 7 kisiliktir.Lutfen %d kisi icin yeniden secim yapiniz.",misafir_sayisi-7);
              oda_sayisi++;
          }
          misafir_sayisi=misafir_sayisi-7;
         }




         a++;
        }


        printf("Otelimizde kalacaginiz gun degerini giriniz : "); scanf("%d",&gun);

        printf("Odeme tipini seciniz\n");
        printf("On odemeli islem icin 'O',Havale ile odeme islemi icin 'H',Standart odeme icin 'S' giriniz :"); scanf("%s",&odeme_tipi);

        if(odeme_tipi=='O' || odeme_tipi=='o' )

        ucret=((fiyat)*(yeni_musteri)*gun)-((fiyat)*(yeni_musteri)*(gun)*0.15);

        else if(odeme_tipi=='H' || odeme_tipi=='h')
        {
            if(yeni_musteri<3)

            ucret=fiyat*yeni_musteri*gun;

            else if(yeni_musteri>3 && yeni_musteri<=5)

            ucret=(fiyat*(yeni_musteri)*gun)-((fiyat*0.5)*gun);

             else if(yeni_musteri>5)

            ucret=(fiyat*(yeni_musteri)*gun)-((fiyat*gun)*0.75);

        }
        else

        ucret=fiyat*(oda_sayisi)*yeni_musteri*gun;


         printf("Toplam ucret :%.2f $",ucret);
         printf("\nYeni rezervasyon yapmak istiyor musunuz? (Evet : 1 Hayir : 2)  :  ");scanf("%d",&basa_don);


         if(basa_don!=1)

           break;

            int h;
           for(h=1;h<=12;h++){
    if(h==hafta)
    {
        printf("\n %d.hafta yuzde:%%%.1d \n",h,oda_secimi);
    }
    else
        printf("\n%d. hafta yuzde :%%0\n",h);
}

           misafir_sayisi=0;




}


    return 0;
}

