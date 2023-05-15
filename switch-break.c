#include <stdio.h>
main(){
  int a;
  
  printf("자신이 좋아하는 과일을 번호로 입력해주세요.\n"); 
  printf("사과=1, 키위=2, 복숭아=3, 수박=4, 모두 좋아하지 않는다=0\n");

  printf("선택한 번호를 입력해주세요; ");
  scanf("%d", &a);
  
  switch(a){
  case 1:
    printf("사과를 좋아하는군요!\n");
    break;
  case 2:
    printf("키위를 좋아하는군요!\n");
    break;
  case 3:
    printf("복숭아을 좋아하는군요!\n");
    break;
  case 4:
    printf("수박을 좋아하는군요!\n");
    break;
    printf("당신은 아마도 과일을 좋아하지 않는 것 같군요\n");
  }
}