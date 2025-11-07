#include <stdio.h>
	int main (){
 		int lua_chon,sum,index,indexDelete,gia_tri,vi_tri,phan_tu;
 		int n;
 		int arr[100];
 		int i=0;
    	do{
 				printf ("-------------------MENU----------------------\n");
				printf ("1.Nhap so luong phan tu va gia tri tung phan tu cho mang\n");	 
	 			printf ("2.In ra gia tri các phan tu trong mang\n");
	 			printf ("3.Tinh tong cua tat ca so nguyen to o trong mang\n");
	 			printf ("4.In ra các phan tu có index là so le trong mang\n");
	 			printf ("5.Them moi mot phan tu vao cuoi mang\n");
	 			printf ("6.Xoa phan tu tai mot vi tri cu the\n");
	 			printf ("7.Sap xep mang theo thu tu giam dan\n");
	 			printf ("8.Kiem tra so ton tai cua phan tu trong mang\n");
	 			printf ("9.In ra cac phan tu xuat hien dung 1 lan trong mang\n");
				printf ("10.Cap nhat tat ca so am trong mang thanh gia tri 0\n");	 
	 			printf ("---------------------------------------------------------\n");
	 
     	 	switch(lua_chon){
			case 1 :
				printf("Nhap so luong phan tu cua mang :");
				scanf("%d",&n);
				for( i = 0;i<n;i++){
					printf("Phan tu arr[%d] = ",i);
					scanf("%d",&arr[i]);
				}
				break;
			case 2:
			printf ("Gia tri vua nhap la\n ");	
	 		for ( i=0;i<n;i++){
			 printf ("%d",arr[i]);
			}
			printf ("\n");
	 		break;
			case 3:
			printf ("tong tat ca so nguyen"); 
	 		for (i=0;i<n;i++){
	 		sum = sum + arr[i];
			i++;	
	 		}
	 		printf ("%d",sum);
	 		printf ("\n");
	 		break;
	 	
			case 5: 
			printf ( "Them moi mot phan tu ");
			scanf ("%d",&phan_tu);
	  		  printf ("phan tu o vi tri cuoi mang la ", phan_tu );
	 		break;
	    	case 6 :
				printf("Moi ban nhap vi tri muon xoa");
				scanf("%d",&vi_tri);
				printf ("nhap phan tu muon xoa");
				scanf ("%d",&phan_tu);
				
				break;
           	}
	
	}while(lua_chon!=10);
	
	
	
return 0;
}

