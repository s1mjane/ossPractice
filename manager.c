#include "manager.h"

int selectMenu(){
    int menu;
    printf("\n*** 제품 관리 ***\n");
    printf("1. 조회\n");
    printf("2. 추가\n");
    printf("3. 수정\n");
    printf("4. 삭제\n");
    printf("5. 저장\n");
    printf("0. 종료\n\n");
    printf("=> 원하는 메뉴는? ");
    scanf("%d", &menu);
    return menu;
}
void listProduct(Product *p,int count){

    printf("\nNo. Name          weight price\n");
    printf("================================\n");
    for(int i=0; i<count; i++){
        if( p[i].weight == -1 || p[i].price == -1 ) continue;
        printf("%2d.", i+1);
        readProduct(&p[i]);
    }
    printf("\n");
}

int selectDataNo(Product *p, int count){
    int no;
    listProduct(p,count);
    printf("번호는 (취소:0)?");
    scanf("%d",&no);
    getchar();
    return no;
}

//배열데이터를 파일에 저장하는 함수
void saveData(Product p[], int count){
    FILE *fp; // 파일 포인터
    fp= fopen("product.txt","wt"); // write버전으로 파일 오픈
    for (int i=0; i<count; i++) { // 파일 데이터 개수만큼 for문 돌리기
        if (p[i].weight!=-1 && p[i].price!=-1) { // 삭제되지 않은 경우를 말함
            fprintf(fp, "%d %d %s", p[i].weight, p[i].price, p[i].name); // 파일에 쓰기
        }
    }
    fclose(fp); // 파일 닫기
    printf("저장됨!\n");
}

//파일에서 데이터 불러오는 함수
int loadData(Product *p){
	int count=0;
	FILE*fp;

	//파일 내용을 읽어와서 배열에 값 추가하기




	printf("=> 로딩 성공!\n");
	return count;
}
