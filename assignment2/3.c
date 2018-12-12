#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#define TITLE_SIZE 50

typedef struct movie {
	char title[TITLE_SIZE];
	int release;
} MOVIE;

typedef struct node {
	MOVIE movie;
	struct node *link;
} NODE;

int main(void) {
	MOVIE movie;
	int number;
	bool end = false;
	NODE *list = NULL;
	NODE *temp;

	while(!end) {
		printf("--------------------------------------\n");
		printf("1. 영화 정보 추가\n");
		printf("2. 영화 정보 출력\n");
		printf("3. 종료\n");
		printf("--------------------------------------\n");
		printf("번호를 선택하시오 : ");
		scanf("%d", &number);
		rewind(stdin);

		switch(number) {
			case 1:
				printf("영화의 제목을 입력하시오 : ");
				fgets(movie.title, TITLE_SIZE, stdin);
				movie.title[strlen(movie.title) - 1] = 0;

				printf("영화의 개봉 연도를 입력하시오 : ");
				scanf("%d", &movie.release);
				rewind(stdin);

				if(list == NULL) {
					printf("hello world\n");
					list = (NODE *)malloc(sizeof(NODE));
					strcpy(list->movie.title, movie.title);
					list->movie.release = movie.release;
					list->link = NULL;
				}
				else {
					NODE *new = (NODE *)malloc(sizeof(NODE));
					strcpy(new->movie.title, movie.title);
					new->movie.release = movie.release;
					new->link = list;
					list = new;	
				}

				break;
			case 2:
				for(temp = list; temp != NULL; temp = temp->link) {
					printf("--------------------------------------\n");
					printf("제     목 : %s\n", temp->movie.title);	
					printf("개봉 연도 : %d\n", temp->movie.release);	
				}
				if(list != NULL)
					printf("--------------------------------------\n");
				break;
			case 3:
				end = true;
				break;
		}

	}

	while(!list) {
		temp = list;
		list = list->link;
		free(temp);
	}
	return 0;
}
