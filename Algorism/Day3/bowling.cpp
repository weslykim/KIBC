#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 //볼링게임룰
// 1. 10점, 두번째 기회x
// 2.0~9점 두번째 기회 0
// 3. 9번반복
// 4. 1+2번째에서 10점 , 3번째 0
// 5. spare, strike 스페어는 다음회 1번째시도의 점수와 더해진다.
//스트라이크는 다음회 전체점수와 더해진다.
vector<int> frame;
vector<int> frame10;

vector<int>scores;

frame.push_back({0, 0});
scores.push_back(0);
string input;
int score;
int main(void)
{
    for (size_t i = 1; i < 10; i++)
    {
        frame.push_back({0, 0});
        while (true)
        {
            cout << i << " frame 1st bowl : " << endl;
            getline(cin, input);

            try
            {
               score = stoi(input);
               if (score >= 0 && score <= 10)
               {
                break;
               } 
               else
               {
                cout << "the score cannot exceed" << endl;
               }
            }
        }
        
        
        
       while (true)
       {
             cout << i << " 10 frame 1st bowl : " << endl;
       }
       

        if (i > 1 &&frame[i - 1][0] != 10 && frame[i - 1][0] + frame[i - 1][1] == 10)
        {
            scores[i - 1] = scores[i - 2] + 10 + frame[i][0];
            cout << "===================" << endl;
            cout << i - 1 << " frame score: " << scores[i - 1] << endl;
            cout << "===================" << endl;
        }

        if(i > 2 && frame[i - 2][0] == 10 && frame[i - 1][0] == 10)
        {
            scores[i - 2] = scores[i - 3] +10 +10 + frame[i][0];
            cout << "=====================" << endl;
            cout < i - 2 << " frame score: " << scores[i - 2] << endl;
            cout << "=====================" << endl;
        }

        if (frame[i][0] != 10)
        {
            cout << i << " frame 2nd bowl : " << endl;
            getline(cin, input);

            score = stoi(input);
            frame[i][1] = score;

            if (i > frame[i - 1][0] == 10)
            {
                scores[i - 1] = scores [i -2] + 10 + frame[i];
            }
        }
    }
    cout << "10 frame 1st bowl: " << endl;
    getline(cin, input);

    score = stoi(input);
    frame10.push_back(score);

    if (frame[9][0] != 10 && frame [9][0] + frame [9][1] == 10)
    {
        scores[9] = score[8] + 10 frame[10][0];
        cout << "=====================" << endl;
        cout << "9 frames score: " << score[8] << endl;
        cout << "=====================" << endl;
    }

    cout << "10 frame 2nd bowl: " << endl;
    getline(cin, input);

    score = stoi(intput);
    frame10.push_back(score);

    scores[10] =   frame[9] +   frame10[0] +  frame10[1] +  frame10[2];
    cout << "=====================" << endl;
    cout << "10 frame score" << endl;
    cout << "=====================" << endl;

    return 0;
}