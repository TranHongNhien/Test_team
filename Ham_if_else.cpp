#include<stdio.h>
#include<math.h>

 
int main()
{
	/*int n;
	printf("Nhap so n: "); scanf("%d", &n);
		if ((n%2)==0)
	{
		printf("So n la so chan!");
	}
	return 0; */
	
	//kiem tra nam nhuan
	/* int year;
	printf("Nhap vao so nam: "); scanf("%d", &year);
	if ((year%400==0) || ((year%4==0)&&(year%100)!=0))
		printf("Nam %d la nam nhuan!", year);
	else //dieu kien dung bo qua else, dk sai thuc hien else
		printf("Nam %d khong phai la nam nhuan!", year);
	 */
	
	//Nhap vao so thang trong nam, in so ngay tuong ung, bo qua nam nhuan
	/*int m;
	printf("Nhap vao so thang: "); scanf("%d", &m);
	if(m==1)
		printf("Thang %d co 31 ngay!", m);
	else if (m==2) 
		printf("Thang %d co 28 ngay!", m);	
	else if (m==3) 
		printf("Thang %d co 31 ngay!", m);	
	else 
		printf("Du lieu khong hop le!");
		
	// co the thay else if = if, tuy nhien phai kiem tra toan bo dk if
	// neu else if nao dung se dung lai va khong kiem tra nua
	*/
	
	// bai tap ascii
	// A->Z: 65 -> 90, a->z: 97->122, 0->9: 18->57
	
	char kitu;
	scanf("%c", &kitu); printf("STT trong bang ma ASCII: %d", kitu);
	if((kitu>='A')&&(kitu<='Z')) //co the so sanh voi stt
	printf("\nDay la ky tu in hoa!");//kiem tra ky tu in hoa
	return 0;
}
