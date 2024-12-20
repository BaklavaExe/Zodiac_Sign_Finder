#include<stdio.h>
//This program is find your zodiac sign
int main()
{
	do
	{
		int Month, Day;
		char language;

		printf("\nFor Exit Press Key Q / Cikmak Icin Q Tusuna Basin");
		printf("\nSelect Your Language(EN)! / Lutfen Dil Seciniz(TR)! :  ");
		scanf_s(" %c", &language);


		getchar();

		if (language == 'Q' || language == 'q')
		{
			printf("Application Is Closing...//Uygulama Kapatiliyor...");
			return 0;
		}
		//For Turkish
		if (language == 'T' || language == 't')
		{
			printf("Lutfen Dogum Ayinizi Giriniz(Sayi Olarak!): ");
			scanf_s("%d", &Month);
			getchar();

			if (Month > 12 || Month < 1)
			{
				printf("Lutfen Gecerli Ay Giriniz!\n");
				continue;
			}

			printf("Lutfen Dogum Gununuzu Giriniz(Sayi Olarak!): ");
			scanf_s("%d", &Day);
			getchar();
			if (Day > 31 || Day < 1)
			{
				printf("Lutfen Gecerli Gun Giriniz\n");
				continue;
			}

			if ((Month == 3 && Day >= 21) || (Month == 4 && Day <= 20))
			{
				printf("Burcunuz : Koc ");
			}
			else if ((Month == 4 && Day >= 21) || (Month == 5 && Day <= 20))
			{
				printf("Burcunuz : Boga");
			}
			else if ((Month == 5 && Day >= 21) || (Month == 6 && Day <= 21))
			{
				printf("Burcunuz : Ikizler");
			}
			else if ((Month == 6 && Day >= 22) || (Month == 7 && Day <= 22))
			{
				printf("Burcunuz : Yengec");
			}
			else if ((Month == 7 && Day >= 23) || (Month == 8 && Day <= 23))
			{
				printf("Burcunuz : Aslan");
			}
			else if ((Month == 8 && Day >= 24) || (Month == 9 && Day <= 23))
			{
				printf("Burcunuz : Basak");
			}
			else if ((Month == 9 && Day >= 24) || (Month == 10 && Day <= 23))
			{
				printf("Burcunuz : Terazi");
			}
			else if ((Month == 10 && Day >= 24) || (Month == 11 && Day <= 22))
			{
				printf("Burcunuz : Akrep");
			}
			else if ((Month == 11 && Day >= 23) || (Month == 12 && Day <= 21))
			{
				printf("Burcunuz : Yay");
			}
			else if ((Month == 12 && Day >= 22) || (Month == 1 && Day <= 20))
			{
				printf("Burcunuz : Oglak");
			}
			else if ((Month == 1 && Day >= 21) || (Month == 2 && Day <= 19))
			{
				printf("Burcunuz : Kova");
			}
			else if ((Month == 2 && Day >= 20) || (Month == 3 && Day <= 20))
			{
				printf("Burcunuz : Balik");
			}
			else
			{
				printf("\nHATA : Hatali Giris Yaptiniz!");
			}
		}
		//For English
		else if (language == 'E' || language == 'e')
		{
			printf("Enter Your Month Of Birth (As A Number): ");
			scanf_s("%d", &Month);
			getchar();
			if (Month > 12 || Month < 1)
			{
				printf("Please Enter Correct Month!");
				continue;
			}
			printf("Enter Your Birthday (As A Number): ");
			scanf_s("%d", &Day);
			getchar();
			if (Day > 31 || Day < 1)
			{
				printf("Please Enter Correct Day!");
				continue;
			}

			if ((Month == 3 && Day >= 21) || (Month == 4 && Day <= 19))
			{
				printf("Your Zodiac : Aries(Ram)\n");
			}
			else if ((Month == 4 && Day >= 20) || (Month == 5 && Day <= 20))
			{
				printf("Your Zodiac : Taurus(Bull)");
			}
			else if ((Month == 5 && Day >= 21) || (Month == 6 && Day <= 21))
			{
				printf("Your Zodiac : Gemini(Twins)");
			}
			else if ((Month == 6 && Day >= 22) || (Month == 7 && Day <= 22))
			{
				printf("Your Zodiac : Cancer(Crab)");
			}
			else if ((Month == 7 && Day >= 23) || (Month == 8 && Day <= 22))
			{
				printf("Your Zodiac : Leo(Lion)");
			}
			else if ((Month == 8 && Day >= 23) || (Month == 9 && Day <= 22))
			{
				printf("Your Zodiac : Virgo(Virgin)");
			}
			else if ((Month == 9 && Day >= 23) || (Month == 10 && Day <= 23))
			{
				printf("Your Zodiac : Libra(Balance)");
			}
			else if ((Month == 10 && Day >= 24) || (Month == 11 && Day <= 21))
			{
				printf("Your Zodiac : Scorpius(Scorpion)");
			}
			else if ((Month == 11 && Day >= 22) || (Month == 12 && Day <= 21))
			{
				printf("Your Zodiac : Sagittarius(Archer)");
			}
			else if ((Month == 12 && Day >= 22) || (Month == 1 && Day <= 19))
			{
				printf("Your Zodiac : Capricornus(Goat)");
			}
			else if ((Month == 1 && Day >= 20) || (Month == 2 && Day <= 18))
			{
				printf("Your Zodiac : Aquarius(Water Bearer)");
			}
			else if ((Month == 2 && Day >= 19) || (Month == 3 && Day <= 20))
			{
				printf("Your Zodiac : Pisces(Fish)");
			}
			else
			{
				printf("\nERROR:You Have Entered Wrong Key!");
			}
		}
		else
		{
			printf("You Have Entered Wrong Language!(EN or TR) / Hatali Dil Girdiniz!(TR ya da EN)");
			continue;
		}
	} while (1);
}