#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
// system("cls");나 Sleep()을 위해 windows.h 사용. 만약 순수 gcc로 컴파일 할 경우 다른 헤더 파일로 수정 필요
#include <conio.h>
// 키보드 입력 대기를 받으려는 함수를 쓰기위해 include했으나 미사용
#include <time.h>
// 시간 흐르는 기능 구현하려 include했으나 미사용

// 파라메터
char name[256] = {'\0'};
int health = 3;
int intelligence = 3;
int mood = 3;
int fatigue = 1;
int hunger = 3;

void Prologue() // 프롤로그 함수
{
  printf("비가 내리는 습한 날씨. 나는 축축한 공원 바닥 위에 버려졌다. \n");
  Sleep(1500);
  printf("물 때문에 질퍽거리는 진흙과 머리 위에 끝없이 내리는 거친 빗줄기. \n");
  Sleep(1500);
  printf("벌써부터 따뜻한 집안이 그리워진다. \n");
  Sleep(1500);
  printf("그리고 주인과 처음 만났던 날이 그리워진다. \n");
  Sleep(1500);
  printf("나를 반갑고 따스하게 맞아주었던 주인. \n");
  Sleep(1500);
  printf("하지만 주인은 개인적인 일 때문에 쉽게 화를 내거나 짜증을 내며 점점 나를 거칠게 대했고, 결국 난 이 자리에 놓이게 되었다.\n");
  Sleep(3000);
  system("cls");

  printf("물론 즐거웠던 나날들도 많았다. 같이 던전에 가서 사냥을 하거나 여유를 만끽하며 산책을 나가거나 등등. \n");
  Sleep(1500);
  printf("하지만 결과가 이렇다. 나는 주인을 탓하고 싶지 않다. \n");
  Sleep(1500);
  printf("나한테서 근본적인 문제가 있지 않을까? 내가 주인에게 심한 장난을 한 것 때문일까? 내 모습이 징그러워서일까?\n");
  Sleep(3000);
  system("cls");

  printf("내가 좀 더 잘했어야 했는데. \n");
  Sleep(1500);
  printf("이제와서 후회해봤자 나를 필요로 하는 존재는 없어졌다. \n");
  Sleep(1500);
  printf("난 이대로 죽는 것일까. 눈이 점점 감겼고, 의식도 점점 멀어져갔다.\n");
  Sleep(3000);
  system("cls");

  printf("그 때, 누군가가 나를 따스한 손으로 들어올렸다. 그리고는 이렇게 말했다.\n");
  Sleep(1500);
  printf("\"넌 이름이 뭐니?\"\n");
  printf("슬라임의 이름은? \n");
  scanf("%s", &name);

  printf("\"말을 못하는 건가? 그럼 %s 으로 해줘야겠다.\"\n", name);
  Sleep(1500);

  printf("\"앞으로 잘 부탁해, %s! \"\n", name);
  Sleep(1500);

  printf("그렇게 나는 새로운 주인의 친구가 되었다.\n");
  Sleep(3000);
}

void BadEnding() // 배드 엔딩 함수
{
  system("cls");
  printf("          ██████████          \n");
  printf("      ████░░░░░░░░░░████      \n");
  printf("    ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██    \n");
  printf("  ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██  \n");
  printf("  ██▒▒▒██▒▒██▒▒▒▒▒██▒▒██▒▒██  \n");
  printf("██▒▒▒▒▒▒████▒▒▒▒▒▒▒████▒▒▒▒▒██\n");
  printf("██▒▒▒▒▒██▒▒██▒▒▒▒▒██▒▒██▒▒▒▒██\n");
  printf("██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██\n");
  printf("██▒▒▒▒▒▒▒▒▒████████▒▒▒▒▒▒▒▒▒██\n");
  printf("██▓▓▒▒▒▒▒▒██▒▒▒▒▒▒██▒▒▒▒▒▒▓▓██\n");
  printf("  ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██  \n");
  printf("    ██████████████████████ \n");

  printf("새로운 주인과 만나고 꽤나 시간이 지났다. \n");
  Sleep(1500);
  printf("같이 놀기도 하고 밥도 먹고 즐거운 추억을 쌓을 수 있었던 시간이었다. \n");
  Sleep(1500);
  printf("하지만 건강에 크게 신경 쓰지 못한 탓에 그만, 몸 상태가 좋지 않아졌다. \n");
  Sleep(1500);
  printf("주인님과의 즐거운 나날들을 더 이상 못 보낸다는 현실을 떠올려보니 마음이 울적해졌지만, 그래도 나는 만족했다. \n");
  Sleep(1500);
  printf("지금의 주인님이 없었다면, 난 이미 이전 주인에게 버려졌을 때 죽었겠지... \n");
  Sleep(3000);
  system("cls");

  printf("주인님께서는 너무 본인 탓을 안했으면 좋겠다. \n");
  Sleep(1500);
  printf("다음에 또 생물을 기르게 된다면 그 때 가서 잘하면 될 것이다.\n");
  Sleep(1500);
  printf("그치만 이거 하나만큼은 기억해줬으면 좋겠다.\n");
  Sleep(1500);
  printf("주인님과 나는 '소중한 친구'였다는 사실을 말이다.\n");
  Sleep(3000);
  system("cls");

  printf("~ Sad End ~");
  Sleep(10000);

  return;
}

void Tutorial() // 튜토리얼 함수
{
  system("cls");
  printf("이름 : 친구의 이름입니다.\n");
  printf("건강 : 친구의 건강 상태를 나타내는 수치입니다. 0이 될 시 게임이 오버됩니다\n");
  printf("지능 : 친구의 지능입니다. 0인 상태가 유지될 시 지속적으로 피로가 증가합니다.\n");
  printf("기분 : 친구의 기분입니다.\n");
  printf("피로도 : 친구의 피로도입니다. 0인 상태가 유지될 시 지속적으로 기분과 건강이 감소합니다.\n");
  printf("포만감 : 친구의 포만감입니다. 매 행동을 할 때 마다 높은 확률로 감소하며 \n0인 상태가 유지될 시 지속적으로 기분과 건강이 크게 감소합니다.\n\n");

  printf("식사 : 음식을 골라서 식사합니다. 기본적으로 포만감을 제공하며 음식에 따라 다른 능력치를 올려줍니다.\n");
  printf("공부 : 지능을 올리기 위한 활동입니다. 문제가 나오며, 맞출 시 지능이 올라갑니다. 틀릴 시에는 기분이 감소합니다.\n 이 활동은 일정 확률로 피로도를 증가시킵니다.\n");
  printf("산책 : 산책을 합니다. 해당 활동을 하면 기분 수치가 증가하며 피로도 또한 증가합니다.\n");
  printf("휴식 : 휴식합니다. 피로도가 크게 감소하며 지능이 감소합니다.\n\n");

  printf("엔딩 조건 : 건강, 지능, 기분 수치가 5이고 포만감이 2 이상이면 굿 엔딩이 나오며\n건강 수치가 0일 시 배드엔딩이 재생됩니다.\n\n");

  char input = 0;
  Sleep(100);
  while (1)
  {
    printf("그만 보려면 1을 입력하세요 : "); // 1을 입력하기 전 까지 위의 내용을 계속 표시
    scanf(" %c", &input);
    if (input == '1')
    {
      break;
    }
  }
}

void GoodEnding() // 굿 엔딩 함수
{
  system("cls");
  printf("새로운 주인과 만나고 꽤나 시간이 지났다. \n");
  Sleep(1500);
  printf("같이 놀기도 하고 밥도 먹고 즐거운 추억을 쌓을 수 있었던 시간이었다. \n");
  Sleep(1500);
  printf("앞으로도 주인님과의 즐거운 나날들이 기대된다. \n");
  Sleep(1500);
  printf("나에게 너무 과분한 행복이라고 생각한다. \n");
  Sleep(1500);
  printf("지금의 주인님이 없었다면, 난 이미 이전 주인에게 버려졌을 때 죽었을 것이다.");
  Sleep(1500);
  printf("그것 뿐만 아니라 이렇게 즐거운 생활을 즐길 수 있다는 것이 뜻깊고 행복하다.\n");
  Sleep(1500);
  printf("앞으로 주인님을 위해서 나도 열심히 해야겠다는 생각이 들었다.\n");
  Sleep(3000);
  system("cls");

  printf("앞으로도 주인님과 나는 '소중한 친구'로 지낼 것이고, 내 마음 속에 영원히 간직하게 될 소중한 추억을 쌓아나갈 것이다. \n");
  Sleep(1500);
  printf("~ Happy Ending ~");
  Sleep(10000);

  return;
}

void IfHealth() // 건강 체크 함수
{
  if (health >= 5)
  {
    health = 5;
  }
  if (health <= 0)
  {
    BadEnding(); // 건강이 나쁘면 배드 엔딩으로
    exit;
  }
  return;
}

void IfHunger() // 배고픔 체크 함수
{
  // 포만감 수치 계산
  if (hunger >= 5)
  {
    hunger = 5;
  }
  if (hunger <= 0)
  {
    hunger = 0;
    health = health - 2;
    mood = mood - 2;
    printf("배고픔으로 인해 건강과 기분이 2 감소하였습니다");
    Sleep(3000);
  }
  return;
}

void IfIntelligence() // 지능 체크 함수
{
  // 지능 수치 계산
  if (intelligence >= 5)
  {
    intelligence = 5;
  }
  if (intelligence <= 1)
  {
    intelligence = 1;
    fatigue++;
    printf("지능 부족으로 인해 피로도가 1 증가하였습니다");
    Sleep(3000);
  }
  return;
}

void IfFatigue() // 피로 체크 함수
{
  if (fatigue <= 1)
  {
    fatigue = 1;
  }
  if (fatigue >= 4)
  {
    fatigue = 3;
    health--;
    mood--;
    printf("피로로 인해 건강과 기분이 1 감소하였습니다");
    Sleep(3000);
  }
  return;
}

void IfMood() // 기분 체크 함수. 숫자가 초과되는 걸 방지
{
  if (mood >= 5)
  {
    mood = 5;
  }
  if (mood <= 1)
  {
    mood = 1;
  }
  return;
}

void IfGoodEnding() // 굿 엔딩 판단 함수
{
  if (health == 5)
  {
    if (intelligence == 5)
    {
      if (mood == 5)
      {
        if (hunger >= 2)
        {
          GoodEnding();
          exit;
        }
      }
    }
  }
}

void ReduceHunger() // 배고픔 감소 함수
{
  // 90%확률로 배고픔을 감소시키는 함수

  srand(time(NULL));
  int RandomReduce = 0;
  RandomReduce = rand() % 10;
  if (RandomReduce < 9)
  {
    printf("배고픔이 1 감소하였습니다");
    hunger--;
  }

  return;
}

void IncreaseFatigue() // 피로 증가 함수
{
  // 33%의 확률로 피로를 중가시키는 함수
  srand(time(NULL));
  int RandomIncrease = 0;
  RandomIncrease = rand() % 3;
  if (RandomIncrease = 1)
  {
    printf("피로도가 1 증가하였습니다");
    fatigue++;
  }

  return;
}

void GetMeal() // 식사 함수
{
  system("cls");

  // 입맛다시는 슬라임 그림 출력
  printf("          ██████████          \n");
  printf("      ████░░░░░░░░░░████      \n");
  printf("    ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██    \n");
  printf("  ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██  \n");
  printf("  ██▒▒▒▒██▒▒▒▒▒▒▒▒▒▒██▒▒▒▒██  \n");
  printf("██▒▒▒▒▒▒██▒▒▒▒▒▒▒▒▒▒██▒▒▒▒▒▒██\n");
  printf("██▒▒▒▒▒▒██▒▒▒▒▒▒▒▒▒▒██▒▒▒▒▒▒██\n");
  printf("██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██\n");
  printf("██▒▒▒▒▒▒▒▒██▒▒▒▒▒▒██▒▒▒▒▒▒▒▒██\n");
  printf("██▓▓▒▒▒▒▒▒▒▒██████▒▒▒▒▒▒▒▒▓▓██\n");
  printf("  ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██  \n");
  printf("    ██████████████████████ \n");

  // 음식들중 하나를 골라 슬라임에게 먹이를 주고 선택한 음식에 따라 능력치를 계산하는 함수
  printf("먹을 것을 정해주세요\n");
  int WhatFood = 0;

  while (1)
  {
    printf("밥(1), 과일(2), 채소(3)\n");
    printf("뒤로 가려면 4를 입력하세요\n");
    scanf(" %c", &WhatFood);
    if (WhatFood == '1')
    {
      system("cls");
      printf("          ██████████          \n");
      printf("      ████░░░░░░░░░░████      \n");
      printf("    ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██    \n");
      printf("  ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██  \n");
      printf("  ██▒▒▒▒████▒▒▒▒▒▒▒████▒▒▒██  \n");
      printf("██▒▒▒▒▒██▒▒██▒▒▒▒▒██▒▒██▒▒▒▒██\n");
      printf("██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██\n");
      printf("██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██\n");
      printf("██▒▒▒▒▒▒▒▒▒██▒▒▒▒▒██▒▒▒▒▒▒▒▒██\n");
      printf("██▓▓▒▒▒▒▒▒▒▒███████▒▒▒▒▒▒▒▓▓██\n");
      printf("  ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██  \n");
      printf("    ██████████████████████ \n");

      printf("밥을 먹었다! 배가 든든해진다.\n");
      printf("포만감이 2 증가하였습니다");
      hunger = hunger + 2;
      Sleep(2000);
      break;
    }

    else if (WhatFood == '2')
    {
      system("cls");
      printf("          ██████████          \n");
      printf("      ████░░░░░░░░░░████      \n");
      printf("    ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██    \n");
      printf("  ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██  \n");
      printf("  ██▒▒▒▒████▒▒▒▒▒▒▒████▒▒▒██  \n");
      printf("██▒▒▒▒▒██▒▒██▒▒▒▒▒██▒▒██▒▒▒▒██\n");
      printf("██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██\n");
      printf("██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██\n");
      printf("██▒▒▒▒▒▒▒▒▒██▒▒▒▒▒██▒▒▒▒▒▒▒▒██\n");
      printf("██▓▓▒▒▒▒▒▒▒▒███████▒▒▒▒▒▒▒▓▓██\n");
      printf("  ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██  \n");
      printf("    ██████████████████████ \n");

      printf("과일을 먹었다! 달콤한 맛이 기분을 좋게 한다.\n");
      printf("포만감이 1, 기분이 1 증가하였습니다");
      hunger++;
      mood++;
      Sleep(2000);
      break;
    }

    else if (WhatFood == '3')
    {
      system("cls");
      printf("          ██████████          \n");
      printf("      ████░░░░░░░░░░████      \n");
      printf("    ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██    \n");
      printf("  ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██  \n");
      printf("  ██▒▒▒▒████▒▒▒▒▒▒▒████▒▒▒██  \n");
      printf("██▒▒▒▒▒██▒▒██▒▒▒▒▒██▒▒██▒▒▒▒██\n");
      printf("██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██\n");
      printf("██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██\n");
      printf("██▒▒▒▒▒▒▒▒▒██▒▒▒▒▒██▒▒▒▒▒▒▒▒██\n");
      printf("██▓▓▒▒▒▒▒▒▒▒███████▒▒▒▒▒▒▒▓▓██\n");
      printf("  ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██  \n");
      printf("    ██████████████████████ \n");

      printf("채소를 먹었다! 건강해지는 맛이다.\n");
      printf("포만감이 1, 건강이 1 증가하였습니다.");
      hunger++;
      health++;
      Sleep(2000);
      break;
    }
  }

  return;
}

void Study() // 공부 함수
{
  // 집중하는 슬라임 그림 출력
  system("cls");

  printf("          ██████████          \n");
  printf("      ████░░░░░░░░░░████      \n");
  printf("    ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██    \n");
  printf("  ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██  \n");
  printf("  ██▒▒▒██▒▒▒▒▒▒▒▒▒▒▒▒▒██▒▒██  \n");
  printf("██▒▒▒▒▒▒▒██▒▒▒▒▒▒▒▒▒██▒▒▒▒▒▒██\n");
  printf("██▒▒▒▒▒▒▒▒▒██▒▒▒▒▒██▒▒▒▒▒▒▒▒██\n");
  printf("██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██\n");
  printf("██▒▒▒▒▒▒▒▒▒████████▒▒▒▒▒▒▒▒▒██\n");
  printf("██▓▓▒▒▒▒▒▒██▒▒▒▒▒▒██▒▒▒▒▒▒▓▓██\n");
  printf("  ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██  \n");
  printf("    ██████████████████████ \n");

  // 퀴즈 함수
  srand(time(NULL));
  int Quiz = 0;
  Quiz = rand() % 3;
  Quiz++;

  switch (Quiz)
  {
  case 1:
    // 덧셈 문제
    {
      srand(time(NULL));
      int randnum1 = 0;
      randnum1 = rand() % 20;

      srand(time(NULL));
      int randnum2 = 0;
      randnum2 = rand() % 20;

      int Quiz1Answer = 0;

      printf("%d + %d 는?", randnum1, randnum2);
      scanf("%d", &Quiz1Answer);

      if (Quiz1Answer == (randnum1 + randnum2))
      {
        system("cls");
        printf("정답입니다!\n");
        printf("          ██████████          \n");
        printf("      ████░░░░░░░░░░████      \n");
        printf("    ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██    \n");
        printf("  ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██  \n");
        printf("  ██▒▒▒▒████▒▒▒▒▒▒▒████▒▒▒██  \n");
        printf("██▒▒▒▒▒██▒▒██▒▒▒▒▒██▒▒██▒▒▒▒██\n");
        printf("██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██\n");
        printf("██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██\n");
        printf("██▒▒▒▒▒▒▒▒▒██▒▒▒▒▒██▒▒▒▒▒▒▒▒██\n");
        printf("██▓▓▒▒▒▒▒▒▒▒███████▒▒▒▒▒▒▒▓▓██\n");
        printf("  ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██  \n");
        printf("    ██████████████████████ \n");
        printf("지능이 1 증가하였습니다\n");
        intelligence++;
        IncreaseFatigue();
        Sleep(3000);
      }
      else
      {
        system("cls");
        printf("          ██████████          \n");
        printf("      ████░░░░░░░░░░████      \n");
        printf("    ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██    \n");
        printf("  ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██  \n");
        printf("  ██▒▒▒▒▒▒██▒▒▒▒▒▒██▒▒▒▒▒▒██  \n");
        printf("██▒▒▒▒▒▒██▒▒▒▒▒▒▒▒▒▒██▒▒▒▒▒▒██\n");
        printf("██▒▒▒▒██▒▒▒▒▒▒▒▒▒▒▒▒▒▒██▒▒▒▒██\n");
        printf("██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██\n");
        printf("██▒▒▒▒▒▒▒▒▒████████▒▒▒▒▒▒▒▒▒██\n");
        printf("██▓▓▒▒▒▒▒▒██▒▒▒▒▒▒██▒▒▒▒▒▒▓▓██\n");
        printf("  ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██  \n");
        printf("    ██████████████████████ \n");
        printf("기분이 1 감소하였습니다\n");
        mood--;
        IncreaseFatigue();
        Sleep(3000);
      }
      break;
    }
  case 2:
    // 국어 문제
    {
      int Quiz2Answer = 0;
      printf("한글을 창제한 왕은 누구일까요?\n");
      printf("(1)광개토대왕 (2)세종대왕 (3)고종");
      scanf("%d", &Quiz2Answer);

      if (Quiz2Answer == 2)
      {
        system("cls");
        printf("정답입니다!\n");
        printf("          ██████████          \n");
        printf("      ████░░░░░░░░░░████      \n");
        printf("    ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██    \n");
        printf("  ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██  \n");
        printf("  ██▒▒▒▒████▒▒▒▒▒▒▒████▒▒▒██  \n");
        printf("██▒▒▒▒▒██▒▒██▒▒▒▒▒██▒▒██▒▒▒▒██\n");
        printf("██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██\n");
        printf("██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██\n");
        printf("██▒▒▒▒▒▒▒▒▒██▒▒▒▒▒██▒▒▒▒▒▒▒▒██\n");
        printf("██▓▓▒▒▒▒▒▒▒▒███████▒▒▒▒▒▒▒▓▓██\n");
        printf("  ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██  \n");
        printf("    ██████████████████████ \n");
        printf("지능이 1 증가하였습니다\n");
        intelligence++;
        IncreaseFatigue();
        Sleep(3000);
      }
      else
      {
        system("cls");
        printf("오답입니다..\n");
        printf("          ██████████          \n");
        printf("      ████░░░░░░░░░░████      \n");
        printf("    ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██    \n");
        printf("  ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██  \n");
        printf("  ██▒▒▒▒████▒▒▒▒▒▒▒████▒▒▒██  \n");
        printf("██▒▒▒▒▒██▒▒██▒▒▒▒▒██▒▒██▒▒▒▒██\n");
        printf("██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██\n");
        printf("██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██\n");
        printf("██▒▒▒▒▒▒▒▒▒██▒▒▒▒▒██▒▒▒▒▒▒▒▒██\n");
        printf("██▓▓▒▒▒▒▒▒▒▒███████▒▒▒▒▒▒▒▓▓██\n");
        printf("  ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██  \n");
        printf("    ██████████████████████ \n");
        printf("지능이 1 증가하였습니다\n");
        printf("기분이 1 감소하였습니다\n");
        mood--;
        IncreaseFatigue();
        Sleep(3000);
      }
      break;
    }
  case 3:
    // 역사 문제
    {
      int Quiz3Answer = 0;
      printf("우리나라의 초대 대통령은 누구일까요? \n");
      printf("(1)이승만 (2)김대중 (3)김구");
      scanf("%d", &Quiz3Answer);

      if (Quiz3Answer == 1)
      {
        system("cls");
        printf("정답입니다!\n");
        printf("          ██████████          \n");
        printf("      ████░░░░░░░░░░████      \n");
        printf("    ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██    \n");
        printf("  ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██  \n");
        printf("  ██▒▒▒▒████▒▒▒▒▒▒▒████▒▒▒██  \n");
        printf("██▒▒▒▒▒██▒▒██▒▒▒▒▒██▒▒██▒▒▒▒██\n");
        printf("██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██\n");
        printf("██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██\n");
        printf("██▒▒▒▒▒▒▒▒▒██▒▒▒▒▒██▒▒▒▒▒▒▒▒██\n");
        printf("██▓▓▒▒▒▒▒▒▒▒███████▒▒▒▒▒▒▒▓▓██\n");
        printf("  ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██  \n");
        printf("    ██████████████████████ \n");
        printf("지능이 1 증가하였습니다\n");
        intelligence++;
        IncreaseFatigue();
        Sleep(3000);
      }
      else
      {
        system("cls");
        printf("오답입니다..\n");
        printf("          ██████████          \n");
        printf("      ████░░░░░░░░░░████      \n");
        printf("    ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██    \n");
        printf("  ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██  \n");
        printf("  ██▒▒▒▒▒▒██▒▒▒▒▒▒██▒▒▒▒▒▒██  \n");
        printf("██▒▒▒▒▒▒██▒▒▒▒▒▒▒▒▒▒██▒▒▒▒▒▒██\n");
        printf("██▒▒▒▒██▒▒▒▒▒▒▒▒▒▒▒▒▒▒██▒▒▒▒██\n");
        printf("██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██\n");
        printf("██▒▒▒▒▒▒▒▒▒████████▒▒▒▒▒▒▒▒▒██\n");
        printf("██▓▓▒▒▒▒▒▒██▒▒▒▒▒▒██▒▒▒▒▒▒▓▓██\n");
        printf("  ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██  \n");
        printf("    ██████████████████████ \n");
        printf("기분이 1 감소하였습니다\n");
        mood--;
        IncreaseFatigue();
        Sleep(3000);
      }
      break;
    }
  }
  return;
}

void TakeAWalk() // 산책 함수
{
  system("cls");

  // 기뻐하는 슬라임 출력
  printf("          ██████████          \n");
  printf("      ████░░░░░░░░░░████      \n");
  printf("    ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██    \n");
  printf("  ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██  \n");
  printf("  ██▒▒▒▒████▒▒▒▒▒▒▒████▒▒▒██  \n");
  printf("██▒▒▒▒▒██▒▒██▒▒▒▒▒██▒▒██▒▒▒▒██\n");
  printf("██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██\n");
  printf("██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██\n");
  printf("██▒▒▒▒▒▒▒▒▒██▒▒▒▒▒██▒▒▒▒▒▒▒▒██\n");
  printf("██▓▓▒▒▒▒▒▒▒▒███████▒▒▒▒▒▒▒▓▓██\n");
  printf("  ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██  \n");
  printf("    ██████████████████████ \n");

  // 산책하는 함수
  if (mood == 1)
  {
    printf("상쾌한 마음으로 산책을 나오니 숨쉬는 공기마저 향기롭다.\n");
  }
  else if (mood == 2)
  {
    printf("산뜻한 기분으로 맡는 꽃향기는 기분을 더욱 좋게 해준다.\n");
  }
  else if (mood == 3)
  {
    printf("풀내음을 맡으며 걸어다니니 힘든 순간의 기억이 사라지는 듯 하다.\n");
  }
  else if (mood == 4)
  {
    printf("맑은 하늘을 보면서 산책하니 마음속 무거운 짐도 한층 가벼워지는 듯 하다.\n");
  }
  else if (mood == 5)
  {
    printf("지친 마음도 산책을 하면서 조금 나아지는게 느껴진다.\n");
  }
  Sleep(1500);

  printf("기분이 1 증가하였습니다\n");
  printf("피로도가 1 증가하였습니다");
  mood++;
  fatigue++;

  Sleep(1500);

  // 본래 산책 시 랜덤한 확률로 특별식을 얻을 수 있게 하려 했으나 완전히 구현하지 못 함
  // Sleep(1500);
  // srand(time(NULL));
  // int per = 0;
  // per = rand() % 3;
  // if (per == 1)
  //{
  //    printf("산책을 하다 우연히 특별식을 발견했습니다!");
  //    Sleep(1500);
  // }

  return;
}

void TakeABreak() // 휴식 함수
{
  system("cls");

  // 쉬는 슬라임 그림 출력

  printf("          ██████████          \n");
  printf("      ████░░░░░░░░░░████      \n");
  printf("    ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██    \n");
  printf("  ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██  \n");
  printf("  ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██  \n");
  printf("██▒▒▒▒▒██████▒▒▒▒▒██████▒▒▒▒██\n");
  printf("██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██\n");
  printf("██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██\n");
  printf("██▒▒▒▒▒▒▒▒▒█████████▒▒▒▒▒▒▒▒██\n");
  printf("██▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓██\n");
  printf("  ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██  \n");
  printf("    ██████████████████████ \n");

  // 랜덤 출력

  srand(time(NULL));
  int BreakText = 0;
  BreakText = rand() % 3;

  switch (BreakText)
  {
  case 1:
    printf("푹신한 이불에 누워 휴식을 취하니 피로가 사라지는 것만 같다.");
    Sleep(2000);
    break;
  case 2:
    printf("피곤해서 누우니 힘들 일은 생각나지도 않는다");
    Sleep(2000);
    break;
  case 3:
    printf("피로한 몸을 이끌고 누우니 다시는 일어나고 싶지 않은 편안함을 느꼈다");
    Sleep(2000);
    break;
  }

  printf("\n피로도가 2 감소하였습니다");
  printf("지능이 1 감소하였습니다");
  fatigue = fatigue - 2;
  intelligence--;

  return;
}

void MainUI() // 메인 UI 함수
{
  // 화면 초기화
  system("cls");

  // 슬라임 그림과 상태창
  printf("          ██████████          \n");
  printf("      ████░░░░░░░░░░████      \n");
  printf("    ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██    \n");
  printf("  ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██  \n");
  printf("  ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██  \n");
  printf("██▒▒▒▒▒██████▒▒▒▒▒██████▒▒▒▒██\n");
  printf("██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██\n");
  printf("██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██\n");
  printf("██▒▒▒▒▒▒▒▒▒██▒▒▒▒▒██▒▒▒▒▒▒▒▒██\n");
  printf("██▓▓▒▒▒▒▒▒▒▒███████▒▒▒▒▒▒▒▓▓██\n");
  printf("  ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██  \n");
  printf("    ██████████████████████ \n");

  printf("이름 : %s\n", name);
  printf("건강(0-5) : %d, 지능(1~5) : %d, 기분(1~5) : %d, 피로(1~3) : %d 포만감(1~5) : %d \n\n", health, intelligence, mood, fatigue, hunger);

  // 선택지 제시
  int choice = 0;
  Sleep(300);
  while (1)
  {
    printf("식사(1), 공부(2), 산책(3), 휴식(4), 설명(5) 중 하나를 선택해주세요 :");
    scanf(" %c", &choice);
    if (choice == '1')
    {
      GetMeal();
      break;
    }
    else if (choice == '2')
    {
      Study();
      ReduceHunger();
      break;
    }
    else if (choice == '3')
    {
      TakeAWalk();
      ReduceHunger();
      break;
    }
    else if (choice == '4')
    {
      TakeABreak();
      ReduceHunger();
      break;
    }
    else if (choice == '5')
    {
      Tutorial();
      break;
    }
  }
  return;
}

int main() //프로그램 시작
{

  // 프롤로그 출력
  Prologue();
  // 튜토리얼 출력
  Tutorial();

  // 메인화면 출력
  while (1)
  {
    MainUI();
    // 스테이터스 차감 조건 및 범위 조사

    IfHealth();
    IfHunger();
    IfIntelligence();
    IfFatigue();
    IfMood();
    IfGoodEnding();
  }
  
  return 0;
}
