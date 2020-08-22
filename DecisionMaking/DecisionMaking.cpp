// DecisionMaking.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

int main()
{
	int number1; // first integer to compare
	int number2; // second integer to compare
	int number3 = 3;
	short number4 = 4;
	float number5 = number3 % number4;
	std::cout << "Enter two integer to compare: ";
	std::cin >> number1 >> number2; // read two integers from user
	if(number1==number2)
	{
		std::cout << number1 << "==" << number2<<std::endl;
	}if(number1!=number2)
	{
		std::cout << number1 << "!=" << number2<<std::endl;
	}if(number1<number2)
	{
		std::cout << number1 << "<" << number2<<std::endl;
	}if(number1>number2)
	{
		std::cout << number1 << ">" << number2<<std::endl;
	}if(number1<=number2)
	{
		std::cout << number1 << "<=" << number2<<std::endl;
	}if(number1>=number2)
	{
		std::cout << number1 << ">=" << number2<<std::endl;
	}
	
}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
